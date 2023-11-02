
@interface NSUUID : NSObject <AFSecurityDigestibleChunksProviding, ASDNotificationType, BSXPCSecureCoding, CRCoding, CRDataType, CREquatable, GCSJSONSerializable, HKUUIDProvider, HMBQueryableModelFieldCoder, HMDOPACKValue, HMFObject, ICCRCoding, ICCRDataType, ICCREquatable, MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSSecureCoding, PKDrawingUUID, PQLValuable, SASerializable, SFFluidCollectionShadowUpdateToken, SFFluidCollectionViewTrackedUpdateToken, _PASDistilledString>

@property (readonly, copy) NSData *AES128Key;
@property (nonatomic, readonly, copy) NSString *CR_shortDescription;
@property (readonly, copy) NSString *UUIDString;
@property (nonatomic, readonly, copy) NSData *ak_uuidData;
@property (readonly) bool an_isLocalDevice;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSData *hmf_bytesAsData;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *uniqueCacheFilePath;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)UUID;
+ (bool)_compatibilityBehavior;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)UUIDString;
- (struct __CFString { }*)_cfUUIDString;
- (Class)classForCoder;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(unsigned char)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (long long)CKCompare:(id)arg1;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (const void*)cksqlcs_blobBindingValue:(unsigned long long*)arg1 destructor:(int (**)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_LS_UUIDWithData:(id)arg1 digestType:(long long)arg2;
+ (id)_LS_nullUUID;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)_EK_nullUUID;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_UUIDWithData:(id)arg1;
+ (id)hk_v3UUIDWithNameSpace:(id)arg1 name:(id)arg2;

- (id)hk_UUID;
- (long long)hk_compare:(id)arg1;
- (id)hk_dataForUUIDBytes;
- (id)hk_shortRepresentation;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1;
+ (id)hm_deriveUUIDForAssistantFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1;
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2;
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;
+ (id)hm_deriveUUIDFromBaseUUID:(id)arg1 withSalts:(id)arg2;
+ (bool)hm_setAssistantIdentifierSalt:(id)arg1;
+ (void)hm_setIdentifierSalt:(id)arg1;
+ (id)hm_uuid:(id)arg1 identifierSalt:(id)arg2 withSalts:(id)arg3;

- (id)hm_convertToData;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (id)PK_zero;

- (id)AES128Key;
- (long long)PK_compare:(id)arg1;
- (id)PK_shortDescription;
- (id)uniqueCacheFilePath;

// Image: /System/Library/Frameworks/SensorKit.framework/SensorKit

+ (id)sr_UUIDWithUint32_t:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (id)appendBytes:(unsigned long long)arg1;
- (id)data;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

+ (id)ar_UUIDWithCFUUIDRef:(struct __CFUUID { }*)arg1;
+ (id)ar_UUIDWithCVPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)ar_UUIDWithData:(id)arg1;
+ (id)ar_UUIDWithIntegerValue:(unsigned long long)arg1;
+ (id)ar_zeroUUID;

- (struct __CFUUID { }*)ar_createCFUUIDRef;
- (unsigned long long)ar_integerValue;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/Announce.framework/Announce

- (bool)an_isLocalDevice;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_base62String;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)ak_uuidData;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CSExattrCrypto.framework/CSExattrCrypto

- (id)MDUUIDData;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_UUIDWithOpaqueData:(id)arg1;
+ (id)crk_UUIDWithOpaqueString:(id)arg1;
+ (void)crk_condense32BytesIntoFirst16Bytes:(char *)arg1;
+ (id)crk_zerosUUID;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence

+ (id)CRTTZero;

- (long long)CRTTCompare:(id)arg1;
- (id)CRTTShortDescription;
- (id)CRTTxorWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (long long)co_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge

- (id)base64EncodedStringNoPadding;
- (id)data;
- (id)initWithBase64EncodedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine

+ (id)nilUUID;

// Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings

- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dataForUUID;
+ (id)_geo_dataForWaypointUUID:(id)arg1;
+ (id)_geo_uuidForData:(id)arg1;
+ (id)_geo_uuidForWaypointUUID:(id)arg1;
+ (id)_geo_waypointUUIDForData:(id)arg1;
+ (id)_maps_UUIDWithData:(id)arg1;

- (id)_geo_data;
- (id)_geo_waypointUUID;
- (id)_maps_data;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmf_UUIDWithBytesAsData:(id)arg1;
+ (id)hmf_UUIDWithNamespace:(id)arg1 data:(id)arg2;
+ (id)hmf_zeroUUID;
+ (id)shortDescription;
+ (id)zeroUUID;

- (id)hmf_bytesAsData;
- (bool)hmf_isEqualToUUID:(id)arg1;
- (bool)hmf_isEqualToUUIDString:(id)arg1;
- (id)initWithNamespace:(id)arg1 data:(id)arg2;
- (id)privateDescription;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbUUIDFromData:(id)arg1;
+ (id)hmbUUIDWithSQLite3Column:(struct sqlite3_stmt { }*)arg1 column:(int)arg2;

- (id)data;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

+ (id)_IF_UUIDByXORingUUIDs:(id)arg1;
+ (id)_IF_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;
+ (id)_IF_UUIDWithData:(id)arg1;
+ (id)_IF_UUIDWithDouble:(double)arg1;
+ (id)_IF_UUIDWithInt64:(long long)arg1;
+ (id)_IF_UUIDWithOSType:(unsigned int)arg1;
+ (id)_IF_UUIDWithString:(id)arg1;
+ (id)_IF_nullUUID;

- (void)_IF_getUUIDBytes:(char *)arg1 hash64:(unsigned long long*)arg2;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

+ (id)_IS_UUIDByXORingUUIDs:(id)arg1;
+ (id)_IS_UUIDWithBytes:(const char *)arg1 size:(unsigned long long)arg2;
+ (id)_IS_UUIDWithData:(id)arg1;
+ (id)_IS_UUIDWithInt64:(long long)arg1;
+ (id)_IS_UUIDWithOSType:(unsigned int)arg1;
+ (id)_IS_UUIDWithString:(id)arg1;
+ (id)_IS_nullUUID;

- (void)_IS_getUUIDBytes:(char *)arg1 hash64:(unsigned long long*)arg2;

// Image: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine

- (id)je_base62String;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

+ (id)_maps_UUIDWithUUIDString:(id)arg1;
+ (id)_maps_zeroUUID;

- (long long)_maps_compare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)msv_UUIDWithData:(id)arg1;
+ (id)msv_uuidWithCFUUID:(struct __CFUUID { }*)arg1;
+ (id)uuidWithMSVBase64UUID:(id)arg1;

- (id)MSVBase64UUIDString;
- (id)initWithMSVBase64UUIDString:(id)arg1;
- (id)msv_UUIDData;
- (struct __CFUUID { }*)msv_copyCFUUID;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (id)mt_base62String;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)CR_UUIDFromStdString:(const void*)arg1;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_unknown;
+ (id)CR_unserialized;
+ (id)CR_zero;
+ (id)TTZero;

- (long long)CR_compare:(id)arg1;
- (id)CR_shortDescription;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })CR_toStdString;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)launchPersona;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (id)prs_defaultInstanceIdentifier;
+ (id)prs_invalidInstanceIdentifier;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

- (id)_pas_revivedString;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)CR_UUIDFromStdString:(const void*)arg1;
+ (id)CR_repeatedCharUUID:(unsigned char)arg1;
+ (id)CR_zero;
+ (id)TTZero;

- (long long)CR_compare:(id)arg1;
- (id)CR_shortDescription;
- (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })CR_toStdString;
- (long long)TTCompare:(id)arg1;
- (id)TTShortDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

// Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

+ (id)sa_deterministicUUIDv5ForNamespace:(id)arg1 name:(id)arg2;
+ (id)sa_deterministicUUIDv5ForNamespaceUUID:(id)arg1 sourceUUID:(id)arg2;

- (id)sa_uuidBytes;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (id)si_uuidBytes;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_UUIDv5ForData:(id)arg1 namespaceUUID:(id)arg2;
+ (id)tu_UUIDv5ForString:(id)arg1 namespaceUUID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

- (id)tsp_initWithMessage:(const void*)arg1;
- (void)tsp_saveToMessage:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 UUID:(id)arg2;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 bytes:(const void*)arg2 size:(unsigned long long)arg3;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 doubleValue:(double)arg2;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 integerValue:(long long)arg2;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 name:(id)arg2;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 timeInterval:(double)arg2;
+ (id)tsu_UUIDWithNamespaceUUID:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;

- (long long)tsu_compare:(id)arg1;

// Image: /usr/lib/libSESShared.dylib

+ (id)withData:(id)arg1;
+ (id)withUUIDString:(id)arg1;

- (id)toData;

// Image: /usr/lib/libprequelite.dylib

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
