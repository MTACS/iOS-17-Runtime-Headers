
@interface NSKeyedUnarchiver : NSCoder {
    const char * _bytes;
    struct __CFArray { } * _containers;
    struct __CFData { } * _data;
    <NSKeyedUnarchiverDelegate> * _delegate;
    _Atomic unsigned long long  _flags;
    int  _genericKey;
    _NSKeyedUnarchiverHelper * _helper;
    unsigned long long  _len;
    struct __CFDictionary { } * _nameClassMap;
    struct __CFDictionary { } * _objRefMap;
    struct __CFArray { } * _objects;
    struct { struct { unsigned char x_1_1_1[5]; unsigned char x_1_1_2; unsigned char x_1_1_3; unsigned char x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned long long x_1_1_7; } x1; unsigned long long x2; unsigned long long x3; } * _offsetData;
    struct __CFDictionary { } * _offsetObjMap;
    unsigned long long  _pac_signature;
    struct __CFDictionary { } * _refObjMap;
    struct __CFDictionary { } * _replacementMap;
    struct __CFDictionary { } * _tmpRefObjMap;
}

@property long long decodingFailurePolicy;
@property <NSKeyedUnarchiverDelegate> *delegate;
@property (nonatomic) bool dk_shouldSkipDecodingMetadata;
@property bool requiresSecureCoding;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_copyByArchiving:(id)arg1;
+ (bool)_evaluateCycleSecurityRules:(struct NSKeyedUnarchiverCycleEvaluationRules { bool x1; bool x2; bool x3; bool x4; bool x5; }*)arg1;
+ (id)_strictlyUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (int)_swift_checkClassAndWarnForKeyedArchiving:(Class)arg1 operation:(int)arg2;
+ (Class)classForClassName:(id)arg1;
+ (void)initialize;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveTopLevelObjectWithData:(id)arg1 error:(id*)arg2;
+ (id)unarchivedArrayOfObjectsOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedArrayOfObjectsOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)unarchivedDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 fromData:(id)arg3 error:(id*)arg4;
+ (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

- (void)__setError:(id)arg1;
- (void)_allowDecodingCyclesInSecureMode;
- (id)_allowedClassNames;
- (bool)_allowsValueCoding;
- (id)_blobForCurrentObject;
- (bool)_containsNextUnkeyedObject;
- (unsigned int)_currentUniqueIdentifier;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)_decodeObjectOfClass:(Class)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (bool)_decodingCyclesIsAllowed;
- (void)_enableStrictSecureDecodingMode;
- (void)_enforceExplicitPlistTypes;
- (void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
- (id)_initForReadingFromData:(id)arg1 error:(id*)arg2 throwLegacyExceptions:(bool)arg3;
- (id)_initWithStream:(struct __CFReadStream { }*)arg1 data:(id)arg2 topDict:(struct __CFDictionary { }*)arg3;
- (void)_replaceObject:(id)arg1 withObject:(id)arg2;
- (void)_setAllowedClassNames:(id)arg1;
- (bool)_strictSecureDecodingEnabled;
- (void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2;
- (bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (bool)_willEnforceExplicitPlistTypes;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (Class)classForClassName:(id)arg1;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (id)delegate;
- (id)description;
- (id)error;
- (void)finishDecoding;
- (id)init;
- (id)initForReadingFromData:(id)arg1 error:(id*)arg2;
- (id)initForReadingWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setClass:(Class)arg1 forClassName:(id)arg2;
- (void)setDecodingFailurePolicy:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequiresSecureCoding:(bool)arg1;
- (unsigned int)systemVersion;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)cls_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)ls_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_hk_performUnarchivingWithData:(id)arg1 error:(id*)arg2 handler:(id /* block */)arg3;
+ (id)hk_unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2 data:(id)arg3 error:(id*)arg4;
+ (id)hk_unarchivedObjectOfClasses:(id)arg1 forKey:(id)arg2 data:(id)arg3 error:(id*)arg4;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_in_safeUnarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)_in_safeUnarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)ar_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)ar_unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

+ (id)axmSecurelyUnarchiveData:(id)arg1 withExpectedClass:(Class)arg2 otherAllowedClasses:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)secureUnarchiveData:(id)arg1 withExpectedClass:(Class)arg2 otherAllowedClasses:(id)arg3;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)cat_unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2 error:(id*)arg3;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)cat_unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2 error:(id*)arg3;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1;
+ (id)cat_unarchivePropertyListObjectWithData:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

+ (id)cpl_safeUnarchiveObjectWithData:(id)arg1 class:(Class)arg2;
+ (id)cpl_safeUnarchiveObjectWithData:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)sy_unarchivedObjectFromData:(id)arg1;
+ (id)sy_whitelistedClasses;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)wf_securelyUnarchiveObjectWithData:(id)arg1 allowedClasses:(id)arg2 completionHandler:(id /* block */)arg3;

- (id)wf_unarchiveRootObjectAndFinishWithAllowedClasses:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (bool)dk_shouldSkipDecodingMetadata;
- (void)setDk_shouldSkipDecodingMetadata:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MSSafeUnarchiveAllowedClasses;
+ (id)MSSafeUnarchiveObjectWithData:(id)arg1 outError:(id*)arg2;
+ (id)MSSafeUnarchiveObjectWithFile:(id)arg1 outError:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)xr_unarchiveSecureCodingObjectFromData:(id)arg1 ofClasses:(id)arg2 withError:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared

+ (id)_et_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)_et_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)dnds_secureLegacyUnarchiverForReadingFromData:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)deserializeObjectWithData:(id)arg1 allowedClass:(Class)arg2 frameworkClasses:(id)arg3;
+ (id)deserializeObjectWithData:(id)arg1 allowedClasses:(id)arg2;
+ (id)hmf_unarchivedObjectOfClass:(Class)arg1 fromClassName:(id)arg2 fromData:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)ids_secureUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

+ (id)nnmk_allowedClasses;
+ (id)unarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)unarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)nr_secureUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1 withData:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1 withFile:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)nf_securelyUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;

- (id)nf_securelyUnarchiveObjectOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

+ (id)secureUnarchiveObjectOfClasses:(id)arg1 withData:(id)arg2;
+ (id)secureUnarchiveObjectOfClasses:(id)arg1 withFile:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore

+ (id)pl_safeUnarchiveObjectFromData:(id)arg1 class:(Class)arg2;
+ (id)pl_safeUnarchiveObjectFromData:(id)arg1 classes:(id)arg2;
+ (id)pl_safeUnarchiveObjectFromFile:(id)arg1 class:(Class)arg2;
+ (id)pl_safeUnarchiveObjectFromFile:(id)arg1 classes:(id)arg2;

- (id)pl_safeInitForReadingFromData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials

+ (id)swc_unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;
+ (id)swc_unarchivedObjectOfClasses:(id)arg1 fromData:(id)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_securelyUnarchiveObjectWithFile:(id)arg1 ofClasses:(id)arg2;
+ (id)tsu_securelyUnarchiveRoot:(id)arg1 forClass:(Class)arg2;
+ (id)tsu_securelyUnarchiveRoot:(id)arg1 forClasses:(id)arg2;

@end
