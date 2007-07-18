"======================================================================
|
|   Smalltalk proxy class loader -- auxiliary classes
|
|
 ======================================================================"


"======================================================================
|
| Copyright 1999, 2000, 2001, 2002, 2007 Free Software Foundation, Inc.
| Written by Paolo Bonzini.
|
| This file is part of GNU Smalltalk.
|
| GNU Smalltalk is free software; you can redistribute it and/or modify it
| under the terms of the GNU General Public License as published by the Free
| Software Foundation; either version 2, or (at your option) any later version.
| 
| GNU Smalltalk is distributed in the hope that it will be useful, but WITHOUT
| ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
| FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
| details.
| 
| You should have received a copy of the GNU General Public License along with
| GNU Smalltalk; see the file COPYING.  If not, write to the Free Software
| Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.  
|
 ======================================================================"

STInST addSubspace: #STClassLoaderObjects!
Namespace current: STClassLoaderObjects!

Object subclass: #PseudoBehavior
        instanceVariableNames: 'subclasses methods loader'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

PseudoBehavior comment:
'This class represent a proxy for a class that is found by an
STClassLoader in the source code it parses.'!

Collection subclass: #OverlayDictionary
           instanceVariableNames: 'primary secondary additionalSize'
           classVariableNames: ''
           poolDictionaries: ''
           category: 'System-Compiler'!

OverlayDictionary comment:
'This class can access multiple Dictionaries and return keys from
any of them'!

!OverlayDictionary class methodsFor: 'instance creation'!

on: backupDictionary
    backupDictionary isNil ifTrue: [ ^LookupTable new ].
    ^self new primary: LookupTable new; secondary: backupDictionary
! !

!OverlayDictionary methodsFor: 'accessing'!

do: aBlock
    primary do: aBlock.
    secondary keysAndValuesDo: [ :k :v |
        (primary includes: k) ifFalse: [ aBlock value: v ] ]!

keysDo: aBlock
    primary keysDo: aBlock.
    secondary keysAndValuesDo: [ :k :v |
        (primary includes: k) ifFalse: [ aBlock value: k ] ]!

keysAndValuesDo: aBlock
    primary keysAndValuesDo: aBlock.
    secondary keysAndValuesDo: [ :k :v |
        (primary includes: k) ifFalse: [ aBlock value: k value: v ] ]!

keys
    ^primary keys addAll: secondary keys; yourself!

values
    ^self asOrderedCollection!

size
    ^primary size + additionalSize!

at: key
    ^primary at: key ifAbsent: [ secondary at: key ]!

at: key put: value
    primary at: key ifAbsent: [
        (secondary includesKey: key)
	    ifTrue: [ additionalSize := additionalSize - 1 ] ].
    ^primary at: key put: value!

at: key ifAbsent: aBlock
    ^primary at: key ifAbsent: [ secondary at: key ifAbsent: aBlock ]!

at: key ifAbsentPut: aBlock
    ^primary at: key ifAbsent: [
        (secondary includesKey: key)
	    ifTrue: [ secondary at: key ]
	    ifFalse: [ primary at: key put: aBlock value ] ]! !



!OverlayDictionary methodsFor: 'initializing'!

primary: aDictionary
    primary := aDictionary!

secondary: aDictionary
    secondary := aDictionary.
    additionalSize := secondary size.
! !


PseudoBehavior subclass: #UndefinedClass
        instanceVariableNames: 'name class'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

UndefinedClass comment:
'This class represent a proxy for a class that is found by an
STClassLoader while parsing source code, but is not
the system.  It is possible to handle subclasses and extension methods
of such classes.'!

PseudoBehavior subclass: #UndefinedMetaclass
        instanceVariableNames: 'instanceClass'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

UndefinedMetaclass comment:
'This class represent a proxy for the metaclass of a class that is found
by an STClassLoader while parsing source code, but is not the system.'!

PseudoBehavior subclass: #ProxyClass
        instanceVariableNames: 'proxy otherSide'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

ProxyClass comment:
'This class represent a proxy for a preexisting class that is found by an
STClassLoader as a superclass while parsing source code.  Proxying
preexisting classes is necessary to correctly augment their subclasses
with the new classes, and to handle extension methods.'!

ProxyClass subclass: #ProxyNilClass
        instanceVariableNames: ''
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

ProxyClass comment:
'This class represent a proxy for the nil fake superclass.'!

PseudoBehavior subclass: #LoadedBehavior
        instanceVariableNames: 'instVars superclass comment '
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

LoadedBehavior comment:
'This class represent a proxy for a class object that is defined
by an STClassLoader.'!

LoadedBehavior subclass: #LoadedClass
        instanceVariableNames: 'name category sharedPools classVars class
				environment shape '
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

LoadedClass comment:
'This class represent a proxy for a class whose source code is parsed
by an STClassLoader.'!

LoadedBehavior subclass: #LoadedMetaclass
        instanceVariableNames: 'instanceClass '
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

LoadedMetaclass comment:
'This class represent a proxy for a metaclass whose source code is parsed
by an STClassLoader.'!

Object subclass: #LoadedMethod
        instanceVariableNames: 'node'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

LoadedMethod comment:
'This class represent a proxy for a method, containing the source code
that was parsed by an STClassLoader.'!

BindingDictionary variableSubclass: #PseudoNamespace
        instanceVariableNames: 'loader subspaces'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

PseudoNamespace comment:
'This class represent a proxy for a namespace that an STClassLoader finds
along the way.'!

PseudoNamespace variableSubclass: #LoadedNamespace
        instanceVariableNames: 'name'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

PseudoNamespace comment:
'This class represent a proxy for a namespace that is created by the
source code that an STClassLoader is parsing.'!

PseudoNamespace variableSubclass: #ProxyNamespace
        instanceVariableNames: 'proxy'
        classVariableNames: ''
        poolDictionaries: ''
        category: 'System-Compiler'!

ProxyNamespace comment:
'This class represent a proxy for a preexisting namespace that is
referenced by the source code that an STClassLoader is parsing.'!

!PseudoBehavior class methodsFor: 'creating'!

for: aSTClassLoader
    ^self new initialize: aSTClassLoader
! !

!PseudoBehavior methodsFor: 'creating classes'!

variableByteSubclass: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ivn
	classVariableNames: cvn
	poolDictionaries: pd
	category: c
	shape: #byte
	loader: loader!
 
variableWordSubclass: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ivn
	classVariableNames: cvn
	poolDictionaries: pd
	category: c
	shape: #word
	loader: loader!
 
variable: shape subclass: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ivn
	classVariableNames: cvn
	poolDictionaries: pd
	category: c
	shape: shape
	loader: loader!
 
variableSubclass: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ivn
	classVariableNames: cvn
	poolDictionaries: pd
	category: c
	shape: #pointer
	loader: loader!
 
subclass: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ivn
	classVariableNames: cvn
	poolDictionaries: pd
	category: c
	shape: nil
	loader: loader!

subclass: s

    ^LoadedClass
	superclass: self
	name: s
	instanceVariableNames: ''
	classVariableNames: ''
	poolDictionaries: ''
	category: ''
	shape: nil
	loader: loader!

!PseudoBehavior methodsFor: 'method dictionary services'!

selectors
    "Answer a Set of the receiver's selectors"
    ^self methodDictionary keys
!

allSelectors
    "Answer a Set of all the selectors understood by the receiver"
    | aSet |
    aSet := self selectors.
    self allSuperclassesDo:
        [ :superclass | aSet addAll: superclass selectors ].
    ^aSet
!

compiledMethodAt: selector
    "Return the compiled method associated with selector, from the local
    method dictionary.  Error if not found."
    ^self methodDictionary at: selector
!

includesSelector: selector
    "Return whether there is a compiled method associated with
    selector, from the local method dictionary."
    ^self methodDictionary includesKey: selector
!

parseNodeAt: selector
    "Answer the parse tree (if available) for the given selector"
    ^(self compiledMethodAt: selector) methodParseNode
!

sourceCodeAt: selector
    "Answer source code (if available) for the given selector"
    | source |
    source := (self compiledMethodAt: selector) methodSourceCode.
    source isNil ifTrue: [ '" *** SOURCE CODE NOT AVAILABLE *** "' copy ].
    ^source asString
!

>> selector
    "Return the compiled method associated with selector, from the local
    method dictionary.  Error if not found."
    ^self methodDictionary at: selector
! !


!PseudoBehavior methodsFor: 'navigating hierarchy'!

subclasses
    subclasses isNil
        ifTrue: [ subclasses := OrderedCollection new ].
    ^subclasses
!

addSubclass: aClass
    "Add aClass asone of the receiver's subclasses."
    self subclasses remove: aClass ifAbsent: [].
    self subclasses add: aClass
!

removeSubclass: aClass
    "Remove aClass from the list of the receiver's subclasses"
    self subclasses remove: aClass ifAbsent: [].
!

allSubclassesDo: aBlock
    "Invokes aBlock for all subclasses, both direct and indirect."
    self subclasses do: [ :class |
        aBlock value: class.
        class allSubclassesDo: aBlock
    ].
!

allSuperclassesDo: aBlock
    "Invokes aBlock for all superclasses, both direct and indirect."
    | class superclass |
    class := self.
    [ superclass := class superclass.
      class := superclass.
      superclass notNil ] whileTrue:
        [ aBlock value: superclass ]
!

withAllSubclassesDo: aBlock
    "Invokes aBlock for the receiver and all subclasses, both direct
     and indirect."
    aBlock value: self.
    self allSubclassesDo: aBlock.
!

withAllSuperclassesDo: aBlock
    "Invokes aBlock for the receiver and all superclasses, both direct
     and indirect."
    | class |
    class := self.
    [ aBlock value: class.
      class := class superclass.
      class notNil ] whileTrue
!

selectSubclasses: aBlock
    "Return a Set of subclasses of the receiver satisfying aBlock."
    | aSet |
    aSet := Set new.
    self allSubclassesDo: [ :subclass | (aBlock value: subclass)
                                            ifTrue: [ aSet add: subclass ] ].
    ^aSet
!

selectSuperclasses: aBlock
    "Return a Set of superclasses of the receiver satisfying aBlock."
    | aSet |
    aSet := Set new.
    self allSuperclassesDo: [ :superclass | (aBlock value: superclass)
                                            ifTrue: [ aSet add: superclass ] ].
    ^aSet
!

subclassesDo: aBlock
    "Invokes aBlock for all direct subclasses."
    self subclasses do: aBlock
! !

!PseudoBehavior methodsFor: 'accessing'!

loader
    ^loader
!

allInstVarNames
    "Answer the names of the variables in the receiver's inst pool dictionary
     and in each of the superinstes' inst pool dictionaries"

    ^self superclass allInstVarNames, self instVarNames
!

allClassVarNames
    "Answer the names of the variables in the receiver's class pool dictionary
     and in each of the superclasses' class pool dictionaries"

    ^self asClass allClassVarNames
!

allSharedPools
    "Return the names of the shared pools defined by the class and any of
     its superclasses"

    ^self asClass allSharedPools
!

nameIn: aNamespace
    "Answer the class name when the class is referenced from aNamespace"
    | proxy reference |
    proxy := loader proxyForNamespace: aNamespace.
    reference := proxy at: self name asSymbol ifAbsent: [ nil ].
    self = reference ifTrue: [ ^self name ].
    ^(self environment nameIn: aNamespace), '.', self printString
! !


!PseudoBehavior methodsFor: 'testing'!

isDefined
    ^true
!


!PseudoBehavior methodsFor: 'abstract'!

asClass
    self subclassResponsibility
!

asMetaclass
    self subclassResponsibility
!

category
    ^nil
!

comment
    self subclassResponsibility
!

comment: aString
    self subclassResponsibility
!

shape
    self subclassResponsibility
!

shape: aSymbol
    self subclassResponsibility
!

environment
    self subclassResponsibility
!

kindOfSubclass
    self subclassResponsibility
!

sharedPools
    self subclassResponsibility
!

superclass
    self subclassResponsibility
!

methodDictionary
    methods isNil ifTrue: [ methods := LookupTable new ].
    ^methods
!

methodDictionary: aDictionary
    methods := aDictionary
! !

!PseudoBehavior methodsFor: 'printing'!

printOn: aStream
    aStream
	nextPutAll: self name!
! !

!PseudoBehavior methodsFor: 'storing'!

storeOn: aStream
    aStream
	nextPutAll: self name!
! !

!PseudoBehavior methodsFor: 'initializing'!

initialize: aSTClassLoader
    loader := aSTClassLoader
! !

!ProxyClass class methodsFor: 'creating classes'!

on: aClass for: aSTClassLoader
    ^(self for: aSTClassLoader) setProxy: aClass
! !

!ProxyClass methodsFor: 'delegation'!

= anObject
    ^proxy == anObject 
	or: [ anObject class == self class
		 and: [ proxy == anObject proxy ] ]
!

hash
    ^proxy hash
!

proxy
   ^proxy
!

printOn: aStream
    proxy printOn: aStream
!

asClass
    proxy isClass ifTrue: [ ^self ].
    otherSide isNil
	ifTrue: [ otherSide := ProxyClass on: proxy instanceClass for: self loader ].
    ^otherSide
!

asMetaclass
    proxy isMetaclass ifTrue: [ ^self ].
    otherSide isNil
	ifTrue: [ otherSide := ProxyClass on: proxy class for: self loader ].
    ^otherSide
!

isClass
    ^proxy isClass
!

isMetaclass
    ^proxy isClass
!

category
    ^proxy category
!

comment
    ^proxy comment
!

environment
    ^proxy environment
!

kindOfSubclass
    ^proxy kindOfSubclass
!

superclass
    ^proxy superclass
!

doesNotUnderstand: aMessage
    ^proxy perform: aMessage
! !


!ProxyClass methodsFor: 'initializing'!

setProxy: aClass
    proxy := aClass.
    self methodDictionary: (OverlayDictionary on: proxy methodDictionary)
! !

!ProxyNilClass methodsFor: 'accessing'!

nameIn: aNamespace
    ^'nil'
! !

!UndefinedClass class methodsFor: 'creating'!

name: aSymbol for: aLoader
    ^(self for: aLoader) setName: aSymbol
! !

!UndefinedClass methodsFor: 'testing'!

isDefined
    ^false
! !

!UndefinedClass methodsFor: 'accessing'!

asMetaclass
    ^class!

asClass
    ^self!

name
    ^name!

nameIn: aNamespace
    ^name asString!

setName: aSymbol
    name := aSymbol.
    class := UndefinedMetaclass for: self.
! !

!UndefinedClass methodsFor: 'printing'!

printOn: aStream
    aStream nextPutAll: self name!
! !

!UndefinedMetaclass class methodsFor: 'creating'!

for: aClass
    ^(super for: aClass loader)
	initializeFor: aClass! !

!UndefinedMetaclass methodsFor: 'printing'!

printOn: aStream
    aStream
	nextPutAll: self asClass name;
	nextPutAll: ' class'!
! !

!UndefinedMetaclass methodsFor: 'initializing'!

initializeFor: aClass
    super initialize: aClass loader.
    instanceClass := aClass! !

!UndefinedMetaclass methodsFor: 'accessing'!

isMetaclass
    ^true
!

asClass
    ^instanceClass
!

asMetaclass
    ^self
!

shape
    ^nil
! !

!UndefinedMetaclass methodsFor: 'testing'!

isDefined
    ^false
! !

!UndefinedMetaclass methodsFor: 'delegation'!

name
    ^self asClass name
! !



!LoadedMetaclass class methodsFor: 'creating'!

for: aClass
    ^(super for: aClass loader)
	initializeFor: aClass! !

!LoadedBehavior methodsFor: 'accessing'!

instVarNames
    "Answer the names of the variables in the inst pool dictionary"

    ^instVars
!

instanceVariableNames: ivn
    instVars := ivn subStrings.
!

superclass
    ^superclass
! !

!LoadedMetaclass methodsFor: 'printing'!

printOn: aStream
    aStream
	nextPutAll: self asClass name;
	nextPutAll: ' class'!
! !

!LoadedMetaclass methodsFor: 'accessing'!

isMetaclass
    ^true
!

asClass
    ^instanceClass
!

asMetaclass
    ^self
! !

!LoadedMetaclass methodsFor: 'delegation'!

name
    ^self asClass name
!

category
    "Answer the class category"
    ^self asClass category
!

comment
    "Answer the class comment"
    ^self asClass comment
!

comment: aString
    "Answer the class comment"
    ^self asClass comment: aString
!

environment
    "Answer the namespace in which the receiver is implemented"
    ^self asClass environment
!

shape
    ^nil
!

classVarNames
    "Answer the names of the variables in the class pool dictionary"

    ^self asClass classVarNames
!

sharedPools
    "Return the names of the shared pools defined by the class"

    ^self asClass sharedPools
! !



!LoadedMetaclass class methodsFor: 'creating'!

for: aClass
    ^(super for: aClass loader)
	initializeFor: aClass! !

!LoadedMetaclass methodsFor: 'initializing'!

initializeFor: aClass
    super initialize: aClass loader.
    instanceClass := aClass.
    instVars := Array new.
    superclass := aClass superclass class.
    superclass addSubclass: self
!

!LoadedClass class methodsFor: 'creating classes'!

superclass: sup name: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c shape: sh loader: loader
    ^(self for: loader)
	superclass: sup name: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c shape: sh
! !

!LoadedClass methodsFor: 'accessing'!

isClass
    ^true
!

asClass
    ^self
!

asMetaclass
    ^class
!

name
    "Answer the class name"
    ^name
!

category
    "Answer the class category"
    ^category
!

category: aString
    "Set the class category"
    category := aString
!

shape
    "Answer the class shape"
    ^shape
!

shape: aSymbol
    "Set the class shape"
    shape := aSymbol
!

comment
    "Answer the class comment"
    ^comment
!

comment: aString
    "Set the class comment"
    comment := aString
!

environment
    "Answer the namespace in which the receiver is implemented"
    ^environment
!

kindOfSubclass
    "Return a string indicating the type of class the receiver is"
    self isVariable ifFalse: [ ^'subclass:' ].
    self isPointers ifTrue: [ ^'variableSubclass:' ].
    ^'variable: ', self shape storeString, 'subclass:'
! 

classVarNames
    "Answer the names of the variables in the class pool dictionary"

    ^classVars
!

sharedPools
    "Return the names of the shared pools defined by the class"

    ^sharedPools
!

addClassVarName: aString
    "Return the names of the shared pools defined by the class"

    sharedPools := sharedPools copyWith: aString
!

import: aNamespace
    "Return the names of the shared pools defined by the class"

    sharedPools := sharedPools copyWith: (aNamespace nameIn: self environment)
! !


!LoadedClass methodsFor: 'initializing'!

superclass: sup name: s instanceVariableNames: ivn classVariableNames: cvn
	poolDictionaries: pd category: c shape: sh
    superclass := sup.
    name := s.
    category := c.
    shape := sh.
    environment := loader currentNamespace.
    class := LoadedMetaclass for: self.
    instVars := ivn subStrings.
    classVars := cvn subStrings.
    sharedPools := pd subStrings.
    superclass addSubclass: self.
    environment at: name put: self.
! !

!LoadedMethod class methodsFor: 'instance creation'!

node: aRBMethodNode
    ^self new
	    node: aRBMethodNode
!

!LoadedMethod methodsFor: 'accessing'!

node
    ^node
!

node: aRBMethodNode
    node := aRBMethodNode
!

methodParseNode
    ^self node
!

methodCategory
    ^node category
!

methodSourceCode
    ^node source
!

selector
    ^node selector asSymbol
!

methodSourceString
    "FIXME: this relies on the source code being a MappedCollection."
    ^node source domain asString
! !

!LoadedMethod methodsFor: 'empty stubs'!

discardTranslation
! !

!PseudoNamespace methodsFor: 'abstract'!

name
    self subclassResponsibility! !

!PseudoNamespace methodsFor: 'printing'!

nameIn: aNamespace
    "Answer Smalltalk code compiling to the receiver when the current
     namespace is aNamespace"

    | reference proxy |
    proxy := loader proxyForNamespace: aNamespace.
    reference := proxy at: self name asSymbol ifAbsent: [ nil ].
    self = reference ifTrue: [ ^self name ].
    ^(self superspace nameIn: aNamespace ), '.', self name
!

printOn: aStream
    aStream nextPutAll: (self nameIn: Namespace current)
! !

!PseudoNamespace methodsFor: 'storing'!

storeOn: aStream
    aStream nextPutAll: (self nameIn: Namespace current)
! !

!PseudoNamespace methodsFor: 'initializing'!

copyEmpty: newSize
    ^(super copyEmpty: newSize)
	setLoader: loader;
	setSubspaces: subspaces;
	yourself
!

setLoader: aSTClassLoader
    loader := aSTClassLoader
!

setSubspaces: aSet
    subspaces := aSet
! !

!PseudoNamespace methodsFor: 'accessing'!

superspace
    ^self environment
!

setSuperspace: superspace
    self environment: superspace.
    self environment subspaces add: self
!

subspaces
    subspaces isNil ifTrue: [ subspaces := IdentitySet new ].
    ^subspaces
!

addSubspace: aSymbol
    ^LoadedNamespace name: aSymbol in: self for: loader
! !

!LoadedNamespace class methodsFor: 'instance creation'!

name: aSymbol in: aDictionary for: aSTClassLoader
    ^aDictionary at: aSymbol put: (self new
	name: aSymbol;
	setLoader: aSTClassLoader;
	environment: aDictionary;
	yourself)
! !

!LoadedNamespace methodsFor: 'initializing'!
copyEmpty: newSize
    ^(super copyEmpty: newSize)
        name: name;
    	yourself
! !
 
!LoadedNamespace methodsFor: 'accessing'!

at: key ifAbsent: aBlock
    "Return the value associated to the variable named as specified
    by `key'. If the key is not found search will be brought on in
    superspaces, finally evaluating aBlock if the variable cannot be
    found in any of the superspaces."
    | index space |
    space := self.
    [
	space at: key ifPresent: [ :value | ^value ].
	space := space superspace.
	space isNil 
    ] whileFalse.
    ^aBlock value
!

name
    ^name
!

name: aSymbol
    name := aSymbol
! !

!LoadedNamespace methodsFor: 'printing'!

printOn: aStream
    aStream
	nextPutAll: 'LoadedNamespace[';
	nextPutAll: self name;
	nextPut: $]! !


!ProxyNamespace class methodsFor: 'accessing'!

on: aDictionary for: aSTClassLoader
    | instance superspace subspaceProxy |
    instance := self new
	setLoader: aSTClassLoader;
	setProxy: aDictionary;
	yourself.

    "Link the instance to itself."
    instance
	at: aDictionary name asSymbol put: instance.

    "Create proxies for the superspaces and for links to the
     subspaces"
    aDictionary superspace isNil ifFalse: [
	superspace := aDictionary superspace.
	instance
	    setSuperspace: (aSTClassLoader proxyForNamespace: superspace).

	subspaceProxy := instance.
	[ superspace isNil ] whileFalse: [
	    superspace := aSTClassLoader proxyForNamespace: superspace.
	    superspace
		at: subspaceProxy name asSymbol put: subspaceProxy.
	    instance
		at: superspace name asSymbol put: superspace.
	    subspaceProxy := superspace.
	    superspace := superspace superspace
	].
    ].

    ^instance
! !

!ProxyNamespace methodsFor: 'initializing'!

copyEmpty: newSize
    ^(super copyEmpty: newSize)
	setProxy: proxy;
	yourself
!

setProxy: aDictionary
    proxy := aDictionary!
! !

!ProxyNamespace methodsFor: 'accessing'!

= anObject
    ^anObject == self proxy or: [
	anObject class == self class and: [
	    self proxy == anObject proxy ]]
!

hash
    ^proxy hash
!

proxy
    ^proxy
!

at: aKey
    ^super at: aKey ifAbsent: [
	proxy at: aKey ]!

at: aKey ifAbsent: aBlock
    ^super at: aKey ifAbsent: [
	proxy at: aKey ifAbsent: aBlock ]!

at: aKey ifAbsentPut: aBlock
    ^super at: aKey ifAbsent: [
	proxy at: aKey ifAbsent: [
	    self at: aKey put: aBlock value ]]!

at: aKey ifPresent: aBlock
    | result |
    result := super at: aKey ifAbsent: [
	proxy at: aKey ifAbsent: [ ^nil ] ].
    ^aBlock value: result!

name
    "Answer the receiver's name"
    ^proxy name
!

printOn: aStream
    "Print a representation of the receiver on aStream"
    aStream nextPutAll: self classNameString , '[', proxy name, '] (' ; nl.
    self myKeysAndValuesDo:
    	[ :key :value | aStream tab;
		   print: key;
		   nextPutAll: '->';
		   print: value;
		   nl ].
    aStream nextPut: $)
!

do: aBlock
    super do: aBlock.
    proxy do: aBlock!

keysAndValuesDo: aBlock
    super keysAndValuesDo: aBlock.
    proxy keysAndValuesDo: aBlock!

myKeysAndValuesDo: aBlock
    super keysAndValuesDo: aBlock!

associationsDo: aBlock
    super associationsDo: aBlock.
    proxy associationsDo: aBlock!

keysDo: aBlock
    super keysDo: aBlock.
    proxy keysDo: aBlock!

includesKey: aKey
    ^(super includesKey: aKey) or: [
	proxy includesKey: aKey ]! !

Namespace current: STInST!