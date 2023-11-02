
@interface ACXApplication : ACXRemoteApplication <NSCopying, NSSecureCoding> {
    unsigned long long  _autoInstallOverride;
    NSArray * _clockFaceExtensionPaths;
    NSString * _companionAppName;
    NSURL * _companionAppURL;
    ACXApplicationStatus * _deviceStatus;
    bool  _isEmbeddedPlaceholder;
    bool  _isPurchasedReDownload;
    bool  _isTrusted;
    unsigned long long  _lsSequenceNumber;
    NSString * _sourceAppIdentifier;
    NSURL * _watchAppURL;
}

@property (nonatomic, readonly) unsigned long long autoInstallOverride;
@property (nonatomic, readonly, copy) NSArray *clockFaceExtensionPaths;
@property (nonatomic, readonly, copy) NSString *companionAppName;
@property (nonatomic, readonly) NSURL *companionAppURL;
@property (nonatomic, copy) ACXApplicationStatus *deviceStatus;
@property (nonatomic, readonly) bool isEmbeddedPlaceholder;
@property (nonatomic, readonly) bool isPurchasedReDownload;
@property (nonatomic) bool isTrusted;
@property (nonatomic, readonly) unsigned long long lsSequenceNumber;
@property (nonatomic, readonly, copy) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSURL *watchAppURL;

+ (bool)_isIndeterminateMISError:(int)arg1;
+ (int)_systemTrustsApplicationWithBundleURL:(id)arg1;
+ (id)gizmoApplicationsFromCompanionAppRecord:(id)arg1 databaseUUID:(id)arg2 startingSequenceNumber:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;
- (id)_URLsOfExtensionsInBundleURL:(id)arg1 mayNotExist:(bool)arg2;
- (void)_evaluateTrustInfoForReevaluation:(bool)arg1;
- (id)_infoPlistForPluginBundle:(id)arg1;
- (id)_mostCurrentWKAppURLInCompanionAppRecord:(id)arg1 isPlaceholder:(bool*)arg2;
- (id)_parseArchitectureSlicesForWatchKitAppExecutableURL:(id)arg1;
- (void)_populateStoreMetadata;
- (id)_storeMetadataWithError:(id*)arg1;
- (id)_watchKitApplicationNameFromWKAppInfoPlist:(id)arg1 containerRecord:(id)arg2;
- (id)appWithReevaluatedTrust;
- (unsigned long long)autoInstallOverride;
- (id)clockFaceExtensionPaths;
- (id)companionAppName;
- (id)companionAppURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initForTesting;
- (id)initWithApplicationRecord:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithApplicationRecord:(id)arg1 gizmoBundleIdentifier:(id)arg2 databaseUUID:(id)arg3 sequenceNumber:(unsigned long long)arg4;
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedDictionary:(id)arg1;
- (id)initWithSerializedDictionary:(id)arg1 reevaluatingTrust:(bool)arg2;
- (bool)isEmbeddedPlaceholder;
- (bool)isLocallyAvailable;
- (bool)isPurchasedReDownload;
- (bool)isTrusted;
- (unsigned long long)lsSequenceNumber;
- (id)serialize;
- (id)serializeAsRemoteApplication;
- (void)setDeviceStatus:(id)arg1;
- (void)setIsTrusted:(bool)arg1;
- (id)sourceAppIdentifier;
- (id)watchAppURL;

@end
