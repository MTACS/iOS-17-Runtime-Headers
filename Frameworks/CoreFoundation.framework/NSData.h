
@interface NSData : NSObject <AFContextSnapshot, AFSecurityDigestibleChunksProviding, ASDNotificationType, ASParsingLeafNode, CKPropertiesDescription, CKRecordValue, CKVDatabaseValue, CUByteCodable, DYVMBufferSubRegion, EFSQLBindable, FCKeyValueStoreCoding, GTVMBufferSubRegion, HAP2AccessoryCharacteristicEncodableBodyValue, HAP2AccessoryCharacteristicEncodedData, HFPropertyListConvertible, HKUUIDCollection, HMBQueryableModelFieldCoder, HMDOPACKValue, HMFObject, ICCRCoding, ICCRDataType, ICCREquatable, IMJSONSerializableValueProviding, INJSONSerializable, MPCPlaybackEngineEventPayloadValueJSONConvertible, NFCBOREncodable, NSCopying, NSMutableCopying, NSSecureCoding, PQLValuable, REDonatedActionIdentifierProviding, SiriCoreSQLiteValue, TSPSplitableData, VCControlChannelMessageProtocol, WFActionReversalState, WFPropertyListObject, _PASDistilledString>

@property (nonatomic, readonly) NSData *NRSHA256;
@property (nonatomic, readonly) NSData *SHA1Data;
@property (nonatomic, readonly) NSString *SHA1HexString;
@property (nonatomic, readonly) NSData *SHA256Data;
@property (readonly) NSData *VCCCData;
@property (readonly) unsigned long long VCCCLength;
@property (readonly) NSString *VCCCPayloadKey;
@property (readonly) NSString *VCCCString;
@property (nonatomic, readonly) NSData *ams_SHA1;
@property (nonatomic, readonly) NSData *ams_compressedData;
@property (nonatomic, readonly) NSData *ams_decompressedData;
@property (nonatomic, readonly) NSString *ams_hexAddressDescription;
@property (nonatomic, readonly) NSString *ams_nvramDescription;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly) NSData *blt_sha256;
@property (readonly) NSString *blt_sha256String;
@property (nonatomic, readonly) unsigned int br_qtnFlags;
@property (nonatomic, readonly) NSData *brc_signature;
@property (nonatomic, readonly) bool brc_signatureIsPackage;
@property (nonatomic, readonly) bool brc_signatureIsPendingPlaceHolder;
@property (nonatomic, readonly) bool brc_signatureIsValid;
@property (readonly) NSString *byteString;
@property (readonly) const void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFSQLBinding *ef_SQLBinding;
@property (readonly, copy) NSString *ef_hexString;
@property (readonly, copy) NSData *ef_md5Digest;
@property (readonly, copy) NSData *ef_sha256Digest;
@property (nonatomic, readonly) NSString *enlowercaseHexDigits;
@property (nonatomic, readonly) NSData *enmd5;
@property (nonatomic, readonly, copy) NSData *fm_sha1Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha256Hash;
@property (nonatomic, readonly, copy) NSData *fm_sha512Hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (readonly, copy) NSData *hmd_compressedData;
@property (readonly, copy) NSData *hmd_uncompressedData;
@property (readonly) NSString *hmf_hexadecimalRepresentation;
@property (getter=hmf_isZeroed, readonly) bool hmf_zeroed;
@property (nonatomic, readonly) NSString *ic_md5;
@property (nonatomic, readonly) NSString *ic_sha256;
@property (readonly) unsigned long long length;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSData *safari_SHA1Hash;
@property (nonatomic, readonly) bool safari_dataAppearsToBeCompressed;
@property (nonatomic, readonly) NSData *safari_dataByCompressingData;
@property (nonatomic, readonly) NSData *safari_dataByDecompressingData;
@property (nonatomic, readonly) NSString *safari_descriptionWithoutSpaces;
@property (nonatomic, readonly) unsigned long long safari_hashMD5;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) NSString *ska_hexString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tsp_length;
@property (nonatomic, readonly, copy) NSString *tu_URLSafeBase64EncodedString;
@property (nonatomic, readonly) NSUUID *tu_UUID;
@property (getter=_navigation_unsignedIntegerValue, nonatomic, readonly) unsigned long long unsignedIntegerValue;
@property (readonly, copy) NSString *vf_hexString;
@property (readonly, copy) NSData *vf_md5Digest;
@property (readonly, copy) NSData *vf_sha256Digest;
@property (nonatomic, readonly) NSString *vk_md5;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (bool)supportsSecureCoding;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (bool)_isSafeResumeDataForBackgroundDownload;
- (id)_requestFromResumeData;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

+ (id)dataWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;

- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)clk_hexEncodedString;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKDataFromBase64URLSafeString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)CKBase64URLSafeString;
- (long long)CKCompare:(id)arg1;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKSHA256;
- (id)CKUppercaseHexStringWithoutSpaces;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (const void*)cksqlcs_blobBindingValue:(unsigned long long*)arg1 destructor:(int (**)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fp_dataWithFavoriteRank:(id)arg1;
+ (id)fp_dataWithLastUsedDate:(id)arg1;

- (id)fp_favoriteRank;
- (id)fp_lastUsedDate;
- (bool)getFileIDFromXattr:(unsigned long long*)arg1 docID:(unsigned int*)arg2 genCount:(unsigned long long*)arg3;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_alloc;
+ (bool)_base64DecodingAlwaysSucceedsForOptions:(unsigned long long)arg1;
+ (id)_newZeroingDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)_newZeroingDataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)data;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4;
+ (id)dataWithData:(id)arg1;

- (bool)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(bool)arg1 withOptions:(unsigned long long)arg2;
- (bool)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long long)_cfTypeID;
- (id)_compressedDataUsingCompressionAlgorithm:(int)arg1 error:(id*)arg2;
- (bool)_copyWillRetain;
- (id)_createDispatchData;
- (bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(struct { bool x1; bool x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg6;
- (id)_decompressedDataUsingCompressionAlgorithm:(int)arg1 error:(id*)arg2;
- (bool)_getBPlistMarker:(char *)arg1 offset:(unsigned long long*)arg2 trailer:(struct { unsigned char x1[5]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; }*)arg3;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (bool)_isCompact;
- (bool)_isDispatchData;
- (void)_produceDataWithCompressionOperation:(int)arg1 algorithm:(int)arg2 handler:(id /* block */)arg3;
- (bool)_providesConcreteBacking;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (id)_web_parseRFC822HeaderFields;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)base64Encoding;
- (const void*)bytes;
- (Class)classForCoder;
- (id)compressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)decompressedDataUsingAlgorithm:(long long)arg1 error:(id*)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id /* block */)arg1;
- (void)getBytes:(void*)arg1;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id /* block */)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (bool)isNSData__;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_dataWithHexString:(id)arg1;
+ (id)hk_dataWithSHA256Fingerprint:(id)arg1 error:(out id*)arg2;
+ (id)hk_nilDataMD5;
+ (id)hk_randomDataOfLength:(long long)arg1;

- (id)hk_MD5;
- (id)hk_SHA256;
- (unsigned long long)hk_countOfUUIDs;
- (id)hk_dataForAllUUIDs;
- (void)hk_enumerateUUIDBytesUsingBlock:(id /* block */)arg1;
- (void)hk_enumerateUUIDsUsingBlock:(id /* block */)arg1;
- (bool)hk_enumerateUUIDsWithError:(id*)arg1 block:(id /* block */)arg2;
- (id)hk_hexString;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_generateSHA1;
- (id)hm_generateSHA256;
- (id)hm_stringInHexFormat;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_in_writeDataToPathForImage:(id)arg1 storeType:(unsigned long long)arg2 error:(id*)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (id)PK_gzipDeflate;
- (id)PK_gzipInflate;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)safari_readingListThumbnailImageDataWithCGImage:(struct CGImage { }*)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (id)_operateOnDataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)scn_compressedDataUsingCompressionAlgorithm:(int)arg1;
- (id)scn_indexedDataDecodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataDecodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingDeltaWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingHighWatermarkWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_indexedDataEncodingTrianglePairsWithBytesPerIndex:(unsigned long long)arg1;
- (id)scn_uncompressedDataUsingCompressionAlgorithm:(int)arg1;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (id)CKDataWithHexString:(id)arg1;
+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKUppercaseHexStringWithoutSpaces;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

+ (id)makeArchive:(const void*)arg1 length:(unsigned long long)arg2 level:(float)arg3;

- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;

// Image: /System/Library/Frameworks/Vision.framework/Vision

- (id)VNPersonsModelSubdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rangeDescription:(id)arg2 error:(id*)arg3;
- (id)VNPersonsModelSubdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 rangeDescriptionProvidingBlock:(id /* block */)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

+ (id)aaf_fromImageRef:(struct CGImage { }*)arg1;

- (id)aaf_toCompressedData:(int)arg1;
- (id)aaf_toHexString;
- (struct CGImage { }*)aaf_toImageRef;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

+ (id)randomWithBytes:(unsigned long long)arg1;

- (id)asHexString;
- (id)base64FilenameSafeEncoded;
- (bool)compareDataSizeHelper:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; })arg1 data:(id)arg2;
- (int)deflateInit2Helper:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1 compressionLevel:(int)arg2;
- (id)gunzip;
- (id)gzip:(long long)arg1;
- (int)inflateEndHelper:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1;
- (int)inflateHelper:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1;
- (int)inflateInit2Helper:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg1;
- (id)initWithRandomOfLength:(unsigned long long)arg1;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;
- (id)sha1;
- (id)sha256;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

- (id)VCCCData;
- (bool)VCCCGetBytes:(char *)arg1 size:(unsigned int)arg2;
- (unsigned long long)VCCCLength;
- (id)VCCCPayloadKey;
- (id)VCCCString;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)endataWithHexDigits:(id)arg1;

- (id)enlowercaseHexDigits;
- (id)enmd5;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)AD_dataStringForJSON;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (bool)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inEncoding:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)encodeCGPath:(struct CGPath { }*)arg1;
+ (struct CGPath { }*)newCGPathDecodedFromData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_compressedData:(int)arg1;
- (id)aa_hexString;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_AESKeyForDataProtectionClass:(unsigned long long)arg1 error:(id*)arg2;
+ (struct __CFString { }*)_accessibleAttributeForDataProtectionClass:(unsigned long long)arg1;
+ (id)_generateInitializationVectorDataWithError:(id*)arg1;
+ (id)_labelForDataProtectionClass:(unsigned long long)arg1;
+ (id)ams_generateEncryptionKey;

- (id)_compressGZIP;
- (id)_compressLZMA;
- (id)_decompressGZIP;
- (id)_decompressLZMA;
- (id)ams_SHA1;
- (id)ams_compressWithAlgorithm:(long long)arg1;
- (id)ams_compressedData;
- (id)ams_decompressWithAlgorithm:(long long)arg1;
- (id)ams_decompressedData;
- (id)ams_decryptUsingDataProtectionClass:(unsigned long long)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id*)arg4;
- (id)ams_decryptUsingKey:(id)arg1 initializationVectorData:(id)arg2 tagData:(id)arg3 error:(id*)arg4;
- (struct { id x1; id x2; id x3; })ams_encryptDataUsingDataProtectionClass:(unsigned long long)arg1 error:(id*)arg2;
- (struct { id x1; id x2; id x3; })ams_encryptDataUsingKey:(id)arg1 error:(id*)arg2;
- (id)ams_hexAddressDescription;
- (id)ams_nvramDescription;

// Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit

- (void)_resizeOutputBuffer:(id)arg1 forStream:(struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; }*)arg2;
- (id)dataGZipDeflated;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_dataWithBase64UrlEncodedString:(id)arg1;

- (id)ak_SHA256Data;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (id)avt_SHA256;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_dataWithVMAllocatedBytes:(const void*)arg1 length:(unsigned long long)arg2;

- (void*)bs_bytesForMIG;
- (unsigned int)bs_lengthForMIG;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (id)bu_dataFromHexString:(id)arg1;

- (id)bu_dataURIString;
- (id)bu_gzipDeflate;
- (id)bu_gzipInflate;
- (id)bu_hexString;
- (id)bu_md5;
- (id)bu_md5UpperCase;
- (id)bu_sha1;
- (id)bu_sha256;
- (id)bu_sha384;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (void)MD5:(unsigned char)arg1;
- (id)blt_sha256;
- (id)blt_sha256String;
- (id)blt_sha256StringFilenameSafe;
- (unsigned long long)blt_sizeof;

// Image: /System/Library/PrivateFrameworks/CBORLibrary.framework/CBORLibrary

+ (id)dataWithCBOR:(id)arg1;
+ (id)dataWithCOSE:(id)arg1;
+ (id)dataWithCOSEKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

+ (id)da_dataWithHexString:(id)arg1;
+ (id)da_dataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)_cdm_safeJSONString;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

+ (id)dataWithIOSurface:(void*)arg1 usedSize:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo

- (id)CertUIHexString;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_hexString;
- (id)crk_sha1Hash;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_pendingPlaceholderForPackage:(bool)arg1;

- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (bool)brc_signatureIsPackage;
- (bool)brc_signatureIsPendingPlaceHolder;
- (bool)brc_signatureIsValid;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

- (id)initWithBase64URLEncodedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)cplQueryCursorDescription;
- (id)cplQueryCursorSimpleDescription;
- (id)cplSyncAnchorDescription;
- (id)cplSyncAnchorSimpleDescription;
- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities

- (id)_CUTCopyGzippedData;
- (id)_CUTDecompressData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel

- (id)CEMHexString;
- (id)CEMSHA1Hash;
- (id)CEMSHA1HexString;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

+ (id)_cn_dataFromHexString:(id)arg1;

- (id)_cn_SHA1String;
- (id)_cn_SHA256HashDataWithSalt:(id)arg1;
- (bool)_cn_containsData:(id)arg1;
- (id)_cn_decodeBase64;
- (id)_cn_decodeBase64IgnoringWhitespace;
- (long long)_cn_distanceFromData:(id)arg1;
- (id)_cn_hexString;
- (id)_cn_md5Hash;
- (id)_cn_padDataToLength:(unsigned long long)arg1;
- (id)_cn_trimTrailingZeros;
- (id)_cn_writeToURL:(id)arg1 options:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/ContextSync.framework/ContextSync

- (id)bmdsl_deserialize;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)AESGCM256DecryptedDataWithSymmetricKey:(id)arg1;
- (id)AESGCM256EncryptedDataWithSymmetricKey:(id)arg1;
- (id)_randomDataGeneratorWithNumberOfBytes:(unsigned long long)arg1;
- (id)cdp_unarchivedRoot;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)serializeWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (const void*)databaseValue_blobRepresentationWithLength:(unsigned long long*)arg1;
- (id)databaseValue_toData;
- (id)databaseValue_toNumber;
- (id)databaseValue_toString;
- (long long)databaseValue_type;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite

+ (id)crxu_dataWithHexString:(id)arg1;
+ (id)crxu_randomDataWithLength:(unsigned long long)arg1;

- (id)crxu_asHexString;

// Image: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents

- (id)cr_md5DigestHexString;

// Image: /System/Library/PrivateFrameworks/CoreRepairCore.framework/CoreRepairCore

+ (id)dataWithHexString:(id)arg1;

- (id)SHA256DigestData;
- (id)SHA256DigestString;
- (id)SHA384DigestData;
- (id)convertToHexString;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;
- (id)rawMicChannelsDataWithNumSamplesPerChannel:(unsigned long long)arg1;
- (void)splitAudioDataToReachSampleCount:(unsigned long long)arg1 currSampleCount:(unsigned long long)arg2 numBytesPerSample:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)strRepForFloatData;

// Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP

- (id)byteString;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DMCEnrollmentProvider.framework/DMCEnrollmentProvider

- (id)DMCProfileHexString;

// Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities

+ (id)DMCDataWithCFData:(struct __CFData { }*)arg1;

- (id)DMCHexString;
- (id)DMCSHA256Hash;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

- (id)sha256HashBase64Encoded;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (id)da_dataWithHexString:(id)arg1;
+ (id)da_dataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;

- (id)da_hexString;
- (id)da_lowercaseHexStringWithoutSpaces;
- (id)da_uppercaseHexStringWithoutSpaces;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

- (id)dbg_gzipDeflate;
- (id)dbg_gzipDeflateRaw;
- (id)dbg_gzipDeflateWithLevel:(int)arg1 windowBits:(int)arg2 memLevel:(int)arg3;
- (id)dbg_gzipInflate;
- (id)dbg_gzipInflateIfCompressed;
- (id)dbg_gzipInflateRaw;
- (id)dbg_gzipInflateWithWindowBits:(int)arg1;
- (bool)dbg_isGzipped;

// Image: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal

- (id)dc_compressedData:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

- (bool)dm_atomicWriteToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)ef_crlfData;

- (id)ef_SQLBinding;
- (bool)ef_containsData:(id)arg1;
- (void)ef_enumerateSubdataOfSize:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)ef_hasSuffix:(id)arg1;
- (id)ef_hexString;
- (id)ef_md5Digest;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ef_rangeOfData:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ef_rangeOfData:(id)arg1 options:(unsigned long long)arg2;
- (id)ef_sha256Digest;
- (id)ef_sha256DigestWithSalts:(id)arg1;
- (id)ef_subdataFromIndex:(unsigned long long)arg1;
- (id)ef_subdataToIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition

- (id)_ear_sha256;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

+ (bool)acceptsTopLevelLeaves;
+ (bool)expectsContent;
+ (bool)frontingBasicTypes;
+ (bool)notifyOfUnknownTokens;
+ (bool)parsingLeafNode;
+ (bool)parsingWithSubItems;

- (id)initForLengthTokenOfLength:(unsigned long long)arg1;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;

// Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon

- (id)sha256;

// Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore

+ (id)fm_randomBytes:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

- (id)fm_MACAddressString;
- (id)fm_hexString;
- (id)fm_hmac_md5WithKey:(id)arg1;
- (id)fm_hmac_sha1WithKey:(id)arg1;
- (id)fm_hmac_sha256WithKey:(id)arg1;
- (id)fm_hmac_sha512WithKey:(id)arg1;
- (id)fm_sha1Hash;
- (id)fm_sha256Hash;
- (id)fm_sha512Hash;
- (id)hexString;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTCopyGzippedData;
- (id)_FTCopyOptionallyGzippedData;
- (id)_FTStringFromBaseData;

// Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle

- (id)_faCircularImageDataWithDiameter:(double)arg1;
- (id)_faCircularImageDataWithDiameter:(double)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGContext { }*)_faCreateContextWithImage:(struct CGImage { }*)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 diameter:(double)arg3;
- (struct CGImage { }*)_faCreateImageRef;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_faTranformedRectForImageSize:(struct CGSize { double x1; double x2; })arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 diameter:(double)arg3;
- (id)fa_dictionaryFromPlistData;

// Image: /System/Library/PrivateFrameworks/GPUTools.framework/GPUTools

+ (unsigned long long)DYCompressionAlgorithmFromString:(id)arg1;
+ (id)DYStringFromCompressionAlgorithm:(unsigned long long)arg1;
+ (id)dy_dataByCompressingData:(id)arg1 error:(id*)arg2;
+ (id)dy_dataByCompressingData:(id)arg1 level:(int)arg2 error:(id*)arg3;
+ (id)dy_dataByDecompressingData:(id)arg1 error:(id*)arg2;
+ (id)dy_dataWithContentsOfGzipFileAtPath:(id)arg1 error:(id*)arg2;
+ (bool)dy_decompressData:(id)arg1 inBuffer:(void*)arg2 bufferSize:(unsigned int)arg3 error:(id*)arg4;
+ (bool)dy_decompressData:(id)arg1 inMutableData:(id)arg2 error:(id*)arg3;

- (id)dy_compressedDataWithAlgorithm:(unsigned long long)arg1;
- (unsigned int)dy_crc32;
- (id)dy_decompressedDataWithAlgorithm:(unsigned long long)arg1 outputLength:(unsigned long long)arg2;
- (id)hexStringWithLength:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/GPUToolsCapture.framework/GPUToolsCapture

- (id)GTGPUToolsData;

// Image: /System/Library/PrivateFrameworks/GPUToolsCore.framework/GPUToolsCore

- (id)DYGPUToolsData;

// Image: /System/Library/PrivateFrameworks/GPUToolsDiagnostics.framework/GPUToolsDiagnostics

- (id)GTGPUToolsData;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkImageCachePathForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(id /* block */)arg5;
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(id /* block */)arg6;
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3;

- (id)_gkZippedDictionaryValue;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices

+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (bool)CDXTicketIsHolePunch;
- (bool)CDXTicketIsReflected;
- (bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (bool)CDXTicketIsStub;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
- (unsigned long long)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (bool)CDXTicketWellFormed;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dataForHexString:(id)arg1;
+ (id)_geo_withXPCData:(id)arg1;

- (id)_GEOCreateDispatchData;
- (id)_geo_MD5Hash;
- (id)_geo_SHA1Hash;
- (id)_geo_SHA256Hash;
- (id)_geo_compressedDataViaAlgo:(int)arg1;
- (id)_geo_decompressedDataViaAlgo:(int)arg1;
- (id)_geo_hexString;
- (id)_geo_newXPCData;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)decodeArrayOfDateComponents;
- (id)decodeCalendar;
- (id)decodeDateComponents;
- (id)decodeTimeZone;
- (id)hmf_hexadecimalRepresentation;
- (id)hmf_hexadecimalStringWithOptions:(unsigned long long)arg1;
- (id)hmf_initWithHexadecimalString:(id)arg1 options:(unsigned long long)arg2;
- (bool)hmf_isZeroed;
- (id)hmf_zeroingCopy;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices

- (id)hk_base45Encoded;
- (id)hk_zlibCompressedIncludingHeaderAndTrailer:(bool)arg1 errorOut:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit

- (id)hpd_compressedDataUsingAlgorithm:(int)arg1;
- (id)hpd_dataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
- (id)hpd_decompressedDataUsingAlgorithm:(int)arg1;

// Image: /System/Library/PrivateFrameworks/HomeDeviceSetup.framework/HomeDeviceSetup

+ (id)mb_dataFromHexadecimalString:(id)arg1;

- (id)mb_hexadecimalString;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDataWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;
+ (id)hmbDataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;

- (id)hmbCompress;
- (id)hmbDescription;
- (id)hmbUncompress;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)dataWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

- (id)hmd_compressedData;
- (id)hmd_uncompressedData;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)dataWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

- (id)hmd_compressedData;
- (id)hmd_uncompressedData;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)_IDSDataFromBase64String:(id)arg1;

- (id)subdataWithRangeNoCopy:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)truncatedDescription;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
+ (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;

- (id)SHA1Data;
- (id)SHA1HexString;
- (id)SHA256Data;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dataWithMessageSummaryInfoDictionary:(id)arg1;

- (id)__im_engramStringRepresentation;
- (bool)isArchivable_im;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

- (struct CGImageBlockSet { }*)__IS_copyCGImageBlockSetWithProvider:(struct CGImageProvider { }*)arg1;
- (void)__IS_getImageBuffer:(void**)arg1 size:(unsigned long long*)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; float x4; float x5; float x6; float x7; float x8; float x9; unsigned char x10[12]; }*)__IS_imageHeader;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_ISMutableStoreIndex_mappedDataWithCapacity:(unsigned long long)arg1 additionalSize:(unsigned long long)arg2;
+ (id)_ISMutableStoreIndex_mappedDataWithSize:(unsigned long long)arg1;
+ (id)_ISMutableStoreIndex_mappedDataWithURL:(id)arg1;
+ (id)_ISStoreIndex_mappedDataWithURL:(id)arg1;
+ (id)__is__bookmarkDataWithContentsOfURL:(id)arg1;
+ (id)__is__dataWithContentsOfURL:(id)arg1;
+ (id)_is_invalidToken;
+ (id)_is_staleToken;
+ (id)_is_validToken;

- (union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })_ISMutableStoreIndex_addBlobBuffer:(const void*)arg1 size:(unsigned long long)arg2;
- (union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })_ISMutableStoreIndex_addBlobData:(id)arg1;
- (bool)_ISMutableStoreIndex_addValue:(const struct { unsigned char x1[16]; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; unsigned int x4; unsigned char x5[16]; unsigned char x6[16]; struct { unsigned char x_7_1_1[16]; unsigned long long x_7_1_2; unsigned char x_7_1_3[16]; } x7; }*)arg1;
- (bool)_ISMutableStoreIndex_addValue:(const void*)arg1 size:(unsigned long long)arg2 forUUID:(unsigned char)arg3;
- (unsigned long long)_ISMutableStoreIndex_availableSpace;
- (bool)_ISMutableStoreIndex_makeBackedByFileAtURL:(id)arg1;
- (void)_ISMutableStoreIndex_removeBlobForID:(union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })_ISStoreIndex_addNodeWithSize:(unsigned long long)arg1;
- (id)_ISStoreIndex_blobDataForID:(union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (struct { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned long long x_1_1_2; } x1; bool x2; unsigned char x3[3]; unsigned char x4[0]; }*)_ISStoreIndex_blobForID:(union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (struct { unsigned int x1; bool x2; unsigned int x3; }*)_ISStoreIndex_blobTableHeader;
- (bool)_ISStoreIndex_checkNodeBounds:(struct { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned char x2[16]; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_3_1_1; unsigned long long x_3_1_2; } x3; bool x4; unsigned char x5[3]; unsigned char x6[0]; }*)arg1;
- (void)_ISStoreIndex_enumerateBlobsWithBock:(id /* block */)arg1;
- (bool)_ISStoreIndex_enumerateValuesForUUID:(unsigned char)arg1 bock:(id /* block */)arg2;
- (void)_ISStoreIndex_enumerateValuesWithBock:(id /* block */)arg1;
- (union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; }*)_ISStoreIndex_hashTable;
- (struct { unsigned int x1; bool x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)_ISStoreIndex_hashTableHeader;
- (bool)_ISStoreIndex_isValid;
- (bool)_ISStoreIndex_isValid;
- (struct { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned long long x_1_1_2; } x1; unsigned char x2[16]; union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_3_1_1; unsigned long long x_3_1_2; } x3; bool x4; unsigned char x5[3]; unsigned char x6[0]; }*)_ISStoreIndex_nodeForRef:(union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })_ISStoreIndex_nodeRefForKey:(unsigned long long)arg1;
- (unsigned long long)_ISStoreIndex_nodesOffset;
- (bool)_ISStoreIndex_setNodeRef:(union { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; unsigned long long x2; })arg1 forKey:(unsigned long long)arg2;
- (id)__is__bookmarkResourcePropertyForKey:(id)arg1;
- (unsigned long long)_is_SequenceNumber;
- (id)_is_databaseUUID;
- (void)_is_getSequenceNumber:(unsigned long long*)arg1 andUUID:(id*)arg2;
- (id)_is_persistentIdentifierDigest;

// Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary

- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 error:(id*)arg5;
- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 error:(id*)arg6;
- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 withBarrier:(bool)arg6 error:(id*)arg7;
- (bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

+ (id)if_dataWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)if_dataWithValue:(id)arg1;

- (struct { unsigned int x1[8]; })if_auditToken;
- (id)if_valueOfType:(const char *)arg1;

// Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices

- (unsigned long long)_hashCKMigration;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)dataWithEncodedSequenceData:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedSequenceString:(id)arg1 data:(id)arg2 error:(id*)arg3;
+ (id)dataWithEncodedString:(id)arg1 error:(id*)arg2;

- (bool)decodeSequenceData:(id*)arg1 data:(id*)arg2 error:(id*)arg3;
- (bool)decodeSequenceString:(id*)arg1 data:(id*)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(bool)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (bool)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned long long)arg1;
- (id)mf_subdataToIndex:(unsigned long long)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCDataFromFile:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;

- (id)MCHexString;
- (id)MCSHA256Hash;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

- (id)cls_hexString;
- (id)cls_sha1Hash;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

// Image: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection

- (id)lengthValidatedBuffer;

// Image: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity

- (id)asMessageSecurityHexString;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

+ (id)mb_dataFromHexadecimalString:(id)arg1;

- (id)mb_base64EncodedFileSystemPathString;
- (id)mb_hexadecimalString;

// Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation

- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 error:(id*)arg5;
- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 error:(id*)arg6;
- (bool)MI_writeAtomicallyToURL:(id)arg1 withMode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 protectionClass:(int)arg5 withBarrier:(bool)arg6 error:(id*)arg7;
- (bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit

+ (id)dataWithHexString:(id)arg1;

- (id)hexStringRepresentation;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;

// Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer

- (id)compressedData;
- (id)decompressedData;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDescription;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;
+ (id)fromUUID:(id)arg1;

- (id)NRSHA256;
- (void)NRSHA256:(unsigned char)arg1;
- (bool)matchesDataAtFilePath:(id)arg1;
- (id)toUUID;

// Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber

- (void)checksum:(unsigned char)arg1;
- (id)checksumData;
- (void)checksumDataToChecksum:(unsigned char)arg1;
- (bool)matchesChecksum:(unsigned char)arg1;
- (bool)matchesChecksumData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (unsigned long long)_navigation_unsignedIntegerValue;

// Image: /System/Library/PrivateFrameworks/NearField.framework/NearField

- (id)decodeCHForRequest:(bool)arg1;
- (id)decodeCHRequest;
- (id)decodeCHRequestRetry;
- (id)decodeCHSelect;
- (id)decodeSelectErrorDictionary;
- (id)encodeToCBOR;

// Image: /System/Library/PrivateFrameworks/NeuralNetworks.framework/NeuralNetworks

+ (id)dataWithScalar:(id)arg1 dataType:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_randomDataWithLength:(unsigned long long)arg1;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (id)fc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)fc_anefDecryptWithKey:(id)arg1;
- (id)fc_anefEncryptWithKey:(id)arg1;
- (bool)fc_anefKeyIsValid:(id)arg1;
- (long long)fc_bigEndianCompareAsUnsignedInteger:(id)arg1;
- (id)fc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)fc_gzipDeflate;
- (id)fc_gzipInflate;
- (bool)fc_isGzipped;
- (id)fc_sha256;
- (id)fc_zlibDeflate;
- (id)fc_zlibInflate;
- (void)writeToKeyValuePair:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_dataFromHexString:(id)arg1;
+ (id)ic_dataWithBoolean:(bool)arg1;
+ (id)ic_dataWithUnsignedInteger:(unsigned long long)arg1;
+ (bool)ic_nullableData:(id)arg1 isEqualToNullableData:(id)arg2;
+ (id)ic_random128BitData:(id*)arg1;
+ (id)ic_random256BitData:(id*)arg1;
+ (id)ic_randomDataOfLength:(unsigned long long)arg1 error:(id*)arg2;

- (bool)ic_boolValue;
- (id)ic_gzipDeflate;
- (id)ic_gzipInflate;
- (id)ic_md5;
- (id)ic_sha256;
- (id)ic_stringValue;
- (unsigned long long)ic_unsignedIntegerValue;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tc_nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; bool x7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;

- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (id)pbui_hexadecimalEncodedString;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)dataWithCGImage:(struct CGImage { }*)arg1;
+ (id)dataWithHexEncodedString:(id)arg1;

- (id)SHA1Hash;
- (id)SHA256Hash;
- (id)URLBase64EncodedString;
- (id)fileSafeBase64Encoding;
- (bool)hasPDFMIMEType;
- (id)hexEncoding;

// Image: /System/Library/PrivateFrameworks/PlatformSSO.framework/PlatformSSO

- (id)psso_base64URLEncodedString;
- (id)psso_initWithBase64URLEncodedString:(id)arg1;
- (id)psso_sha256Hash;
- (id)psso_sha256HashString;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)imDataFromHexString:(id)arg1;
+ (id)uniquenessHashForContentsOfFileUrl:(id)arg1;
+ (id)uniquenessHashForContentsOfFileUrl:(id)arg1 readBufferSize:(unsigned long long)arg2;

- (id)hexString;
- (id)im_jsonSerializableValue;
- (id)uniquenessHash;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)pbf_sha256Hash;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)pv_dataWithPixelBuffer:(struct __CVBuffer { }*)arg1;

- (bool)pv_writeToPixelBuffer:(struct __CVBuffer { }*)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (id)_pas_dataWithNonnullBytes;
- (id)_pas_revivedString;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (id)APOdml_dataStringForJSON;

// Image: /System/Library/PrivateFrameworks/Radio.framework/Radio

+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(bool)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(bool)arg3 error:(id*)arg4;

- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)dataFromBase64String:(id)arg1;
+ (id)rem_dataWithHexString:(id)arg1;
+ (id)rem_dataWithRandomBytesWithLength:(unsigned long long)arg1;

- (id)TT_gzipDeflate;
- (id)TT_gzipInflate;
- (id)base64EncodedString;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_randomDataWithLength:(unsigned long long)arg1;

- (id)rc_URLSafeBase64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)rc_decryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)rc_encryptAESSIVWithKey:(id)arg1 additionalData:(id)arg2;
- (id)rc_gzipDeflate;
- (id)rc_gzipInflate;
- (id)rc_sha256;
- (id)rc_zlibDeflate;
- (id)rc_zlibInflate;

// Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement

- (bool)rm_atomicWriteToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/RemoteManagementModel.framework/RemoteManagementModel

- (id)RMModelHexString;
- (id)RMModelSHA1Hash;
- (id)RMModelSHA1HexString;

// Image: /System/Library/PrivateFrameworks/STSXPCHelperClient.framework/STSXPCHelperClient

+ (id)dataWithSTSNDEFRecord:(id)arg1;
+ (id)dataWithSTSNDEFRecords:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_dataWithHexString:(id)arg1;

- (id)safari_SHA1Hash;
- (bool)safari_dataAppearsToBeCompressed;
- (id)safari_dataByAppendingData:(id)arg1;
- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;
- (id)safari_descriptionWithoutSpaces;
- (unsigned long long)safari_hashMD5;
- (id)safari_scryptHashWithSalt:(id)arg1 N:(unsigned long long)arg2 r:(unsigned int)arg3 p:(unsigned int)arg4 keyLength:(unsigned long long)arg5;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)dataWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)dataWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)dataWithCGSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)dataWithPSN:(struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })arg1;
+ (id)dataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (struct CGPoint { double x1; double x2; })CGPointValue;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (struct CGSize { double x1; double x2; })CGSizeValue;
- (struct ProcessSerialNumber { unsigned int x1; unsigned int x2; })psn;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;

// Image: /System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sh_rangeOfData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (const void*)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long*)arg1;
- (id)siriCoreSQLiteValue_escapedString:(bool)arg1;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (long long)siriCoreSQLiteValue_type;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (id)si_asNSUUID;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (id)sruif_dataByCompressingWithGzip;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (bool)AES128CheckVerifier:(id)arg1 withPassword:(id)arg2;
+ (id)AES128GenerateVerifierWithPassword:(id)arg1;

- (id)AES128EncryptWithPassword:(id)arg1;
- (id)dictionaryFromNode:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 parentResult:(id)arg2 isParentContent:(bool)arg3;
- (id)hexaStringRepresentation;
- (id)hmacSha1Hash:(id)arg1;
- (id)md5Hash;
- (id)searchDataByXPathQuery:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 query:(id)arg2;
- (id)searchHTMLContentByXPathQuery:(id)arg1;
- (id)sha1Hash;
- (id)stringWithEncoding:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SoftPosReader.framework/SoftPosReader

+ (id)dataWithHexString:(id)arg1;

- (id)asHexString;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (id)sbf_hexadecimalEncodedString;

// Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore

- (id)ska_hexString;

// Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper

+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;

- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;

// Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator

- (id)gzipDeflate;
- (id)gzipInflate;
- (id)hexStringWithSpaces:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/Synapse.framework/Synapse

- (bool)_sy_containsUnsignedShort:(unsigned short)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;

- (bool)writeToURL:(id)arg1 encryptionKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_MD5Digest;
- (id)tv_SHA1Digest;
- (id)tv_SHA256Digest;
- (id)tv_lowercaseHexString;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)tvp_MD5Digest;
- (id)tvp_SHA1Digest;
- (id)tvp_SHA256Digest;
- (id)tvp_lowercaseHexString;
- (id)tvp_uppercaseHexString;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_dataForAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (id)tu_dataForURLSafeBase64EncodedString:(id)arg1;
+ (id)tu_dataForUUID:(id)arg1;

- (id)tu_URLSafeBase64EncodedString;
- (id)tu_UUID;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (id)nullTerminatedData;

// Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote

- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;

// Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance

+ (id)dataWithHexString:(id)arg1;

- (id)hexString;

// Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency

+ (id)kt_dataWithHexString:(const char *)arg1;
+ (id)kt_dataWithUint64:(unsigned long long)arg1 length:(unsigned long long)arg2;
+ (id)kt_random;

- (id)kt_hexString;
- (id)kt_sha256;
- (id)kt_sha256WithSalt:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)triVerifiedMappedDataWithFile:(id)arg1 error:(id*)arg2;

- (id)triHexlify;
- (id)triSha256;
- (id)triSha256Base64String;

// Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers

- (id)pbToNullable;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_uiSaveContentsToTemporaryFile;

// Image: /System/Library/PrivateFrameworks/URLCompression.framework/URLCompression

- (id)transformV1ToV2Encoding;
- (id)transformV2ToV1Encoding;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)vui_SHA1Digest;
- (id)vui_SHA256Digest;
- (id)vui_lowercaseHexString;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_md5;
- (id)vk_stringValue;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (id)vf_hexString;
- (id)vf_md5Digest;
- (id)vf_sha256Digest;
- (id)vf_sha256DigestWithSalts:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (id)MD5HashString;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (bool)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (long long)_web_locationAfterFirstBlankLine;
- (bool)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

+ (id)wl_dataFromHexEncodedData:(id)arg1;
+ (id)wl_dataFromHexEncodedString:(id)arg1;
+ (id)wl_hmacSHA256DataForData:(id)arg1 key:(id)arg2;
+ (id)wl_lengthPrefixedBlobSequenceFromDataArray:(id)arg1;

- (id)wl_arrayOfDataFromLengthPrefixedBlobSequenceWithExpectedCount:(unsigned long long)arg1;
- (bool)wl_blobIsComplete;
- (id)wl_dataFromLengthPrefixedBlob;
- (id)wl_hexEncodedData;
- (id)wl_hexEncodedString;
- (id)wl_lengthPrefixedBlob;
- (id)wl_subdataWithRangeExcludingTrailingCrnl:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)wl_utf8String;

// Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy

- (id)SHA1Hash;
- (id)hexEncoding;

// Image: /System/Library/PrivateFrameworks/ZhuGeSupport.framework/ZhuGeSupport

+ (id)dataFromHexString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

- (id)VCSConvert8bitBufferToUTF8From:(unsigned int)arg1;
- (id)VCSDecodeBase64;
- (id)VCSDecodeQuotedPrintableForText:(bool)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)ical_digest;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (id)brc_pendingPlaceholderForPackage:(bool)arg1;

- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (bool)brc_signatureIsPackage;
- (bool)brc_signatureIsPendingPlaceHolder;
- (bool)brc_signatureIsValid;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (id)ic_dataWithADIBytes:(char *)arg1 length:(unsigned int)arg2;
+ (id)ic_dataWithFairPlayBytes:(char *)arg1 length:(unsigned int)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;
+ (id)tsp_dataWithTranscoder:(id)arg1;

- (id)tsp_dataWithDecryptionKey:(id)arg1;
- (id)tsp_dataWithEncryptionKey:(id)arg1;
- (id)tsp_dispatchData;
- (id)tsp_dispatchDataWithApplier:(id /* block */)arg1;
- (unsigned long long)tsp_length;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id /* block */)arg2;
- (bool)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_decodeFromBase64CString:(const char *)arg1 srcLength:(unsigned long long)arg2;
+ (id)tsu_decodeFromBase64String:(id)arg1;
+ (id)tsu_decodeFromBase64StringWithWhitespace:(id)arg1;

- (id)tsu_compressWithAlgorithm:(int)arg1 operation:(int)arg2;
- (id)tsu_encodeToBase64String;
- (id)tsu_encodeToBase64URLSafeString;

// Image: /System/Library/PrivateFrameworks/vCard.framework/vCard

+ (unsigned long long)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1;

- (id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;

// Image: /usr/lib/libSESShared.dylib

+ (id)dataWithDERItem:(const struct { char *x1; unsigned long long x2; }*)arg1;
+ (id)dataWithHexString:(id)arg1;
+ (id)randomData:(unsigned long long)arg1;
+ (id)withU16BE:(unsigned short)arg1;

- (struct { char *x1; unsigned long long x2; })DERItem;
- (id)asHexString;
- (id)base64;
- (bool)isAllZero;
- (bool)isEqualToBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (bool)isEqualToDERItem:(const struct { char *x1; unsigned long long x2; }*)arg1;
- (bool)isEqualToHexCString:(const char *)arg1;
- (int)s32BE:(unsigned long long)arg1;
- (id)sha1;
- (id)sha256;
- (id)sha384;
- (unsigned short)u16BE:(unsigned long long)arg1;
- (unsigned short)u16LE:(unsigned long long)arg1;
- (unsigned int)u32BE:(unsigned long long)arg1;
- (unsigned int)u32LE:(unsigned long long)arg1;
- (unsigned long long)u64BE:(unsigned long long)arg1;
- (unsigned long long)u64LE:(unsigned long long)arg1;
- (unsigned char)u8:(unsigned long long)arg1;

// Image: /usr/lib/libauthinstall.dylib

- (id)byteString;

// Image: /usr/lib/libnfshared.dylib

+ (id)NF_dataWithHexString:(id)arg1;

- (id)NF_asHexString;
- (bool)NF_isZeroed;
- (unsigned long long)NF_toUint64:(id*)arg1;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
