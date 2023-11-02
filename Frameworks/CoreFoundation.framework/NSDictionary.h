
@interface NSDictionary : NSObject <AADataType, AFSecurityDigestibleChunksProviding, AMSHashable, AMSSecureCodingSanitizable, APPCSupplementalContextAllowedTypes, ASDNotificationType, ATXScoreLogSerializable, CARMutableDeepCopying, CKDeepCopying, CMSCoding, CRKJSONRepresentable, CSCoderEncoder, CUByteCodable, FPAuxDataType, GCSJSONObject, GCSJSONSerializable, HFPropertyListConvertible, HMDOPACKValue, HMFObject, IMJSONSerializableValueProviding, INJSONSerializable, InnerContentHash, MGRemoteQueryEncodable, MPCPlaybackEngineEventPayloadJSONValue, MPCSupportedCommands, NFCBOREncodable, NNSyncableHeadline, NNSyncableResult, NNSyncableSection, NSCopying, NSFastEnumeration, NSFetchRequestResult, NSMutableCopying, NSSecureCoding, PBFPosterSnapshotProviding, PHFetchDictionaryAccessing, PQLBindable, REDonatedActionIdentifierProviding, SBSADictionaryDescribable, SGDeepCopyWithoutEmptySchemaObjects, TSPResourceLocalStrategyProvider, WFJSONObject, WFJavaScriptCoreBridgeableObject, WFPropertyListObject, WFSerializableContent>

@property (nonatomic, readonly, copy) NSDictionary *ANQPResponse;
@property (nonatomic, readonly) int APMode;
@property (nonatomic, readonly, copy) NSString *BSSID;
@property (readonly, copy) NSNumber *CHIPAttributeID;
@property (readonly, copy) NSNumber *CHIPClusterID;
@property (readonly, copy) id CHIPCommandFields;
@property (readonly, copy) NSNumber *CHIPCommandID;
@property (readonly, copy) id CHIPData;
@property (readonly, copy) NSNumber *CHIPEndpointID;
@property (readonly, copy) NSNumber *CHIPMaxInterval;
@property (readonly, copy) NSNumber *CHIPMinInterval;
@property (readonly, copy) MTRReadParams *CHIPReadParams;
@property (readonly, copy) NSString *CHIPRemoteCommand;
@property (readonly, copy) NSArray *CHIPRemoteResults;
@property (readonly, copy) MTRSubscribeParams *CHIPSubscribeParams;
@property (readonly, copy) NSNumber *CHIPTimedInvokeTimeout;
@property (readonly, copy) NSNumber *CHIPTimedWriteTimeout;
@property (nonatomic, readonly) int FILSAccessNetworkType;
@property (nonatomic, readonly) long long FILSBeaconInterval;
@property (nonatomic, readonly) bool FILSIsAdditionalStepRequiredForAccess;
@property (nonatomic, readonly) bool FILSIsESS;
@property (nonatomic, readonly) bool FILSIsEmergencyServicesReachable;
@property (nonatomic, readonly) bool FILSIsInternetAccessible;
@property (nonatomic, readonly) bool FILSIsUnauthenticatedEmergencyServiceAccessible;
@property (nonatomic, readonly, copy) CWFChannel *FILSPrimaryChannel;
@property (nonatomic, readonly, copy) NSDictionary *FILSPrimaryChannelInfo;
@property (nonatomic, readonly, copy) NSData *FILSSSID;
@property (nonatomic, readonly) unsigned long long FILSShortSSID;
@property (nonatomic, readonly) int FILSSupportedPHYModes;
@property (nonatomic, readonly, copy) NSString *HESSID;
@property (nonatomic, readonly, copy) NSArray *NAIRealmNameList;
@property (nonatomic, readonly) struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; } PVTransformAnimationInfo;
@property (nonatomic, readonly, copy) NSArray *RNRBSSList;
@property (nonatomic, readonly, copy) NSArray *RNRChannelList;
@property (nonatomic, readonly) NSArray *RSNAuthSelectors;
@property (nonatomic, readonly) unsigned long long RSNBroadcastCipher;
@property (nonatomic, readonly) int RSNCapabilities;
@property (nonatomic, readonly) unsigned long long RSNMulticastCipher;
@property (nonatomic, readonly) NSArray *RSNUnicastCiphers;
@property (nonatomic, readonly) long long RSSI;
@property (nonatomic, readonly, copy) NSData *SSID;
@property (nonatomic, readonly) long long WAPISubtype;
@property (nonatomic, readonly) NSArray *WPAAuthSelectors;
@property (nonatomic, readonly) unsigned long long WPAMulticastCipher;
@property (nonatomic, readonly) NSArray *WPAUnicastCiphers;
@property (nonatomic, readonly) NSNumber *__im_associatedMessageContentType;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginBundleID;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginDisplayName;
@property (nonatomic, readonly) NSString *__im_associatedMessageSummary;
@property (readonly) bool aaf_hasObjects;
@property (nonatomic, readonly) int accessNetworkType;
@property (nonatomic, readonly) unsigned long long age;
@property (nonatomic, readonly) long long airPortBaseStationModel;
@property (nonatomic, readonly) NSNumber *ams_DSID;
@property (nonatomic, readonly) NSDictionary *ams_accountFlags;
@property (nonatomic, readonly) NSString *ams_altDSID;
@property (nonatomic, readonly) NSString *ams_creditsString;
@property (nonatomic, readonly) long long ams_errorCode;
@property (nonatomic, readonly) NSString *ams_firstName;
@property (nonatomic, readonly) bool ams_isManagedAppleID;
@property (nonatomic, readonly) NSString *ams_lastName;
@property (nonatomic, readonly) NSDictionary *ams_privacyAcknowledgement;
@property (nonatomic, readonly) NSString *ams_secureToken;
@property (nonatomic, readonly) NSString *ams_username;
@property (nonatomic, readonly) unsigned long long associationDisallowedReason;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) long long beaconInterval;
@property (nonatomic, readonly, copy) NSString *bluetoothMAC;
@property (nonatomic, readonly) id carMutableDeepCopy;
@property (nonatomic, readonly) NSError *cat_errorValue;
@property (nonatomic, readonly, copy) NSArray *cellularNetworkInfo;
@property (nonatomic, readonly, copy) CWFChannel *channel;
@property (nonatomic, readonly, copy) NSDictionary *channelInfo;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly) id crk_keyValueObservingNewObject;
@property (nonatomic, readonly) id crk_keyValueObservingOldObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceID;
@property (nonatomic, readonly, copy) BSOrderedDictionary *dictionaryDescription;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSArray *domainNameList;
@property (nonatomic, readonly) unsigned short fileHFSFlags;
@property (nonatomic, readonly) unsigned long long fileHFSResourceForkSize;
@property (nonatomic, readonly, copy) NSString *friendlyName;
@property (nonatomic, readonly) bool hasAppleIE;
@property (nonatomic, readonly) bool hasFILSAccessNetworkOptions;
@property (nonatomic, readonly) bool hasFILSCaps;
@property (nonatomic, readonly) bool hasFILSDiscoveryInformation;
@property (nonatomic, readonly) bool hasInterworkingIE;
@property (nonatomic, readonly) bool hasMBOOCEIE;
@property (nonatomic, readonly) bool hasRSNIE;
@property (nonatomic, readonly) bool hasWPAIE;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hashedDescription;
@property (readonly, copy) NSString *hmbDescription;
@property (nonatomic, readonly, copy) NSString *if_JSONStringRepresentation;
@property (nonatomic, readonly, copy) NSData *informationElementData;
@property (nonatomic, readonly) bool isAdditionalStepRequiredForAccess;
@property (nonatomic, readonly) bool isAppleSWAP;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) bool isEmergencyServicesReachable;
@property (nonatomic, readonly) bool isFILSDiscoveryFrame;
@property (nonatomic, readonly) bool isInternetAccessible;
@property (nonatomic, readonly) bool isPasspoint;
@property (nonatomic, readonly) bool isPersonalHotspot;
@property (nonatomic, readonly) bool isUnauthenticatedEmergencyServiceAccessible;
@property (nonatomic, readonly) bool isUnconfiguredAirPortBaseStation;
@property (nonatomic, readonly) bool isUnconfiguredDevice;
@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) id jsonRepresentation;
@property (nonatomic) unsigned long long lastClientRevision;
@property (nonatomic) unsigned long long lastServerRevision;
@property (nonatomic, readonly, copy) NSString *manufacturerName;
@property (nonatomic, readonly, copy) NSString *modelName;
@property (nonatomic, readonly) NSString *mr_formattedDebugDescription;
@property (nonatomic, readonly, copy) NSString *msv_compactDescription;
@property (nonatomic, readonly) NSArray *networkFlags;
@property (nonatomic) unsigned long long newRevision;
@property (nonatomic, readonly) long long noise;
@property (readonly) NSString *npkRelevancyRelevantText;
@property (readonly) NSString *npkRelevancyUniqueID;
@property (nonatomic, readonly, copy) NSArray *operatorFriendlyNameList;
@property (nonatomic, readonly, copy) NSString *primaryMAC;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) bool providesInternetAccess;
@property (nonatomic, readonly, copy) NSArray *roamingConsortiumList;
@property (nonatomic, readonly, copy) NSDictionary *safari_dictionaryByRemovingNullObjects;
@property (nonatomic, readonly, copy) NSDictionary *safari_dictionaryWithLowercaseKeys;
@property (nonatomic, readonly, copy) NSString *safari_jsonRepresentation;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) unsigned long long shortSSID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int supportedPHYModes;
@property (nonatomic, readonly) unsigned long long supportedSecurityTypes;
@property (nonatomic, readonly) bool supports2GHzNetworks;
@property (nonatomic, readonly) bool supports5GHzNetworks;
@property (nonatomic, readonly) bool supportsAirPlay;
@property (nonatomic, readonly) bool supportsAirPlay2;
@property (nonatomic, readonly) bool supportsAirPrint;
@property (nonatomic, readonly) bool supportsCarPlay;
@property (nonatomic, readonly) bool supportsHomeKit;
@property (nonatomic, readonly) bool supportsHomeKit2;
@property (nonatomic, readonly) bool supportsMFi;
@property (nonatomic, readonly) bool supportsMFiHardwareAuth;
@property (nonatomic, readonly) bool supportsSecureWAC;
@property (nonatomic, readonly) bool supportsSoftwareCertAuth;
@property (nonatomic, readonly) bool supportsSoftwareTokenAuth;
@property (nonatomic, readonly) bool supportsWPS;
@property (nonatomic, readonly) bool supportsWoW;
@property (nonatomic, readonly) bool supportsiAPOverWiFi;
@property (nonatomic, readonly) NSString *sync_NewsURLString;
@property (nonatomic, readonly) NSString *sync_colorHexString;
@property (nonatomic, readonly) NSString *sync_excerpt;
@property (nonatomic, readonly) NSDate *sync_expirationDate;
@property (nonatomic, readonly) unsigned long long sync_headlineCount;
@property (nonatomic, readonly) NSArray *sync_headlines;
@property (nonatomic, readonly) NSString *sync_identifier;
@property (nonatomic, readonly) NSString *sync_name;
@property (nonatomic, readonly) NSString *sync_publisherIdentifier;
@property (nonatomic, readonly) NSData *sync_publisherLogoImageData;
@property (nonatomic, readonly) NSString *sync_publisherName;
@property (nonatomic, readonly) NSArray *sync_sections;
@property (nonatomic, readonly) NSData *sync_thumbnailImageData;
@property (nonatomic, readonly) NSString *sync_title;
@property (nonatomic, readonly) unsigned long long sync_type;
@property (nonatomic, readonly) NSString *sync_webURLString;
@property (nonatomic, readonly) struct XRTimeRange { unsigned long long x1; unsigned long long x2; } timeRangeValue;
@property (readonly) NSSet *tsu_allKeysAsSet;
@property (nonatomic, readonly) long long venueGroup;
@property (nonatomic, readonly) long long venueType;
@property (nonatomic, copy) NSString *versionToken;
@property (nonatomic, retain) WFFileType *wf_preferredFileType;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionary;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(bool)arg2;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forKey:(id)arg2;
- (id)_cfMutableCopy;
- (unsigned long long)_cfTypeID;
- (void)_getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allObjects;
- (id)allValues;
- (bool)containsKey:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)invertedDictionary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (bool)isNSDictionary__;
- (id)keyEnumerator;
- (id)keyOfEntryPassingTest:(id /* block */)arg1;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesPassingTest:(id /* block */)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysSortedByValueUsingComparator:(id /* block */)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)keypathValueDictionary;
- (id)keypathValueDictionary:(id)arg1;
- (id)makeSerializable;

// Image: /System/Library/Frameworks/AVKit.framework/AVKit

- (id)airMessageCanonicalForm;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)ac_mapValues:(id /* block */)arg1;
- (id)ac_mapValuesNullable:(id /* block */)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKCompactMap:(id /* block */)arg1;
- (id)CKCompactMapValues:(id /* block */)arg1;
- (id)CKDeepCopy;
- (id)CKDeepCopyWithLeafNodeCopyBlock:(id /* block */)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKFilter:(id /* block */)arg1;
- (id)CKFirstUrlForKeys:(id)arg1;
- (id)CKFlatMap:(id /* block */)arg1;
- (id)CKMap:(id /* block */)arg1;
- (id)CKMapKeysAndValues:(id /* block */)arg1;
- (id)CKMapValues:(id /* block */)arg1;
- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (id)CKPropertiesStyleString;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (bool)_LS_BoolForKey:(id)arg1;
- (unsigned long long)_LS_integerForKey:(id)arg1;
- (id)_ls_normalizedPluginPlist;
- (id)ls_fixupExtensionPointIdentifierKey;
- (unsigned long long)ls_hashQuery;
- (id)ls_insertExtensionPointVersion:(id)arg1;
- (id)ls_parseQueryForIdentifiers:(id)arg1;
- (id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(id /* block */)arg2;
- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib

+ (id)dictionaryWithJSONString:(const void*)arg1;

// Image: /System/Library/Frameworks/ExtensionFoundation.framework/ExtensionFoundation

+ (id)_EX_dictionaryWithSignedURL:(id)arg1 error:(id*)arg2;

- (id)_EX_arrayForKey:(id)arg1;
- (id)_EX_arrayForKeys:(id)arg1;
- (bool)_EX_boolForKey:(id)arg1;
- (bool)_EX_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)_EX_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)_EX_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;
- (id)_EX_dictionaryBySettingValuesForKeysWithDictionary:(id)arg1;
- (id)_EX_dictionaryForKey:(id)arg1;
- (id)_EX_dictionaryForKeys:(id)arg1;
- (long long)_EX_integerForKey:(id)arg1;
- (id)_EX_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)_EX_objectForKeys:(id)arg1 ofClass:(Class)arg2;
- (id)_EX_stringForKey:(id)arg1;
- (id)_EX_stringForKeys:(id)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

- (id)fp_copyItemKeysAndValuesUnwrappedAndKeyMap:(id)arg1;
- (id)fp_copyItemKeysUnwrappedAndKeyMap:(id)arg1;
- (id)fp_filter:(id /* block */)arg1;
- (id)fp_removingObjectsNotKindOfClasses:(id)arg1;
- (id)fp_valueForKeyPath:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (id)__swiftInitWithDictionary_NSDictionary:(id)arg1;
- (id)__swift_objectForKeyedSubscript:(id)arg1;
- (id)_stringToWrite;
- (int)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (Class)classForCoder;
- (id)descriptionInStringsFileFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)fileCreationDate;
- (bool)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (unsigned int)fileHFSCreatorCode;
- (unsigned int)fileHFSTypeCode;
- (bool)fileIsAppendOnly;
- (bool)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (void)_addDerivedPublicKeyIfNecessaryForPrivateKey:(id)arg1 mutableDictionary:(id)arg2;
+ (id)hk_acceptedAttachmentMetadataValueClasses;
+ (id)hk_acceptedMetadataValueClasses;
+ (id)hk_acceptedPublicMetadataValueClasses;
+ (bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(bool)arg2;
+ (id)hk_secureAttachmentCodingClasses;
+ (id)hk_secureCodingClasses;

- (id)_copyWithoutPrivateMetadataKeysShouldDerivePublicKeys:(bool)arg1;
- (bool)_hk_validateBaseMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id*)arg4;
- (bool)_hk_validateMetadataAzulValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateMetadataBaseValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateMetadataDawnValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateMetadataSkyValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateMetadataSydneyValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 applicationSDKVersion:(unsigned int)arg3 error:(id*)arg4;
- (bool)_hk_validateMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 forKey:(id)arg3 applicationSDKVersion:(unsigned int)arg4 error:(id*)arg5;
- (bool)_hk_validateMetadataYukonValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (bool)_hk_validateYukonMetadataValueForWorkoutEvent:(id)arg1 valueContent:(id)arg2 key:(id)arg3 error:(id*)arg4;
- (id)hk_allValuesBySortedKeys;
- (bool)hk_containsValuePassingTest:(id /* block */)arg1;
- (id)hk_copySanitizedForPublicClient;
- (id)hk_copyWithoutPrivateMetadataKeys;
- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)hk_filter:(id /* block */)arg1;
- (id)hk_filterKeysWithBlock:(id /* block */)arg1;
- (id)hk_filteredDictionaryForKeys:(id)arg1;
- (id)hk_map:(id /* block */)arg1;
- (id)hk_replaceKeysFromSharedStringCache;
- (id)hk_sortedKeys;
- (bool)hk_validateAttachmentMetadataKeysAndValuesWithError:(id*)arg1;
- (bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(bool)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id*)arg3;
- (bool)hk_validateMetadataKeysAndValuesForWorkoutEvent:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id*)arg3;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_locationFromDataForKey:(id)arg1;
- (id)hm_regionFromDataForKey:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_indexingRepresentation;
- (id)_intents_widgetPlistRepresentableForKey:(id)arg1 ofClass:(Class)arg2 error:(id*)arg3;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (bool)intents_boolForKey:(id)arg1;
- (double)intents_doubleForKey:(id)arg1;
- (long long)intents_intForKey:(id)arg1;
- (id)intents_numberForKey:(id)arg1;
- (id)intents_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)intents_stringForKey:(id)arg1;
- (id)intents_urlForKey:(id)arg1;

// Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils

+ (id)dictionaryByMerging:(id)arg1 with:(id)arg2;

- (id)dictionaryByMergingWith:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (bool)_mapkit_writeBinaryPlist:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)mp_deepMerge:(id)arg1;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_filterUsingMap:(id)arg1 inverse:(bool)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (void*)CA_copyRenderKeyValueArray;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })SCNMatrix4Value;
- (id)SCNMutableDeepCopy;
- (struct SCNVector3 { float x1; float x2; float x3; })SCNVector3Value;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })SCNVector4Value;
- (unsigned long long)SCN_safeHash;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_nonEmptyCopy;
- (id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_arrayForKey:(id)arg1;
- (id)vs_arrayOfDictionariesForKey:(id)arg1;
- (id)vs_arrayOfKindOfClass:(Class)arg1 forKey:(id)arg2;
- (id)vs_arrayOfNumbersForKey:(id)arg1;
- (id)vs_arrayOfStringsForKey:(id)arg1;
- (id)vs_dictionaryForKey:(id)arg1;
- (id)vs_numberForKey:(id)arg1;
- (id)vs_objectForCaseInsensitiveKey:(id)arg1;
- (id)vs_objectForNormalizedKey:(id)arg1;
- (id)vs_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)vs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

+ (id)aaf_empty;

- (id)aaf_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)aaf_dictionaryByAddingValue:(id)arg1 forKey:(id)arg2;
- (id)aaf_filter:(id /* block */)arg1;
- (bool)aaf_hasObjects;
- (id)aaf_map:(id /* block */)arg1;
- (id)aaf_mapStoppable:(id /* block */)arg1;
- (id)aaf_toUrlQueryItems;
- (id)aaf_toUrlQueryString;

// Image: /System/Library/PrivateFrameworks/APFoundation.framework/APFoundation

- (bool)dictionaryContainsContainers;
- (id)jsonDataWithOptions:(unsigned long long)arg1;
- (id)jsonRepresentationWithOptions:(unsigned long long)arg1;
- (id)jsonString;
- (id)jsonStringWithOptions:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore

- (id)_recursiveObjectForKey:(id)arg1 visited:(id)arg2;
- (id)recursiveObjectForKey:(id)arg1 deleteKeys:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

- (id)copyGKSDeep;
- (id)copyGKSDeepMutable;

// Image: /System/Library/PrivateFrameworks/AXCoreUtilities.framework/AXCoreUtilities

- (id)ax_deepMutableCopy;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)axssDecodeArrayOfClass:(Class)arg1 forKey:(id)arg2;
- (bool)axssDecodeBoolForKey:(id)arg1;
- (id)axssDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon

- (bool)boolValueForKey:(id)arg1;
- (id)dataValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)pkt_dictionaryByParsingURLEncodedFormString:(id)arg1;

- (id)pkt_URLEncodedFormString;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)AD_dictionaryForJSON;
- (bool)AD_hasObjectForKey:(id)arg1 ofKindOfClass:(Class)arg2;
- (id)AD_jsonString;
- (id)AD_jsonStringWithPrettyPrint:(bool)arg1;
- (id)AD_objectForKey:(id)arg1 ofKindOfClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (long long)ssidAndBaseNameLocalizedCaseInsensitiveCompare:(id)arg1;
- (long long)ssidLocalizedCaseInsensitiveCompare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)deviceGUID;
- (id)devicePairingId;
- (id)displayName;
- (id)enabledDataClasses;
- (id)grappaInfo;
- (unsigned long long)lastClientRevision;
- (unsigned long long)lastServerRevision;
- (id)model;
- (unsigned long long)newRevision;
- (id)osType;
- (id)osVersion;
- (void)setDeviceGUID:(id)arg1;
- (void)setDevicePairingId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabledDataClasses:(id)arg1;
- (void)setGrappaInfo:(id)arg1;
- (void)setLastClientRevision:(unsigned long long)arg1;
- (void)setLastServerRevision:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNewRevision:(unsigned long long)arg1;
- (void)setOsType:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setVersionToken:(id)arg1;
- (id)versionToken;

// Image: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics

- (id)toJsonValueAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

- (id)asc_dictionaryByMergingDictionary:(id)arg1 uniquingKeysWithBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_dictionaryByAddingEntriesFromDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)ams_dictionaryWithEncryptionResult:(struct { id x1; id x2; id x3; })arg1;

- (id)ams_DSID;
- (id)ams_accountFlags;
- (id)ams_altDSID;
- (id)ams_arrayUsingTransform:(id /* block */)arg1;
- (id)ams_componentsJoinedByString:(id)arg1;
- (id)ams_creditsString;
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)ams_dictionaryRemovingKeys:(id)arg1;
- (struct { id x1; id x2; id x3; })ams_encryptionResult;
- (long long)ams_errorCode;
- (id)ams_filterUsingTest:(id /* block */)arg1;
- (id)ams_firstKeyObjectPassingTest:(id /* block */)arg1;
- (id)ams_firstKeyPassingTest:(id /* block */)arg1;
- (id)ams_firstName;
- (id)ams_firstObjectPassingTest:(id /* block */)arg1;
- (bool)ams_isManagedAppleID;
- (id)ams_keysForChangedValuesComparedToDictionary:(id)arg1;
- (id)ams_lastName;
- (id)ams_mapWithTransform:(id /* block */)arg1;
- (id)ams_objectForCaseInsensitiveKey:(id)arg1;
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)ams_privacyAcknowledgement;
- (id)ams_sanitizedForSecureCoding;
- (id)ams_secureToken;
- (id)ams_username;
- (id)ams_valuesForKeys:(id)arg1;
- (id)hashedDescription;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)ams_JSONStringWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)_af_lenient:(bool)arg1 map:(id /* block */)arg2;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)af_lenientMappedDictionary:(id /* block */)arg1;
- (id)af_mappedDictionary:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver

- (bool)fourCharCode:(unsigned int*)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

- (id)_ak_shortenServiceIdentifier:(id)arg1;
- (id)_ak_truncateTokenDict:(id)arg1;
- (id)_ak_truncateTokenString:(id)arg1;
- (id)ak_redactedCopy;

// Image: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore

- (id)logSignatureDescription;

// Image: /System/Library/PrivateFrameworks/AvailabilityKit.framework/AvailabilityKit

- (bool)availabilityKit_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)availabilityKit_stringArrayForKey:(id)arg1 allowEmptyString:(bool)arg2;
- (id)availabilityKit_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit

- (id)avt_objectForKey:(id)arg1 ofClass:(Class)arg2 didFail:(bool*)arg3 error:(id*)arg4;
- (id)avt_objectForKey:(id)arg1 ofClasses:(id)arg2 didFail:(bool*)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/AvatarPersistence.framework/AvatarPersistence

+ (id)_avtui_dictionaryByIndexingObjectsInArray:(id)arg1 by:(id /* block */)arg2;

- (id)_avtui_deepCopy;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_boolForKey:(id)arg1;
- (id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_safeArrayForKey:(id)arg1;
- (id)bs_safeDictionaryForKey:(id)arg1;
- (id)bs_safeNumberForKey:(id)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_safeStringForKey:(id)arg1;
- (id)bs_safeURLForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

- (id)reduceWithNext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (id)bds_subDictionaryWithKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility

+ (id)_bu_arrayByRecursivelyRemovingNSNulls:(id)arg1;

- (id)bu_dictionaryByRecursivelyRemovingNSNulls;
- (id)bu_dictionaryByRemovingNSNulls;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (unsigned long long)blt_sizeof;
- (id)idsMetadataFileKey;
- (long long)idsMetadataFileURLType;
- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess

- (id)DAMergeOverrideDictionary:(id)arg1;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation

- (id)_cdm_JSONString;
- (bool)_cdm_hasKey:(id)arg1 withValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture

- (bool)bw_containsBuiltInMicAsAnInput;
- (id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned int)arg1;
- (unsigned int)bw_optimalMicPolarPattern;

// Image: /System/Library/PrivateFrameworks/CMImaging.framework/CMImaging

- (bool)cmi_boolValueForKey:(id)arg1 defaultValue:(bool)arg2 found:(bool*)arg3;
- (bool)cmi_boolValueFromArrayWithKey:(id)arg1 forIndex:(unsigned long long)arg2 defaultValue:(bool)arg3 found:(bool*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cmi_cgRectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 found:(bool*)arg3;
- (double)cmi_doubleValueForKey:(id)arg1 defaultValue:(double)arg2 found:(bool*)arg3;
- (double)cmi_doubleValueFromArrayWithKey:(id)arg1 forIndex:(unsigned long long)arg2 defaultValue:(double)arg3 found:(bool*)arg4;
- (float)cmi_floatValueForKey:(id)arg1 defaultValue:(float)arg2 found:(bool*)arg3;
- (float)cmi_floatValueFromArrayWithKey:(id)arg1 forIndex:(unsigned long long)arg2 defaultValue:(float)arg3 found:(bool*)arg4;
- (int)cmi_intValueForKey:(id)arg1 defaultValue:(int)arg2 found:(bool*)arg3;
- (int)cmi_intValueFromArrayWithKey:(id)arg1 forIndex:(unsigned long long)arg2 defaultValue:(int)arg3 found:(bool*)arg4;
- (void)cmi_simdFloat4ValueForKey:(void *)arg1 defaultValue:(void *)arg2 found:(void *)arg3; // needs 3 arg types, found 2: id, bool*
- (void)cmi_simdInt2ValueForKey:(void *)arg1 defaultValue:(void *)arg2 found:(void *)arg3; // needs 3 arg types, found 2: id, bool*
- (void)cmi_simdInt2ValueForXKey:(void *)arg1 yKey:(void *)arg2 defaultValue:(void *)arg3 found:(void *)arg4; // needs 4 arg types, found 3: id, id, bool*
- (void)cmi_simdInt2ValueFromArraysWithXKey:(void *)arg1 yKey:(void *)arg2 forIndex:(void *)arg3 defaultValue:(void *)arg4 found:(void *)arg5; // needs 5 arg types, found 4: id, id, unsigned long long, bool*
- (void)cmi_simdInt4ValueForKey:(void *)arg1 defaultValue:(void *)arg2 found:(void *)arg3; // needs 3 arg types, found 2: id, bool*
- (void)cmi_simdUInt2ValueForKey:(void *)arg1 defaultValue:(void *)arg2 found:(void *)arg3; // needs 3 arg types, found 2: id, bool*
- (void)cmi_simdUInt2ValueForXKey:(void *)arg1 yKey:(void *)arg2 defaultValue:(void *)arg3 found:(void *)arg4; // needs 4 arg types, found 3: id, id, bool*
- (void)cmi_simdUInt2ValueFromArraysWithXKey:(void *)arg1 yKey:(void *)arg2 forIndex:(void *)arg3 defaultValue:(void *)arg4 found:(void *)arg5; // needs 5 arg types, found 4: id, id, unsigned long long, bool*
- (unsigned int)cmi_unsignedIntValueForKey:(id)arg1 defaultValue:(unsigned int)arg2 found:(bool*)arg3;
- (unsigned int)cmi_unsignedIntValueFromArrayWithKey:(id)arg1 forIndex:(unsigned long long)arg2 defaultValue:(unsigned int)arg3 found:(bool*)arg4;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)CalDictionaryWithEmptyObjectsRemoved;
- (bool)CalHasKeyIn:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)filteredDictionaryPassingTest:(id /* block */)arg1;
- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (id)mutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_compareKey:(id)arg1 withDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit

- (id)carMutableDeepCopy;

// Image: /System/Library/PrivateFrameworks/CarKitNavigation.framework/CarKitNavigation

- (id)firstKey;
- (id)keyAfter:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport

- (id)cps_mutableDictionaryWithValuesForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CarouselPreferenceServices.framework/CarouselPreferenceServices

- (bool)cslprf_boolForKey:(id)arg1 withDefaultValue:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_calculateAddedObjects;
- (id)cat_calculateRemovedObjects;
- (id)cat_errorValue;
- (id)cat_uuidForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_bundleIdentifier;
- (id)__ck_localizedAppName;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_JSONRepresentationWithPrettyPrinting:(bool)arg1 sortKeys:(bool)arg2;
- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)crk_dictionaryByFilteringToKeys:(id)arg1;
- (id)crk_keyValueObservingNewObject;
- (id)crk_keyValueObservingOldObject;
- (id)crk_mapToDictionary:(id /* block */)arg1;
- (id)crk_mapUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices

- (double)maxAge;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (bool)brc_booleanValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKPercentEscapedQueryString;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit

+ (id)instanceFromCMSCoded:(id)arg1;

- (bool)cmsBoolForKey:(id)arg1 withDefault:(bool)arg2;
- (id)cmsCoded;
- (double)cmsDoubleForKey:(id)arg1 withDefault:(double)arg2;
- (long long)cmsIntegerForKey:(id)arg1 withDefault:(long long)arg2;
- (id)cmsOptionalArrayOfClass:(Class)arg1 forKey:(id)arg2;
- (id)cmsOptionalArrayOfDecodedClass:(Class)arg1 forKey:(id)arg2;
- (id)cmsOptionalBoolForKey:(id)arg1;
- (id)cmsOptionalDateForKey:(id)arg1;
- (id)cmsOptionalDecodedClass:(Class)arg1 forKey:(id)arg2;
- (id)cmsOptionalDictionaryForKey:(id)arg1;
- (id)cmsOptionalNumberForKey:(id)arg1;
- (id)cmsOptionalStringForKey:(id)arg1;
- (id)cmsOptionalURLForKey:(id)arg1 relativeToURL:(id)arg2;
- (unsigned long long)cmsUnsignedForKey:(id)arg1 withDefault:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)__ftreg_candidateAliases;
- (bool)__ftreg_isValidSetupDictionary;
- (id)__ftreg_responseAppleID;
- (id)__ftreg_responseAuthToken;
- (bool)__ftreg_responseIsUpgrade;
- (id)__ftreg_responseProfileID;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (id)_cn_diff:(id)arg1;
- (void)_cn_each:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_keysAndValues;
- (id)_cn_map:(id /* block */)arg1;
- (id)_cn_mapKeys:(id /* block */)arg1;
- (id)_cn_mapValues:(id /* block */)arg1;
- (id)_cn_objectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon

+ (id)MCM_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)MCM_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 fsNode:(id*)arg3 error:(id*)arg4;

- (bool)MCM_writeToURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (void)setWf_preferredFileType:(id)arg1;
- (id)wfObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)wfObjectOfClass:(Class)arg1 forKeyPath:(id)arg2;
- (id)wfSerializedRepresentation;
- (id)wf_preferredFileType;

// Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness

- (unsigned long long)getKeyCategory;
- (id)getKeyCategoryRef;
- (unsigned long long)getKeyDisplayID;
- (id)getKeyDisplayIDRef;
- (unsigned long long)getKeyKeyboardID;
- (id)getKeyKeyboardIDRef;
- (id)getKeyPropertyParameter;
- (id)getKeyString;
- (id)initWithPropertyKey:(id)arg1;
- (id)initWithPropertyKey:(id)arg1 andCategory:(unsigned long long)arg2;
- (id)initWithPropertyKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (id)initWithPropertyKey:(id)arg1 display:(unsigned long long)arg2 andParameter:(id)arg3;
- (id)initWithPropertyKey:(id)arg1 keyboardID:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (id)cdp_sanitizedCopy;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (id)CDVMergeOverrideDictionary:(id)arg1;
- (id)CDVObjectForKeyCaseInsensitive:(id)arg1;
- (id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSASAlbumResetSyncAlbumGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (bool)MSASIsErrorRecovery;
- (bool)MSASIsGlobalResetSync;
- (bool)MSASIsLocalChange;
- (bool)MSASIsNotInteresting;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_URLForKey:(id)arg1;
- (id)parsec_UUIDForKey:(id)arg1;
- (id)parsec_arrayForKey:(id)arg1;
- (bool)parsec_boolForKey:(id)arg1;
- (id)parsec_dataForKey:(id)arg1;
- (id)parsec_dateForKey:(id)arg1;
- (id)parsec_dictionaryByMappingKeysUsingBlock:(id /* block */)arg1;
- (id)parsec_dictionaryForKey:(id)arg1;
- (id)parsec_numberForKey:(id)arg1;
- (id)parsec_stringForKey:(id)arg1;
- (id)sf_asActionItem:(id)arg1;
- (id)sf_asAirport;
- (id)sf_asAppLink:(id)arg1;
- (id)sf_asAppLinkCardSection:(id)arg1;
- (id)sf_asButton:(id)arg1;
- (id)sf_asColor:(id)arg1;
- (id)sf_asDescriptionCardSection:(id)arg1;
- (id)sf_asDetailedRowCardSection:(id)arg1;
- (id)sf_asFlight;
- (id)sf_asFlightCardSection:(id)arg1;
- (id)sf_asFormattedText:(id)arg1;
- (id)sf_asImage:(id)arg1;
- (id)sf_asKeyValueDataCardSection:(id)arg1;
- (id)sf_asMediaDetail:(id)arg1;
- (id)sf_asMediaInfoCardSection:(id)arg1;
- (id)sf_asMediaItem:(id)arg1;
- (id)sf_asMediaOffer:(id)arg1;
- (id)sf_asMediaPlayerCardSection:(id)arg1;
- (id)sf_asMetaInfoCardSection:(id)arg1;
- (id)sf_asNowPlayingCardSection:(id)arg1;
- (id)sf_asPunchout;
- (id)sf_asPunchout:(id)arg1;
- (id)sf_asResultEntity;
- (id)sf_asRichText:(id)arg1;
- (id)sf_asRichTitleCardSection:(id)arg1;
- (id)sf_asRowCardSection:(id)arg1;
- (id)sf_asScoreboardCardSection:(id)arg1;
- (id)sf_asSearchResult:(id)arg1 factory:(id)arg2;
- (id)sf_asSocialMediaPostCardSection:(id)arg1;
- (id)sf_asStockChartCardSection:(id)arg1;
- (id)sf_asSuggestion:(id)arg1;
- (id)sf_asSuggestionCardSection:(id)arg1;
- (id)sf_asTableAlignmentSchema;
- (id)sf_asTableRowCardSection:(id)arg1;
- (id)sf_asTextColumnsCardSection:(id)arg1;
- (id)sf_asTitleCardSection:(id)arg1;
- (id)sf_asTopic;
- (id)sf_asTrack:(id)arg1;
- (id)sf_asTrackListCardSection:(id)arg1;
- (id)sf_asWatchListCardSection:(id)arg1;
- (id)sf_asWatchListItem:(id)arg1;
- (id)sf_asWebCardSection:(id)arg1;
- (void)sf_baseCardSection:(id)arg1 reply:(id)arg2;
- (id)sf_imageForKey:(id)arg1 reply:(id)arg2;
- (int)sf_textColorForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CorePrescriptionLite.framework/CorePrescriptionLite

- (bool)crxu_boolForKey:(id)arg1;
- (id)crxu_dataForKey:(id)arg1;
- (id)crxu_dateForKey:(id)arg1;
- (long long)crxu_integerForKey:(id)arg1;
- (id)crxu_stringForKey:(id)arg1;
- (unsigned long long)crxu_uintegerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRepairCore.framework/CoreRepairCore

- (bool)BOOLFromKey:(id)arg1 defaultValue:(bool)arg2 failed:(bool*)arg3;
- (bool)BOOLFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)NSArrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)NSArrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)NSArrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5 validator:(id /* block */)arg6;
- (id)NSArrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)NSArrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)NSArrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4 validator:(id /* block */)arg5;
- (id)NSDataFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)NSDictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)NSDictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)NSDictionaryFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)NSDictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(bool*)arg3;
- (id)NSNumberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)NSNumberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(bool*)arg4;
- (id)NSSetFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)NSStringFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)NSStringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)NSStringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(bool*)arg3;
- (id)NSStringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(bool*)arg3;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)sg_deepCopyWithoutEmptySchemaObjects;
- (bool)sg_isEmptySchemaObject;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML

- (id)arrayAssertedForKey:(id)arg1;
- (id)dictAssertedForKey:(id)arg1;
- (id)numberAssertedForKey:(id)arg1;
- (id)objectAssertedForKey:(id)arg1;
- (id)stringAssertedForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

- (id)ANQPResponse;
- (int)APMode;
- (id)BSSID;
- (int)FILSAccessNetworkType;
- (long long)FILSBeaconInterval;
- (bool)FILSIsAdditionalStepRequiredForAccess;
- (bool)FILSIsESS;
- (bool)FILSIsEmergencyServicesReachable;
- (bool)FILSIsInternetAccessible;
- (bool)FILSIsUnauthenticatedEmergencyServiceAccessible;
- (id)FILSPrimaryChannel;
- (id)FILSPrimaryChannelInfo;
- (id)FILSSSID;
- (unsigned long long)FILSShortSSID;
- (int)FILSSupportedPHYModes;
- (id)HESSID;
- (id)NAIRealmNameList;
- (id)RNRBSSList;
- (id)RNRChannelList;
- (id)RSNAuthSelectors;
- (unsigned long long)RSNBroadcastCipher;
- (int)RSNCapabilities;
- (unsigned long long)RSNMulticastCipher;
- (id)RSNUnicastCiphers;
- (long long)RSSI;
- (id)SSID;
- (long long)WAPISubtype;
- (id)WPAAuthSelectors;
- (unsigned long long)WPAMulticastCipher;
- (id)WPAUnicastCiphers;
- (id)__WAPIPolicy;
- (int)accessNetworkType;
- (unsigned long long)age;
- (long long)airPortBaseStationModel;
- (unsigned long long)associationDisallowedReason;
- (long long)beaconInterval;
- (id)bluetoothMAC;
- (id)cellularNetworkInfo;
- (id)channel;
- (id)channelInfo;
- (id)countryCode;
- (id)deviceID;
- (id)displayName;
- (id)domainNameList;
- (id)friendlyName;
- (bool)hasAppleIE;
- (bool)hasFILSAccessNetworkOptions;
- (bool)hasFILSCaps;
- (bool)hasFILSDiscoveryInformation;
- (bool)hasInterworkingIE;
- (bool)hasMBOOCEIE;
- (bool)hasRSNIE;
- (bool)hasWPAIE;
- (id)informationElementData;
- (bool)isAdditionalStepRequiredForAccess;
- (bool)isAppleSWAP;
- (bool)isEmergencyServicesReachable;
- (bool)isFILSDiscoveryFrame;
- (bool)isInternetAccessible;
- (bool)isPasspoint;
- (bool)isPersonalHotspot;
- (bool)isUnauthenticatedEmergencyServiceAccessible;
- (bool)isUnconfiguredAirPortBaseStation;
- (bool)isUnconfiguredDevice;
- (id)manufacturerName;
- (id)modelName;
- (id)networkFlags;
- (long long)noise;
- (id)operatorFriendlyNameList;
- (id)primaryMAC;
- (bool)providesInternetAccess;
- (id)roamingConsortiumList;
- (unsigned long long)shortSSID;
- (int)supportedPHYModes;
- (unsigned long long)supportedSecurityTypes;
- (bool)supports2GHzNetworks;
- (bool)supports5GHzNetworks;
- (bool)supportsAirPlay;
- (bool)supportsAirPlay2;
- (bool)supportsAirPrint;
- (bool)supportsCarPlay;
- (bool)supportsHomeKit;
- (bool)supportsHomeKit2;
- (bool)supportsMFi;
- (bool)supportsMFiHardwareAuth;
- (bool)supportsSecureWAC;
- (bool)supportsSoftwareCertAuth;
- (bool)supportsSoftwareTokenAuth;
- (bool)supportsWPS;
- (bool)supportsWoW;
- (bool)supportsiAPOverWiFi;
- (long long)venueGroup;
- (long long)venueType;

// Image: /System/Library/PrivateFrameworks/DMCUtilities.framework/DMCUtilities

+ (id)DMCDictionaryFromFile:(id)arg1;
+ (id)DMCShortenedArray:(id)arg1;
+ (id)DMCShortenedData:(id)arg1;
+ (id)DMCShortenedDictionary:(id)arg1;
+ (id)DMCShortenedObject:(id)arg1;

- (id)DMCShortenedPlistDescription;
- (bool)DMCWriteToBinaryFile:(id)arg1;
- (id)dmc_valueOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)dictionaryWithTimeRange:(struct XRTimeRange { unsigned long long x1; unsigned long long x2; })arg1;

- (struct XRTimeRange { unsigned long long x1; unsigned long long x2; })timeRangeValue;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAMergeOverrideDictionary:(id)arg1;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices

- (id)dds_dateForKey:(id)arg1;
- (id)dds_numberForKey:(id)arg1;
- (id)dds_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration

+ (id)dm_migrationRebootCountPrefWithRebootCount:(unsigned long long)arg1 buildVersion:(id)arg2;
+ (id)dm_migrationRebootCountPref_buildVersionKey;
+ (id)dm_migrationRebootCountPref_rebootCountKey;
+ (id)dmlmr_buildVersionKey;
+ (id)dmlmr_lastMigrationResultsWithSuccess:(bool)arg1 buildVersion:(id)arg2;
+ (id)dmlmr_successKey;

- (id)dm_migrationRebootCountPref_buildVersion;
- (unsigned long long)dm_migrationRebootCountPref_rebootCount;
- (id)dmlmr_buildVersion;
- (id)dmlmr_success;

// Image: /System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

+ (id)dictionaryWithJSONData:(id)arg1 error:(id*)arg2;

- (id)generateJSONDataWithError:(id*)arg1;
- (id)generateJSONStringWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit

- (id)alwaysGetArrayForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetDictionaryForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2 default:(id)arg3;
- (id)alwaysGetNumberForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetStringForKey:(id)arg1 default:(id)arg2;
- (id)dk_arrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5 validator:(id /* block */)arg6;
- (id)dk_arrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4 validator:(id /* block */)arg5;
- (bool)dk_boolFromKey:(id)arg1 defaultValue:(bool)arg2 failed:(bool*)arg3;
- (bool)dk_boolFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)dk_dataFromKey:(id)arg1 minLength:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_dataFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(bool*)arg3;
- (id)dk_dictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)dk_dictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(bool*)arg3;
- (id)dk_numberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_numberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromKey:(id)arg1 maxLength:(unsigned long long)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(bool*)arg3;
- (id)dk_stringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(bool*)arg3;
- (id)getArrayForKey:(id)arg1;
- (bool)getBoolForKey:(id)arg1;
- (id)getDictionaryForKey:(id)arg1;
- (id)getKey:(id)arg1 ofType:(Class)arg2;
- (id)getNumberForKey:(id)arg1;
- (id)getStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

- (void)diffAgainstObject:(id)arg1 usingDiffBuilder:(id)arg2 withDescription:(id)arg3;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (bool)ef_all:(id /* block */)arg1;
- (bool)ef_any:(id /* block */)arg1;
- (id)ef_filter:(id /* block */)arg1;
- (id)ef_mapValues:(id /* block */)arg1;
- (id)ef_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

- (id)objectForInt:(int)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)dictionaryWithContentsOfData:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)fm_dictionaryWithContentsOfData:(id)arg1;
+ (id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (id)dictionaryWithLowercaseKeys;
- (id)fm_dictionaryByMappingValues:(id /* block */)arg1;
- (id)fm_dictionaryWithLowercaseKeys;
- (id)fm_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredDictionaryForAPS;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (id)transformValueToArray;

// Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice

- (id)fm_dictionaryByDeeplySettingValuesForKeysWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;

- (id)_gkDescriptionWithChildren:(long long)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long*)arg3;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkValuesForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (id)gc_dictionaryByRemovingObjectsForKeys:(id)arg1;
- (void)gc_enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)gc_makeValuesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)gc_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)gc_objectForKey:(id)arg1 ofClass:(Class)arg2 error:(out id*)arg3;
- (id)gc_requiredObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)gc_requiredObjectForKey:(id)arg1 ofClass:(Class)arg2 error:(out id*)arg3;

// Image: /System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings

+ (id)_gcs_jsonObjectForSerializableDictionary:(id)arg1;
+ (id)_gcs_serializableDictionaryForDictionaryJsonObject:(id)arg1;
+ (id)_gcs_serializableDictionaryForJsonObject:(id)arg1 withValuesOfClass:(Class)arg2;

- (id)_gcs_arrayForJSONKey:(id)arg1;
- (id)_gcs_dateForJSONKey:(id)arg1;
- (id)_gcs_dictionaryForJSONKey:(id)arg1;
- (id)_gcs_gscElementForJSONKey:(id)arg1;
- (id)_gcs_gscProfileForJSONKey:(id)arg1;
- (id)_gcs_numberForJSONKey:(id)arg1;
- (id)_gcs_stringForJSONKey:(id)arg1;
- (id)_gcs_uuidForJSONKey:(id)arg1;
- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2;

- (id)_geo_errorForKey:(id)arg1;
- (id)_geo_newXPCObject;
- (id)_placeOrCurrentLocation:(bool*)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)arrayForKey:(id)arg1;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;
- (id)base64EncodedDataForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)hmf_URLForKey:(id)arg1;
- (id)hmf_UUIDForKey:(id)arg1;
- (id)hmf_arrayForKey:(id)arg1;
- (id)hmf_arrayForKey:(id)arg1 ofClasses:(id)arg2;
- (id)hmf_base64EncodedDataForKey:(id)arg1;
- (bool)hmf_boolForKey:(id)arg1;
- (bool)hmf_boolForKey:(id)arg1 error:(id*)arg2;
- (bool)hmf_boolForKey:(id)arg1 isPresent:(bool*)arg2;
- (id)hmf_calendarForKey:(id)arg1;
- (id)hmf_dataForKey:(id)arg1;
- (id)hmf_dateComponentsForKey:(id)arg1;
- (id)hmf_dateForKey:(id)arg1;
- (id)hmf_dictionaryForKey:(id)arg1;
- (id)hmf_errorForKey:(id)arg1;
- (id)hmf_fileHandleForKey:(id)arg1;
- (id)hmf_flowForKey:(id)arg1;
- (long long)hmf_integerForKey:(id)arg1 error:(id*)arg2;
- (id)hmf_mutableArrayForKey:(id)arg1;
- (id)hmf_mutableDictionaryForKey:(id)arg1;
- (id)hmf_mutableSetForKey:(id)arg1;
- (id)hmf_nullForKey:(id)arg1;
- (id)hmf_numberForKey:(id)arg1;
- (id)hmf_setForKey:(id)arg1;
- (id)hmf_stringForKey:(id)arg1;
- (id)hmf_timeZoneForKey:(id)arg1;
- (id)hmf_unarchivedObjectForKey:(id)arg1 ofClasses:(id)arg2;
- (id)hmf_valueForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)nsValueForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateFromDataForKey:(id)arg1;
- (id)privateDescription;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(bool)arg2 blacklistedKeys:(id)arg3;
- (id)setForKey:(id)arg1;
- (id)shortDescription;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_dictionaryOrNilWithCodableMetadata:(id)arg1;
+ (id)hk_dictionaryWithCodableMetadata:(id)arg1;

- (bool)hd_validateMetadataKeysAndValuesWithClient:(id)arg1 error:(id*)arg2;
- (id)hk_codableMetadata;

// Image: /System/Library/PrivateFrameworks/HealthDaemonFoundation.framework/HealthDaemonFoundation

+ (id)hd_dictionaryFromXPCObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)dictionaryWithCodableMetadata:(id)arg1;

- (id)codableMetadata;

// Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities

- (void)enumerateKeysAndObjectsInDependentOrderUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (unsigned long long)computeHashFromContents;
- (id)hf_prettyDescription;
- (id)hf_prettyExpensiveDescription;
- (id)hf_prettyFullDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDictionaryFromOPACKData:(id)arg1 error:(id*)arg2;

- (id)hmbDescription;
- (id)hmbOPACKDataFromDictionaryWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)dictionaryByCombiningNonOverlappingDictionaries:(id)arg1;
+ (id)hmd_dictionaryWithActionExecutionError:(id)arg1;

- (id)firstKeyWithValue:(id)arg1;
- (bool)hmd_isValidResponseForWriteRequest:(id)arg1 naturalLightingEnabled:(bool)arg2 error:(id*)arg3;
- (id)hmd_responseByRemovingEntriesForCharacteristics:(id)arg1;
- (id)hmd_valueOfCharacteristic:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)dictionaryByCombiningNonOverlappingDictionaries:(id)arg1;
+ (id)hmd_dictionaryWithActionExecutionError:(id)arg1;

- (id)firstKeyWithValue:(id)arg1;
- (bool)hmd_isValidResponseForWriteRequest:(id)arg1 naturalLightingEnabled:(bool)arg2 error:(id*)arg3;
- (id)hmd_responseByRemovingEntriesForCharacteristics:(id)arg1;
- (id)hmd_valueOfCharacteristic:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (id)CHIPAttributeID;
- (id)CHIPClusterID;
- (id)CHIPCommandFields;
- (id)CHIPCommandID;
- (id)CHIPData;
- (id)CHIPEndpointID;
- (id)CHIPMaxInterval;
- (id)CHIPMinInterval;
- (id)CHIPReadParams;
- (id)CHIPRemoteCommand;
- (id)CHIPRemoteResults;
- (id)CHIPSubscribeParams;
- (id)CHIPTimedInvokeTimeout;
- (id)CHIPTimedWriteTimeout;

// Image: /System/Library/PrivateFrameworks/HomePodSettings.framework/HomePodSettings

- (id)hps_dictionarySwappingKeysWithValues;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_objectForViewSizeSubclass:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;

- (id)__imDeepCopy;
- (id)__imDictionaryByFilteringWithBlock:(id /* block */)arg1;
- (bool)__imIsMutable;
- (id)_arrayForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)dictionaryFromChanges:(id)arg1;
- (unsigned short)fileHFSFlags;
- (unsigned long long)fileHFSResourceForkSize;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)plistData;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;

- (id)__im_associatedMessageContentType;
- (id)__im_associatedMessagePluginBundleID;
- (id)__im_associatedMessagePluginDisplayName;
- (id)__im_associatedMessageSummary;
- (id)__im_copyChatDictionaryWithRedactedMessageContent;
- (id)__immphc_attributedStringForKey:(id)arg1;
- (id)__immphc_dateForKey:(id)arg1;
- (id)allValuesSortedByGUIDKeyWithBackupOrder:(id)arg1;
- (bool)boolValueForKey:(id)arg1 withDefault:(bool)arg2;
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;
- (bool)isArchivable_im;
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/IconFoundation.framework/IconFoundation

- (id)_IF_arrayForKey:(id)arg1;
- (id)_IF_arrayForKeys:(id)arg1;
- (bool)_IF_boolForKey:(id)arg1;
- (bool)_IF_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (bool)_IF_boolForKeys:(id)arg1;
- (bool)_IF_boolForKeys:(id)arg1 defaultValue:(bool)arg2;
- (id)_IF_dataForKey:(id)arg1;
- (id)_IF_dictionaryAddingEntriesFromDictionary:(id)arg1;
- (id)_IF_dictionaryForKey:(id)arg1;
- (id)_IF_dictionaryForKeys:(id)arg1;
- (id)_IF_numberForKey:(id)arg1;
- (id)_IF_numberForKeys:(id)arg1;
- (id)_IF_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_IF_objectOfClass:(Class)arg1 forKeys:(id)arg2;
- (id)_IF_stringForKey:(id)arg1;
- (id)_IF_stringForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (id)_IS_resourceNamed:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore

- (bool)isSubsetOfDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary

+ (id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

- (bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (bool)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

+ (id)if_dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 uniquingKeysWith:(id /* block */)arg4;
+ (id)if_dictionaryWithObjects:(id)arg1 forKeys:(id)arg2 uniquingKeysWith:(id /* block */)arg3;

- (id)if_JSONStringRepresentation;
- (id)if_compactMap:(id /* block */)arg1;
- (id)if_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)if_dictionaryWithNonEmptyValues;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)invertedDictionary;

// Image: /System/Library/PrivateFrameworks/KoaMapper.framework/KoaMapper

- (id)_collectionValueForKey:(id)arg1 collectonType:(Class)arg2 expectedObjectsType:(Class)arg3 keyRequired:(bool)arg4 error:(id*)arg5;
- (id)arrayValueForKey:(id)arg1 expectedObjectsType:(Class)arg2 keyRequired:(bool)arg3 error:(id*)arg4;
- (id)setValueForKey:(id)arg1 expectedObjectsType:(Class)arg2 keyRequired:(bool)arg3 error:(id*)arg4;
- (id)stringValueForKey:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

- (id)ln_deduping:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MLRuntime.framework/MLRuntime

- (id)_numberValueForKey:(id)arg1;
- (bool)mlr_boolValueForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)mlr_dictionaryValueForKey:(id)arg1;
- (double)mlr_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
- (float)mlr_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
- (long long)mlr_integerValueForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)mlr_stringValueForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)mlr_unsignedIntegerValueForKey:(id)arg1 defaultValue:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCDictionaryFromFile:(id)arg1;
+ (id)MCShortenedArray:(id)arg1;
+ (id)MCShortenedData:(id)arg1;
+ (id)MCShortenedDictionary:(id)arg1;
+ (id)MCShortenedObject:(id)arg1;

- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCDictionaryAdditiveDeltaToCreateDictionary:(id)arg1;
- (id)MCDictionarySubtractiveDeltaToCreateDictionary:(id)arg1;
- (id)MCDictionaryWithLeafValuesSetToValue:(id)arg1;
- (id)MCInsertedKeysFromDictionary:(id)arg1 withNewLeafValue:(id)arg2;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCRemovedKeysFromDictionary:(id)arg1;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (id)MCShortenedPlistDescription;
- (bool)MCValidateBoolRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;
- (bool)MCValidateIntersectionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;
- (bool)MCValidateRestrictions;
- (bool)MCValidateUnionRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;
- (bool)MCValidateValueRestriction:(id)arg1 inRestrictions:(id)arg2 defaultRestrictions:(id)arg3;
- (bool)MCWriteToBinaryFile:(id)arg1;
- (bool)MCWriteToBinaryFile:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions

- (id)MSg_copyIf:(id /* block */)arg1;
- (id)MSg_mutableCopyIf:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/Marrs.framework/Marrs

- (id)initWithJSON:(id)arg1;
- (void)toJsonInDocumentDirectoryWith:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

+ (id)vcp_exifFromImageURL:(id)arg1;

- (id)vcp_actionsAggregated;
- (id)vcp_captureDeviceMake;
- (id)vcp_captureDeviceModel;
- (id)vcp_dateAnalyzed;
- (id)vcp_dateModified;
- (bool)vcp_degraded;
- (id)vcp_fingerprint;
- (unsigned long long)vcp_flags;
- (bool)vcp_flashFired;
- (bool)vcp_isAppleCapture;
- (double)vcp_quality;
- (id)vcp_queryActionResultForPHFace:(id)arg1;
- (id)vcp_results;
- (float)vcp_scaledExposureTime;
- (unsigned long long)vcp_statsFlags;
- (bool)vcp_streamedVideo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_syncPoint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_time;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })vcp_timerange;
- (unsigned long long)vcp_types;
- (int)vcp_version;

// Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience

- (bool)matchesUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

- (id)rq_arrayOfDecodedClass:(Class)arg1 forKey:(id)arg2;
- (id)rq_coded;
- (id)rq_decodedObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)rq_numberForKey:(id)arg1;
- (id)rq_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)allCommandInfos;
- (void*)commandInfoForCommand:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)MR_isEqualToNowPlayingInfo:(id)arg1;
- (id)mr_formattedDebugDescription;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)msv_dictionaryWithContentsOfBase64EncodedJSONString:(id)arg1 error:(id*)arg2;
+ (id)msv_dictionaryWithContentsOfJSON:(id)arg1 error:(id*)arg2;

- (id)msv_compactDescription;
- (id)msv_compactMap:(id /* block */)arg1;
- (id)msv_compactMapKeysAndValues:(id /* block */)arg1;
- (id)msv_compactMapValues:(id /* block */)arg1;
- (void)msv_enumerateKeysAndObjectsOrderedByKeyComparator:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (void)msv_enumerateKeysAndObjectsOrderedByKeyDescriptors:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)msv_enumerateKeysAndObjectsOrderedByKeySelector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (id)msv_filter:(id /* block */)arg1;
- (id)msv_firstWhere:(id /* block */)arg1;
- (id)msv_flatMap:(id /* block */)arg1;
- (id)msv_map:(id /* block */)arg1;
- (id)msv_mapKeysAndValues:(id /* block */)arg1;
- (id)msv_mapValues:(id /* block */)arg1;
- (bool)msv_reduceIntoBool:(bool)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoCGFloat:(double)arg1 by:(id /* block */)arg2;
- (double)msv_reduceIntoDouble:(double)arg1 by:(id /* block */)arg2;
- (float)msv_reduceIntoFloat:(float)arg1 by:(id /* block */)arg2;
- (int)msv_reduceIntoInt32:(int)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt64:(long long)arg1 by:(id /* block */)arg2;
- (long long)msv_reduceIntoInt:(long long)arg1 by:(id /* block */)arg2;
- (id)msv_reduceIntoObject:(id)arg1 by:(id /* block */)arg2;
- (unsigned int)msv_reduceIntoUInt32:(unsigned int)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt64:(unsigned long long)arg1 by:(id /* block */)arg2;
- (unsigned long long)msv_reduceIntoUInt:(unsigned long long)arg1 by:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_boolForKey:(id)arg1;
- (int)mf_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy

- (bool)mf_boolForKey:(id)arg1;
- (int)mf_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

- (id)mt_deepCopy;
- (id)mt_dictionarybyReplacingKey:(id)arg1 value:(id)arg2;
- (id)mt_removingKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MigrationKit.framework/MigrationKit

- (id)mk_arrayForKey:(id)arg1;
- (id)mk_dictionaryForKey:(id)arg1;
- (id)mk_numberForKey:(id)arg1;
- (id)mk_objectForKey:(id)arg1 class:(Class)arg2;
- (id)mk_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation

- (id)objectForCaseInsensitiveKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation

+ (id)MI_dictionaryWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

- (bool)MI_writeAtomicallyToURLMatchingCurrentFileMetadata:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3;
- (bool)MI_writeToURL:(id)arg1 format:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit

+ (id)dictionaryFromJsonData:(id)arg1;
+ (id)dictionaryFromXPCDictionary:(id)arg1 withDataFromKey:(const char *)arg2;
+ (id)dictionaryWithXPCDictionary:(id)arg1;

- (id)convertToNSData;
- (id)createXPCDictionary;
- (id)initWithXPCDictionary:(id)arg1;
- (id)objectForKey:(id)arg1 ofType:(Class)arg2;
- (bool)saveAsDataInXPCDictionary:(id)arg1 forKey:(const char *)arg2;

// Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI

+ (id)su_dictionaryWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal

- (id)exMRL_arrayForKey:(id)arg1;
- (bool)exMRL_boolForKey:(id)arg1;
- (bool)exMRL_boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (id)exMRL_dataForKey:(id)arg1;
- (id)exMRL_dictionaryForKey:(id)arg1;
- (id)exMRL_numberForKey:(id)arg1;
- (id)exMRL_setForKey:(id)arg1;
- (id)exMRL_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings

+ (id)dictionaryWithComplication:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (id)npkRelevancyTupleWithUniqueID:(id)arg1 relevantText:(id)arg2;

- (id)npkRelevancyRelevantText;
- (id)npkRelevancyUniqueID;
- (id)npk_objectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_serverStringDictionaryForDistance:(double)arg1 validDistance:(double)arg2 destination:(id)arg3 spoken:(bool)arg4 useDisplayName:(bool)arg5;
+ (id)_navigation_serverStringDictionaryForDistance:(double)arg1 validDistance:(double)arg2 waypoints:(id)arg3 currentDestination:(id)arg4 legIndex:(unsigned long long)arg5 spoken:(bool)arg6 useDisplayName:(bool)arg7;
+ (id)_navigation_serverStringDictionaryForMapItem:(id)arg1;
+ (id)_navigation_stringTokensForDirectionsError:(id)arg1 waypoints:(id)arg2;
+ (id)_navigation_stringTokensForGenericCombinationsToken:(id)arg1 waypoints:(id)arg2 isSpokenString:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/NearField.framework/NearField

+ (id)getDictionaryKeyTransportLabel;

- (id)encodeToCBOR;
- (id)transportLabel;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (bool)na_allSatisfy:(id /* block */)arg1;
- (bool)na_any:(id /* block */)arg1;
- (id)na_dictionaryByMappingValues:(id /* block */)arg1;
- (void)na_each:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_firstKeyPassingTest:(id /* block */)arg1;
- (id)na_flatMap:(id /* block */)arg1;
- (id)na_map:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_dictionary:(id /* block */)arg1;
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(id /* block */)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryFromJSON:(id)arg1 error:(id*)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 allowingNil:(bool)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(id /* block */)arg2;

- (id)fc_actionTypes;
- (id)fc_arrayByTransformingWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_deepCopy;
- (id)fc_dictionaryByMergingDictionary:(id)arg1 withValueCombiner:(id /* block */)arg2;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_dictionaryByTransformingKeysWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonString;
- (id)fc_jsonStringWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonStringWithOmittedUnsupportedDataTypes;
- (bool)fc_localDataHint;
- (id)fc_safeObjectForKey:(id)arg1;
- (id)fc_sortedEntriesWithKeyBlock:(id /* block */)arg1;
- (id)fc_subdictionaryForKeys:(id)arg1;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_transactions;
- (id)fr_descriptionWithKeyComparator:(id /* block */)arg1;
- (id)nf_mutableObjectsForKeysWithoutMarker:(id)arg1;
- (id)nf_objectsForKeysWithoutMarker:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)sync_NewsURLString;
- (id)sync_colorHexString;
- (id)sync_excerpt;
- (id)sync_expirationDate;
- (unsigned long long)sync_headlineCount;
- (id)sync_headlines;
- (id)sync_identifier;
- (id)sync_name;
- (id)sync_publisherIdentifier;
- (id)sync_publisherLogoImageData;
- (id)sync_publisherName;
- (id)sync_sections;
- (id)sync_thumbnailImageData;
- (id)sync_title;
- (unsigned long long)sync_type;
- (id)sync_webURLString;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)decomposedHighlightInfo:(id)arg1;
+ (bool)highlightInfoContainsPrefixMatch:(id)arg1;
+ (id)highlightInfoForSearchStringWithPrefixMatchInAllFields:(id)arg1 language:(id)arg2;
+ (id)mergeFieldElement:(id)arg1 withElement:(id)arg2;
+ (id)mergeHighlightInfo:(id)arg1 withHighlighInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (id)ic_md5;
- (id)ic_objectForNonNilKey:(id)arg1;
- (id)ic_prettyDescriptionWithTabLevel:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_allKeysAsSet;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PaperKit.framework/PaperKit

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)PKArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKArrayForKey:(id)arg1;
- (bool)PKBoolForKey:(id)arg1;
- (id)PKColorForKey:(id)arg1;
- (id)PKCurrencyAmountForKey:(id)arg1;
- (id)PKDataForKey:(id)arg1;
- (id)PKDateComponentsForKey:(id)arg1;
- (id)PKDateForKey:(id)arg1;
- (id)PKDecimalNumberForKey:(id)arg1;
- (id)PKDecimalNumberFromStringForKey:(id)arg1;
- (id)PKDictionaryForKey:(id)arg1;
- (id)PKDictionaryOfKeyClass:(Class)arg1 valueClass:(Class)arg2 ForKey:(id)arg3;
- (double)PKDoubleForKey:(id)arg1;
- (long long)PKIntegerForKey:(id)arg1;
- (id)PKNumberForKey:(id)arg1;
- (id)PKSetContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKSetForKey:(id)arg1;
- (id)PKStringForKey:(id)arg1;
- (id)PKURLForKey:(id)arg1;
- (id)PKUUIDForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)px_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)px_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)dictionaryChanging:(id)arg1 to:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (id)im_jsonSerializableValue;
- (id)mt_compactMap:(id /* block */)arg1;
- (id)mt_invertedDictionary;
- (id)mt_subdictionaryWithKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (void)cancelRequests:(id)arg1 reason:(id)arg2;
- (void)fetchPosterSnapshotForRequest:(id)arg1 definition:(id)arg2 completion:(id /* block */)arg3;
- (id)posterSnapshotForRequest:(id)arg1 definition:(id)arg2 error:(out id*)arg3;
- (void)prewarmSnapshotsForRequests:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeSnapshotCacheForType:(long long)arg1;
- (void)purgeSnapshotsForRequest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (long long)_compareBundleDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo

+ (id)dictionaryWithPVTransformAnimationInfo:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })arg1;
+ (id)objectForKey:(id)arg1 inDictionary:(id)arg2 orInDefaultDictionary:(id)arg3;

- (struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; })PVTransformAnimationInfo;
- (id)arrayOfTimedStabilizationConfigsWithCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fillMode:(int)arg2;
- (id)timedStabilizationConfigWithCleanAperture:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fillMode:(int)arg3;

// Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker

- (id)pet_arrayForKey:(id)arg1;
- (id)pet_dictForKey:(id)arg1;
- (id)pet_numForKey:(id)arg1;
- (id)pet_objectForKey:(id)arg1 class:(Class)arg2;
- (id)pet_strForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

- (id)mlDictionaryForJSON;
- (id)mlJSONString;
- (id)mlJSONStringWithPrettyPrint:(bool)arg1;
- (id)objectForKey:(id)arg1 ofKindOfClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (bool)remdes_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)remdes_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (unsigned long long)remdes_nsuintegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_dictionaryFromData:(id)arg1 error:(id*)arg2;
+ (id)rc_dictionaryFromJSON:(id)arg1;
+ (id)rc_dictionaryFromJSON:(id)arg1 error:(id*)arg2;

- (id)rc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
- (id)rc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (id)rc_subdictionaryForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement

- (bool)rm_atomicWriteToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

- (id)entriesToStringWithIndent:(int)arg1 debug:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedDictionaryWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_dictionaryWithJSONData:(id)arg1 options:(unsigned long long)arg2;
+ (id)safari_dictionaryWithJSONOrPropertyListData:(id)arg1;
+ (id)safari_dictionaryWithObjectsInFastEnumerationCollection:(id)arg1 groupedUsingBlock:(id /* block */)arg2;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;

- (id)_safari_sortedTupleArray;
- (id)safari_URLForKey:(id)arg1;
- (id)safari_UUIDForKey:(id)arg1;
- (id)safari_arrayContainingObjectsOfClass:(Class)arg1 forKey:(id)arg2;
- (id)safari_arrayForKey:(id)arg1;
- (bool)safari_boolForKey:(id)arg1;
- (bool)safari_containsObject:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_dictionaryByMergingWithDictionary:(id)arg1;
- (id)safari_dictionaryByRemovingNullObjects;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_dictionaryWithLowercaseKeys;
- (id)safari_diffWithDictionary:(id)arg1;
- (id)safari_jsonRepresentation;
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_mapAndFilterKeysUsingBlock:(id /* block */)arg1;
- (id)safari_mapTableForKey:(id)arg1;
- (id)safari_mutableArrayForKey:(id)arg1;
- (id)safari_mutableDeepCopy;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_setForKey:(id)arg1;
- (id)safari_setValuesFromDictionary:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(bool)arg2;
- (id)safari_userActivityForKey:(id)arg1;
- (id)safari_valueOfEntryPassingTest:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (id)ssb_arrayForKey:(id)arg1;
- (id)ssb_dictionaryForKey:(id)arg1;
- (id)ssb_numberForKey:(id)arg1;
- (id)ssb_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant

- (id)bySeedProgramManager_valueForAssetAudienceKey;
- (id)bySeedProgramManager_valueForProgramIDKey;
- (id)bySeedProgramManager_valueForProgramKey;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

- (id)hksp_computeDiffFromDictionary:(id)arg1;
- (id)hksp_computeDiffFromDictionary:(id)arg1 keysToDiff:(id)arg2;
- (id)hksp_dictionaryByFilteringKeys:(id)arg1;
- (unsigned long long)hksp_hash;
- (bool)hksp_isSerialized;
- (id)hksp_serializedClassName;
- (id)hksp_serializedKey;
- (id)hksp_serializedProperties;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)postFormData;
- (id)stringifyArguments:(id)arg1 requireEncoding:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SoftPosReader.framework/SoftPosReader

- (bool)boolForKey:(id)arg1 valid:(bool*)arg2;
- (struct { unsigned int x1 : 8; unsigned int x2 : 4; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 18; unsigned short x6[8]; })decimalForKey:(id)arg1 valid:(bool*)arg2;
- (double)doubleForKey:(id)arg1 valid:(bool*)arg2;
- (long long)integerForKey:(id)arg1 valid:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport

+ (id)_safeKeyName:(id)arg1 paddedToLength:(unsigned long long)arg2;
+ (id)_safeValueName:(id)arg1 ofMaxFieldLength:(unsigned long long)arg2 providingSubstitutionMap:(id)arg3;
+ (id)safeSummaryForDictionary:(id)arg1;

- (void)_logReturningDefault:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 defaultValueName:(id)arg4;
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3;
- (void)_logReturningNil:(id)arg1 forKey:(id)arg2 valueType:(id)arg3 fromBase:(id)arg4 withKeyDescription:(id)arg5;
- (id)_safeDescriptionWithName:(id)arg1 atNestedLevel:(unsigned long long)arg2 maxNestedLevel:(unsigned long long)arg3 showingSubLevelName:(bool)arg4 withMaxValueLength:(unsigned long long)arg5 providingSubstitutionMap:(id)arg6;
- (bool)safeBooleanForKey:(id)arg1;
- (bool)safeBooleanForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)safeDataForKey:(id)arg1;
- (id)safeDateForKey:(id)arg1;
- (id)safeDescriptionWithName:(id)arg1;
- (id)safeDescriptionWithName:(id)arg1 maxNestedLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;
- (id)safeDictionaryForKey:(id)arg1;
- (id)safeDictionaryForKey:(id)arg1 fromBase:(id)arg2 withKeyDescription:(id)arg3;
- (long long)safeIntegerForKey:(id)arg1;
- (long long)safeIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)safeLLForKey:(id)arg1;
- (long long)safeLLForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)safeStringForKey:(id)arg1;
- (id)safeSubDescriptionAtNestedLevel:(unsigned long long)arg1 instanceAtLevel:(unsigned long long)arg2 withMaxValueLength:(unsigned long long)arg3 providingSubstitutionMap:(id)arg4;
- (id)safeSummary;
- (long long)safeTriStateForKey:(id)arg1;
- (long long)safeTriStateForKey:(id)arg1 defaultValue:(long long)arg2;
- (unsigned long long)safeULLForKey:(id)arg1;
- (unsigned long long)safeULLForKey:(id)arg1 defaultValue:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (id)prs_arrayWithClass:(Class)arg1 forKey:(id)arg2;
- (bool)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (long long)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_objectWithClass:(Class)arg1 forKey:(id)arg2;
- (id)prs_objectWithClassArray:(Class)arg1 forKey:(id)arg2;
- (id)prs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)dictionaryDescription;
- (id)sb_switcherModifierDebugTimelineDescription;

// Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore

- (id)ska_dataFrombase64EncodedStringForKey:(id)arg1;
- (id)ska_dateFromUnixTimestampForKey:(id)arg1;
- (id)ska_dictionaryForKey:(id)arg1;
- (id)ska_numberForKey:(id)arg1;
- (id)ska_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)sck_objectsForKeys:(id)arg1;
- (id)yql_objectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore

- (id)scw_objectsForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)sk_dictionaryWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)appendJsonStringToString:(id)arg1;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_arrayForKey:(id)arg1;
- (bool)tv_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)tv_dictionaryForKey:(id)arg1;
- (id)tv_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)tv_numberForKey:(id)arg1;
- (id)tv_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)tvp_URLForKey:(id)arg1;
- (long long)tvp_appleTimingAppHeaderValue;
- (id)tvp_arrayForKey:(id)arg1;
- (bool)tvp_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)tvp_dataForKey:(id)arg1;
- (id)tvp_dateForKey:(id)arg1;
- (id)tvp_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (id)tvp_dictionaryForKey:(id)arg1;
- (id)tvp_numberForKey:(id)arg1;
- (id)tvp_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore

- (id)tk_jsonRepresentation;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)asQueryParameterString;

// Image: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore

- (id)TPSSafeArrayForKey:(id)arg1;
- (bool)TPSSafeBoolForKey:(id)arg1;
- (id)TPSSafeDictionaryForKey:(id)arg1;
- (double)TPSSafeDoubleForKey:(id)arg1;
- (float)TPSSafeFloatForKey:(id)arg1;
- (int)TPSSafeIntForKey:(id)arg1;
- (long long)TPSSafeIntegerForKey:(id)arg1;
- (id)TPSSafeNumberForKey:(id)arg1;
- (id)TPSSafeObjectForKey:(id)arg1;
- (id)TPSSafeStringForKey:(id)arg1;
- (unsigned long long)TPSSafeUIntegerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (id)tmlValueForKeyPath:(id)arg1;
- (id)tmlValueForKeyPath:(id)arg1 inDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

+ (void)triKeys:(id*)arg1 values:(id*)arg2 fromDictionary:(id)arg3;

- (id)getContextValueWithName:(id)arg1;
- (id)triArrayValueForField:(id)arg1 isNestedValue:(bool)arg2;
- (id)triDataForField:(id)arg1;
- (id)triDataValueFromBase64StringForField:(id)arg1;
- (id)triDateForField:(id)arg1;
- (id)triItemsInDagWithSink:(id)arg1;
- (id)triItemsInDagWithSource:(id)arg1;
- (void)triKeys:(id*)arg1 values:(id*)arg2;
- (id)triNumberValueForField:(id)arg1 isNestedValue:(bool)arg2;
- (id)triObjectForExpectedKey:(id)arg1;
- (id)triReversedDag;
- (id)triStringValueForField:(id)arg1 isNestedValue:(bool)arg2;
- (id)triTransformValuesWithBlock:(id /* block */)arg1;
- (id)triValueFromNestedField:(id)arg1;
- (id)tri_contextValueWithName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3 treeLogger:(id)arg4;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_boolForKey:(id)arg1;
- (id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
- (bool)_ui_dictionaryContainsUIStringDrawingKeys;
- (int)_web_messageLineNumber;
- (id)_web_messageSourceURL;
- (id)_web_messageText;
- (int)_web_messageType;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (id)uns_nonEmptyCopy;
- (id)uns_nonNilArrayForKey:(id)arg1;
- (id)uns_nonNilDictionaryForKey:(id)arg1;
- (id)uns_nonNilSetForKey:(id)arg1;
- (id)uns_notificationIdentifier;
- (id)uns_safeCastNonNilStringForKey:(id)arg1;
- (id)uns_safeCastObjectForKey:(id)arg1 class:(Class)arg2;
- (id)uns_safeCastObjectForKey:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

- (long long)vui_appleTimingAppHeaderValue;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)_vui_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)vui_URLForKey:(id)arg1;
- (id)vui_arrayForKey:(id)arg1;
- (id)vui_attrStringForKey:(id)arg1;
- (bool)vui_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)vui_dataForKey:(id)arg1;
- (id)vui_dateForKey:(id)arg1;
- (id)vui_dictionaryForKey:(id)arg1;
- (id)vui_errorForKey:(id)arg1;
- (id)vui_numberForKey:(id)arg1;
- (id)vui_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_dictionaryByAddingEntriesFromNonNilDictionary:(id)arg1;
- (id)vk_md5;
- (id)vk_objectForNonNilKey:(id)arg1;
- (id)vk_prettyDescriptionWithTabLevel:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.framework/IMAP

- (bool)mf_boolForKey:(id)arg1;
- (int)mf_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)wlk_arrayForKey:(id)arg1;
- (id)wlk_artworkVariantListingForKey:(id)arg1;
- (bool)wlk_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)wlk_caseInsensitiveValueForKey:(id)arg1;
- (id)wlk_dataForKey:(id)arg1;
- (id)wlk_dateForKey:(id)arg1;
- (id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (unsigned long long)wlk_deepHash;
- (id)wlk_dictionaryByReplacingOccurrencesOfKey:(id)arg1 with:(id)arg2;
- (id)wlk_dictionaryDifference:(id)arg1;
- (id)wlk_dictionaryForKey:(id)arg1;
- (id)wlk_numberForKey:(id)arg1;
- (id)wlk_stringForKey:(id)arg1;
- (id)wlk_urlForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (double)doubleValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;
+ (float)floatValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(float)arg3;
+ (long long)integerValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
+ (id)stringValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
+ (double)timeIntervalValueFromDictionary:(id)arg1 forKey:(id)arg2 defaultValue:(double)arg3;

- (id)arrayForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)wf_URLForKeyPath:(id)arg1;
- (id)wf_arrayForKeyPath:(id)arg1;
- (id)wf_dictionaryForKeyPath:(id)arg1;
- (double)wf_doubleForKeyPath:(id)arg1;
- (id)wf_filter:(id /* block */)arg1;
- (float)wf_floatForKeyPath:(id)arg1;
- (long long)wf_integerForKeyPath:(id)arg1;
- (id)wf_numberForKeyPath:(id)arg1;
- (id)wf_objectForKeyPath:(id)arg1;
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;
- (id)wf_stringForKeyPath:(id)arg1;
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_URLForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_arrayForKey:(id)arg1 isValid:(bool*)arg2;
- (bool)wb_boolForKey:(id)arg1;
- (id)wb_dateForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_dictionaryForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_numberForKey:(id)arg1;
- (id)wb_numberForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(bool*)arg3;
- (id)wb_stringForKey:(id)arg1 isValid:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_arrayForKey:(id)arg1;
- (bool)_webkit_boolForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit

- (bool)wl_boolForKey:(id)arg1;
- (double)wl_floatForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

- (long long)wl_integerForKey:(id)arg1;
- (id)wl_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)plistString;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)mtl_identityPropertyMapWithModel:(Class)arg1;

- (id)mtl_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)mtl_dictionaryByRemovingEntriesWithKeys:(id)arg1;
- (id)mtl_dictionaryByRemovingValuesForKeys:(id)arg1;
- (id)mtl_valueForJSONKeyPath:(id)arg1 success:(bool*)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (bool)brc_booleanValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)ic_arrayValueForKey:(id)arg1;
- (bool)ic_boolValueForKey:(id)arg1;
- (id)ic_dataValueForKey:(id)arg1;
- (id)ic_dictionaryValueForKey:(id)arg1;
- (double)ic_doubleValueForKey:(id)arg1;
- (long long)ic_int64ValueForKey:(id)arg1;
- (int)ic_intValueForKey:(id)arg1;
- (long long)ic_integerValueForKey:(id)arg1;
- (id)ic_numberValueForKey:(id)arg1;
- (id)ic_stringValueForKey:(id)arg1;
- (unsigned int)ic_uintValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)objectForKey:(id)arg1 matching:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (int)iterations;
- (float)offset;
- (id)scriptEntry;
- (id)scriptPath;
- (SEL)setupSelector;
- (SEL)testSelector;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence

+ (id)tsp_decoderDataInfoDictionaryFromMessage:(const void*)arg1;
+ (id)tsp_decoderResourceNameDictionaryFromMessage:(const void*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromMessage:(const void*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromWeakExternalReferences:(id)arg1 updatingComponentInfo:(void*)arg2 failIfReferenceIsNotPersisted:(bool)arg3 context:(id)arg4 error:(id*)arg5;

- (long long)localStrategyForDocumentResourceInfo:(id)arg1;
- (void)tsp_enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)tsp_saveIdentifierToObjectUUIDDictionaryToMessage:(void*)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility

- (id)tsu_allKeysAsSet;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_invertedCopy;
- (id)tsu_onlyKeyForObject:(id)arg1;

// Image: /usr/lib/libMemoryResourceException.dylib

- (bool)isContainer;
- (id)jsonRepresentation;
- (id)mergeAuxDatum:(id)arg1 withDatum:(id)arg2 forceAggregate:(bool)arg3;
- (id)mergeWithData:(id)arg1;
- (id)mergeWithData:(id)arg1 forceAggregate:(bool)arg2;

// Image: /usr/lib/libnfshared.dylib

- (id)NF_arrayForKey:(id)arg1;
- (id)NF_dataForKey:(id)arg1;
- (id)NF_dictionaryForKey:(id)arg1;
- (id)NF_numberForKey:(id)arg1;
- (id)NF_objectForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)NF_stringForKey:(id)arg1;
- (id)NF_urlForKey:(id)arg1;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
