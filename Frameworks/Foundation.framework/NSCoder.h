
@interface NSCoder : NSObject <BSXPCDecoding, BSXPCEncoding, HKSPSerializer, MTSerializer, RBSXPCDecoding, RBSXPCEncoding>

@property (setter=_lp_setCoderType:, nonatomic) unsigned long long _lp_coderType;
@property (nonatomic, readonly) UIStoryboardDecodingContext *_storyboardDecodingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FPXPCSanitizer *fp_sanitizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long hksp_serializationOptions;
@property (readonly, copy) NSString *hmd_applicationBundleIdentifier;
@property (readonly) long long hmd_dataVersion;
@property (readonly) unsigned long long hmd_entitlements;
@property (getter=hmd_isForLocalStore, readonly) bool hmd_forLocalStore;
@property (getter=hmd_isForNonAdminSharedUser, readonly) bool hmd_forNonAdminSharedUser;
@property (getter=hmd_isForRemoteGatewayCoder, readonly) bool hmd_forRemoteGatewayCoder;
@property (getter=hmd_isForRemoteTransport, readonly) bool hmd_forRemoteTransport;
@property (getter=hmd_isForRemoteTransportOnSameAccount, readonly) bool hmd_forRemoteTransportOnSameAccount;
@property (getter=hmd_isForRemoteUserAdministrator, readonly) bool hmd_forRemoteUserAdministrator;
@property (getter=hmd_isForSharedUser, readonly) bool hmd_forSharedUser;
@property (getter=hmd_isForXPCTransport, readonly) bool hmd_forXPCTransport;
@property (getter=hmd_isForXPCTransportAuthorizedForLocationAccess, readonly) bool hmd_forXPCTransportAuthorizedForLocationAccess;
@property (getter=hmd_isForXPCTransportEntitledForAssistantIdentifiers, readonly) bool hmd_forXPCTransportEntitledForAssistantIdentifiers;
@property (getter=hmd_isForXPCTransportEntitledForHomeLocationAccess, readonly) bool hmd_forXPCTransportEntitledForHomeLocationAccess;
@property (getter=hmd_isForXPCTransportEntitledForSPIAccess, readonly) bool hmd_forXPCTransportEntitledForSPIAccess;
@property (readonly) unsigned long long hmd_homeManagerOptions;
@property (getter=hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess, readonly) bool hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess;
@property (readonly) HMFMessage *hmd_message;
@property (readonly, copy) NSArray *hmd_supportedFeatures;
@property (readonly) HMDUser *hmd_user;
@property (setter=msv_setUserInfo:, nonatomic, copy) NSDictionary *msv_userInfo;
@property (nonatomic, readonly) NSCoder *mtCoder;
@property (nonatomic, readonly) unsigned long long mtType;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFFileCoder *wfFileCoder;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)__categorizeException:(id)arg1 intoError:(id*)arg2;

- (id)__decoderInfoForAllowedClassesWarning;
- (bool)__failWithExceptionName:(id)arg1 errorCode:(long long)arg2 format:(id)arg3;
- (void)__setError:(id)arg1;
- (bool)_allowsValueCoding;
- (bool)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (bool)_validateAllowedClassesContainsClass:(Class)arg1 forKey:(id)arg2;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (id)decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (id)decodeDataObject;
- (id)decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (long long)decodeLongForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (struct CGPoint { double x1; double x2; })decodePoint;
- (struct CGPoint { double x1; double x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeSize;
- (struct CGSize { double x1; double x2; })decodeSizeForKey:(id)arg1;
- (id)decodeTopLevelObjectAndReturnError:(id*)arg1;
- (id)decodeTopLevelObjectForKey:(id)arg1 error:(id*)arg2;
- (id)decodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)decodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2 size:(unsigned long long)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (long long)decodingFailurePolicy;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeLong:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _NSZone { }*)objectZone;
- (bool)requiresSecureCoding;
- (void)setAllowedClasses:(id)arg1;
- (void)setObjectZone:(struct _NSZone { }*)arg1;
- (unsigned int)systemVersion;
- (bool)validateAllowedClass:(Class)arg1 forKey:(id)arg2;
- (bool)validateClassSupportsSecureCoding:(Class)arg1;
- (long long)versionForClassName:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (bool)ck_isCodingForCKSQLiteDatabase;
- (bool)ck_isDecodingForCKSQLiteDatabase;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (id)ls_decodeArrayWithValuesOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClass:(Class)arg2 forKey:(id)arg3;
- (id)ls_decodeDictionaryWithKeysOfClass:(Class)arg1 valuesOfClasses:(id)arg2 forKey:(id)arg3;
- (id)ls_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)ls_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)ls_decodeSetWithValuesOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (bool)fp_checkProviderIdentifier:(id)arg1;
- (id)fp_safeDecodeNSDictionaryForKey:(id)arg1;
- (id)fp_sanitizer;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_decodeAndCacheStringForKey:(id)arg1;
- (id)hm_decodeAndCacheTruncatedNameStringForKey:(id)arg1;
- (id)hm_decodeAndCacheUUIDForKey:(id)arg1;
- (id)hm_decodeAndCacheUUIDFromStringForKey:(id)arg1;
- (id)hm_decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (id)hm_decodeHMAccessoryCategoryAndCacheForKey:(id)arg1;
- (id)hm_decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2;
- (void)hm_encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2;
- (void)hm_encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (unsigned long long)_lp_coderType;
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeStringIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;
- (void)_lp_setCoderType:(unsigned long long)arg1;
- (id)_lp_strictlyDecodeArrayOfLPARAssetsForKey:(id)arg1;
- (id)_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;
- (id)_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeColorForKey:(id)arg1;
- (id)_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)_lp_strictlyDecodeLPARAssetForKey:(id)arg1;
- (id)_lp_strictlyDecodeLPImageForKey:(id)arg1;
- (id)_lp_strictlyDecodeLPVideoForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSDataForKey:(id)arg1;
- (id)_lp_strictlyDecodeNSStringForKey:(id)arg1;
- (id)_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })decodeMatrix4x4ForKey:(id)arg1;
- (struct { })decodeQuatForKey:(id)arg1;
- (void)decodeVector3ForKey:(id)arg1;
- (void)encodeMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)encodeQuat:(struct { })arg1 forKey:(id)arg2;
- (void)encodeVector3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (id)_ph_sandboxExtensionTokenKeyForURLKey:(id)arg1;
- (id)ph_decodeSandboxedURLForKey:(id)arg1 sandboxExtensionWrapper:(id*)arg2;
- (void)ph_encodeSandboxedURL:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })ph_decodeRectForKey:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

+ (id)CA_supportedClasses;

- (bool)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(bool)arg3;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)scn_decodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)scn_decodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (id)scn_decodeDictionaryWithKeysOfClass:(Class)arg1 objectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)scn_decodeDictionaryWithKeysOfClasses:(id)arg1 objectsOfClasses:(id)arg2 forKey:(id)arg3;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })vn_decode3x3MatrixForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vn_decode4x4MatrixForKey:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })vn_decodeCGAffineTransformForKey:(id)arg1;
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;
- (id)vn_decodeEntityUniqueIdentifierArrayForKey:(id)arg1;
- (id)vn_decodeEntityUniqueIdentifierForKey:(id)arg1;
- (id)vn_decodePersonUniqueIdentifierForKey:(id)arg1;
- (struct __CVBuffer { }*)vn_decodePixelBufferForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })vn_decodePointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vn_decodeRectForKey:(id)arg1;
- (void)vn_decodeSimdFloat3ForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })vn_decodeSizeForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })vn_decodeTimeRangeForKey:(id)arg1;
- (float)vn_decodeValidatedConfidenceForKey:(id)arg1;
- (float)vn_decodeValidatedScoreForKey:(id)arg1;
- (void)vn_encode3x3Matrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)vn_encode4x4Matrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;
- (void)vn_encodeEntityUniqueIdentifier:(id)arg1 forKey:(id)arg2;
- (void)vn_encodeEntityUniqueIdentifierArray:(id)arg1 forKey:(id)arg2;
- (void)vn_encodePersonUniqueIdentifier:(id)arg1 forKey:(id)arg2;
- (void)vn_encodePixelBuffer:(struct __CVBuffer { }*)arg1 forKey:(id)arg2;
- (void)vn_encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)vn_encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)vn_encodeSimdFloat3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)vn_encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)vn_encodeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;
- (void)vn_encodeValidatedConfidence:(float)arg1 forKey:(id)arg2;
- (void)vn_encodeValidatedScore:(float)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)_ar_decodeDataNoCopyForKey:(id)arg1;
- (id)_ar_decodeDataNoCopyWithFallbackForKey:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })ar_decodeCMRotationMatrixForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })ar_decodeMatrix3x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ar_decodeMatrix4x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ar_decodeMatrix4x4ForKey:(id)arg1;
- (void)ar_decodeVector2ForKey:(id)arg1;
- (void)ar_decodeVector3ForKey:(id)arg1;
- (void)ar_encodeCMRotationMatrix:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; })arg1 forKey:(id)arg2;
- (void)ar_encodeMatrix3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)ar_encodeMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)ar_encodeMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)ar_encodeVector2:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)ar_encodeVector3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id

// Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore

- (struct { long long x1; int x2; unsigned int x3; long long x4; })decodeCMTimeForKey:(id)arg1;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })decodeCMTimeMappingForKey:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })decodeCMTimeRangeForKey:(id)arg1;
- (void)encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities

- (struct CGPoint { double x1; double x2; })axmDecodePointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axmDecodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })axmDecodeSizeForKey:(id)arg1;
- (void)axmEncodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)axmEncodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)axmEncodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (id)akDecodeColorForKey:(id)arg1;
- (id)akDecodeImageForKey:(id)arg1;
- (void)akEncodeColor:(id)arg1 forKey:(id)arg2;
- (void)akEncodeImage:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)_ams_decodeJSONObjectForKey:(id)arg1 error:(id*)arg2;
- (id)_ams_decodePropertyListObjectForKey:(id)arg1 error:(id*)arg2;
- (bool)_ams_encodeJSONObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_ams_encodePropertyListObject:(id)arg1 forKey:(id)arg2 format:(unsigned long long)arg3 error:(id*)arg4;
- (id)ams_decodeJSONArrayForKey:(id)arg1;
- (id)ams_decodeJSONDictionaryForKey:(id)arg1;
- (id)ams_decodePropertyListArrayForKey:(id)arg1;
- (id)ams_decodePropertyListDictionaryForKey:(id)arg1;
- (void)ams_encodeJSONArray:(id)arg1 forKey:(id)arg2;
- (void)ams_encodeJSONDictionary:(id)arg1 forKey:(id)arg2;
- (void)ams_encodePropertyListArray:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;
- (void)ams_encodePropertyListDictionary:(id)arg1 format:(unsigned long long)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (id)_bcs_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeStringForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub

+ (void)bm_allowClassesForSecureCodingBMBookmark:(id)arg1;
+ (id)bm_allowedClassesForSecureCodingBMBookmark;

// Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor

- (void)_bd_lp_encodeColorIfNotNil:(id)arg1 forKey:(id)arg2;
- (id)_bd_lp_strictlyDecodeArrayOfLPARAssetsForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeArrayOfLPImagesForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeArrayOfObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_bd_lp_strictlyDecodeArrayOfObjectsOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_bd_lp_strictlyDecodeColorForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeDictionaryOfObjectsWithKeysOfClass:(Class)arg1 andObjectsOfClass:(Class)arg2 forKey:(id)arg3;
- (id)_bd_lp_strictlyDecodeLPARAssetForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeLPImageForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeLPVideoForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeNSAttributedStringForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeNSDataForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeNSStringForKey:(id)arg1;
- (id)_bd_lp_strictlyDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_bd_lp_strictlyDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)_bd_lp_strictlyDecodeTopLevelObjectOfClass:(Class)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)_bd_lp_strictlyDecodeTopLevelObjectOfClasses:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)_lp_encodeArrayIfNotEmpty:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_lp_encodeURLIfNotNilOrLocalFile:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (void)setWfFileCoder:(id)arg1;
- (id)wfFileCoder;

// Image: /System/Library/PrivateFrameworks/CoreSpeechGazeTracking.framework/CoreSpeechGazeTracking

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })decodeMatrix3x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })decodeMatrix4x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })decodeMatrix4x4ForKey:(id)arg1;
- (void)decodeVector3ForKey:(id)arg1;
- (void)encodeMatrix3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)encodeMatrix4x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)encodeMatrix4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)encodeVector3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (bool)ef_isNSXPCCoder;

// Image: /System/Library/PrivateFrameworks/FusionTracker.framework/FusionTracker

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fusionTracker_decodeCGRectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })fusionTracker_decodeCMTimeForKey:(id)arg1;
- (void)fusionTracker_encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)fusionTracker_encodeCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (void)hrs_failWithCocoaInvalidValueError;
- (void)hrs_failWithCocoaValueNotFoundError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_applicationBundleIdentifier;
- (long long)hmd_dataVersion;
- (unsigned long long)hmd_entitlements;
- (unsigned long long)hmd_homeManagerOptions;
- (bool)hmd_isForLocalStore;
- (bool)hmd_isForNonAdminSharedUser;
- (bool)hmd_isForRemoteGatewayCoder;
- (bool)hmd_isForRemoteTransport;
- (bool)hmd_isForRemoteTransportOnSameAccount;
- (bool)hmd_isForRemoteUserAdministrator;
- (bool)hmd_isForSharedUser;
- (bool)hmd_isForXPCTransport;
- (bool)hmd_isForXPCTransportAuthorizedForLocationAccess;
- (bool)hmd_isForXPCTransportEntitledForAssistantIdentifiers;
- (bool)hmd_isForXPCTransportEntitledForHomeLocationAccess;
- (bool)hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess;
- (bool)hmd_isForXPCTransportEntitledForSPIAccess;
- (bool)hmd_isHH2MigrationInProgress;
- (id)hmd_message;
- (id)hmd_supportedFeatures;
- (id)hmd_user;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)hmd_applicationBundleIdentifier;
- (long long)hmd_dataVersion;
- (unsigned long long)hmd_entitlements;
- (unsigned long long)hmd_homeManagerOptions;
- (bool)hmd_isForLocalStore;
- (bool)hmd_isForNonAdminSharedUser;
- (bool)hmd_isForRemoteGatewayCoder;
- (bool)hmd_isForRemoteTransport;
- (bool)hmd_isForRemoteTransportOnSameAccount;
- (bool)hmd_isForRemoteUserAdministrator;
- (bool)hmd_isForSharedUser;
- (bool)hmd_isForXPCTransport;
- (bool)hmd_isForXPCTransportAuthorizedForLocationAccess;
- (bool)hmd_isForXPCTransportEntitledForAssistantIdentifiers;
- (bool)hmd_isForXPCTransportEntitledForHomeLocationAccess;
- (bool)hmd_isForXPCTransportEntitledForHomeLocationFeedbackAccess;
- (bool)hmd_isForXPCTransportEntitledForSPIAccess;
- (id)hmd_message;
- (id)hmd_supportedFeatures;
- (id)hmd_user;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

- (id)_IF_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_decodeBytesNoCopyForKey:(id)arg1;
- (void)if_encodeBytesNoCopy:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MLAssetIO.framework/MLAssetIO

- (struct _MIORange { long long x1; long long x2; })decodeMIORangeForKey:(id)arg1;
- (void)encodeMIORange:(struct _MIORange { long long x1; long long x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mr_decodeCGRectForKey:(id)arg1;
- (void)mr_encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

- (id)decodeTCCIdentityForKey:(id)arg1;
- (void)encodeTCCIdentity:(id)arg1 forKey:(id)arg2;
- (void)msv_setUserInfo:(id)arg1;
- (id)msv_userInfo;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)mtCoder;
- (unsigned long long)mtType;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

- (struct CGSize { double x1; double x2; })oz_decodeCGSizeForKey:(id)arg1;
- (void)oz_decodeDouble2ForKey:(id)arg1;
- (void)oz_decodeDouble3ForKey:(id)arg1;
- (void)oz_decodeFloat2ForKey:(id)arg1;
- (void)oz_decodeFloat3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })oz_decodeMatrixFloat3x3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })oz_decodeMatrixFloat4x4ForKey:(id)arg1;
- (void)oz_encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)oz_encodeDouble2:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)oz_encodeDouble3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)oz_encodeFloat2:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)oz_encodeFloat3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)oz_encodeMatrixFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)oz_encodeMatrixFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (id)decodeCollectionOfClass:(Class)arg1 containingClass:(Class)arg2 forKey:(id)arg3;
- (id)decodeStringForKey:(id)arg1;
- (unsigned long long)decodeUInt64ForKey:(id)arg1;
- (void)encodeCollection:(id)arg1 forKey:(id)arg2;
- (void)encodeUInt64:(unsigned long long)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials

- (id)swc_decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)swc_decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore

- (id)decodeObjectOfClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (unsigned long long)hksp_serializationOptions;

// Image: /System/Library/PrivateFrameworks/SoftPosReader.framework/SoftPosReader

- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decodeDecimalForKey:(id)arg1;
- (void)encodeDecimal:(struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)tts_decodeBytesIntoObject:(void*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })tts_decodeMatrixFloat4x4ForKey:(id)arg1;
- (void)tts_encodeBytes:(void*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3;
- (void)tts_encodeMatrixFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_createStoryboardDecodingContextIfNeeded;
- (id)_decodeObjectsAndTrackChildViewControllerIndexWithParent:(id)arg1 forKey:(id)arg2;
- (id)_decodeObjectsWithSourceSegueTemplate:(id)arg1 creator:(id /* block */)arg2 sender:(id)arg3 forKey:(id)arg4;
- (void)_initializeClassSwapperWithCurrentDecodingViewControllerIfNeeded:(id)arg1;
- (id)_storyboardDecodingContext;
- (bool)_ui_decodeBoolForKey:(id)arg1 defaultValue:(bool)arg2;
- (struct CAFrameRateRange { float x1; float x2; float x3; })_ui_decodeCAFrameRateRangeForKey:(id)arg1;
- (double)_ui_decodeCGFloatForKey:(id)arg1;
- (id /* block */)_ui_decodeNSUIntegerVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2;
- (id)_ui_decodeTextAttributesForKey:(id)arg1;
- (id /* block */)_ui_decodeVectorForKey:(id)arg1 returnedCount:(unsigned long long*)arg2;
- (void)_ui_encodeCAFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 forKey:(id)arg2;
- (void)_ui_encodeCGFloat:(double)arg1 forKey:(id)arg2;
- (void)_ui_encodeNSUIntegerVector:(const unsigned long long*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (void)_ui_encodeTextAttributes:(id)arg1 forKey:(id)arg2;
- (void)_ui_encodeVector:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3;
- (bool)_ui_isInterprocess;
- (union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })_uikit_decodeSPVector3DForKey:(id)arg1;
- (void)_uikit_encodeSPVector3D:(union { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1 forKey:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })decodeCGAffineTransformForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })decodeCGPointForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeCGRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeCGSizeForKey:(id)arg1;
- (struct CGVector { double x1; double x2; })decodeCGVectorForKey:(id)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })decodeDirectionalEdgeInsetsForKey:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })decodeUIEdgeInsetsForKey:(id)arg1;
- (struct UIOffset { double x1; double x2; })decodeUIOffsetForKey:(id)arg1;
- (void)encodeCGAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 forKey:(id)arg2;
- (void)encodeCGPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeCGSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeCGVector:(struct CGVector { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forKey:(id)arg2;
- (void)encodeUIOffset:(struct UIOffset { double x1; double x2; })arg1 forKey:(id)arg2;
- (struct CAPoint3D { double x1; double x2; double x3; })ui_decodeCAPoint3DForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })ui_decodePlatformPointForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })ui_decodePlatformSizeForKey:(id)arg1;
- (void)ui_encodeCAPoint3D:(struct CAPoint3D { double x1; double x2; double x3; })arg1 forKey:(id)arg2;
- (void)ui_encodePlatformPoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)ui_encodePlatformSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VisageHRTF.framework/VisageHRTF

- (struct __CVBuffer { }*)vg_createDecodedPixelBufferForKey:(id)arg1;
- (id)vg_decodeArrayOfSurfacesForKey:(id)arg1;
- (void)vg_decodeFloat2ForKey:(id)arg1;
- (void)vg_decodeFloat3ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })vg_decodeFloat3x3ForKey:(id)arg1;
- (void)vg_decodeFloat4ForKey:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })vg_decodeFloat4x4ForKey:(id)arg1;
- (float)vg_decodeFloatForKey:(id)arg1;
- (id)vg_decodePixelBufferForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })vg_decodeRectForKey:(id)arg1;
- (id)vg_decodeSurfaceForKey:(id)arg1;
- (unsigned long long)vg_decodeUint64ForKey:(id)arg1;
- (void)vg_decodeUlong4ForKey:(id)arg1;
- (unsigned long long)vg_decodeUnsignedIntegerForKey:(id)arg1;
- (void)vg_decodeUshort2ForKey:(id)arg1;
- (void)vg_encodeArrayOfSurfaces:(id)arg1 forKey:(id)arg2;
- (void)vg_encodeFloat2:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)vg_encodeFloat3:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)vg_encodeFloat3x3:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 forKey:(id)arg2;
- (void)vg_encodeFloat4:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)vg_encodeFloat4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;
- (void)vg_encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)vg_encodePixelBuffer:(struct __CVBuffer { }*)arg1 forKey:(id)arg2;
- (void)vg_encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)vg_encodeSurface:(id)arg1 forKey:(id)arg2;
- (void)vg_encodeUint64:(unsigned long long)arg1 forKey:(id)arg2;
- (void)vg_encodeUlong4:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id
- (void)vg_encodeUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (void)vg_encodeUshort2:(void *)arg1 forKey:(void *)arg2; // needs 2 arg types, found 1: id

// Image: /System/Library/PrivateFrameworks/VisionCore.framework/VisionCore

- (void)VisionCoreEncodeNSData:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VisualLocalization.framework/VisualLocalization

- (bool)_vl_decodeFloat6x6:(struct { float x1[6][6]; }*)arg1 forKey:(id)arg2;
- (bool)_vl_decodeSimdDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 forKey:(id)arg2;
- (void)_vl_encodeFloat6x6:(struct { float x1[6][6]; })arg1 forKey:(id)arg2;
- (void)_vl_encodeSimdDouble4x4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (void)ic_encodeUserIdentity:(id)arg1 withStore:(id)arg2 forKey:(id)arg3;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (id)tsu_decodeColorSpaceForKey:(id)arg1;
- (void)tsu_encodeColorSpace:(struct CGColorSpace { }*)arg1 forKey:(id)arg2;

@end
