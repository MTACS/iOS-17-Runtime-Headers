
@interface ACXSyncedApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    unsigned long long  _applicationType;
    NSString * _bundleIdentifier;
    NSArray * _counterpartIdentifiers;
    NSUUID * _databaseUUID;
    bool  _defaultsToPrivateAlwaysOnDisplayTreatment;
    NSNumber * _externalVersionIdentifier;
    bool  _isDeletable;
    NSDictionary * _localizedInfoPlistStrings;
    unsigned long long  _sequenceNumber;
    bool  _supportsAlwaysOnDisplay;
}

@property (nonatomic, readonly) NSString *_rawApplicationName;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic) unsigned long long applicationType;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSArray *counterpartIdentifiers;
@property (nonatomic, retain) NSUUID *databaseUUID;
@property (nonatomic) bool defaultsToPrivateAlwaysOnDisplayTreatment;
@property (nonatomic, retain) NSNumber *externalVersionIdentifier;
@property (nonatomic) bool isDeletable;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic, copy) NSDictionary *localizedInfoPlistStrings;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) bool supportsAlwaysOnDisplay;

+ (id)buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)arg1 watchKitExtensionURL:(id)arg2;
+ (id)localizedAppNameFromRecord:(id)arg1;
+ (id)localizedInfoPlistKeysLoadAnywhere;
+ (id)localizedInfoPlistKeysLoadAppOnly;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_rawApplicationName;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpartIdentifiers;
- (id)databaseUUID;
- (bool)defaultsToPrivateAlwaysOnDisplayTreatment;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)init;
- (id)initForTesting;
- (id)initWithApplicationRecord:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithBundleID:(id)arg1 databaseUUID:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedDictionary:(id)arg1;
- (bool)isDeletable;
- (bool)isSystemApp;
- (id)localizedInfoPlistStrings;
- (id)localizedInfoPlistStringsForKeys:(id)arg1 fetchingFirstMatchingLocalizationInList:(id)arg2;
- (unsigned long long)sequenceNumber;
- (id)serialize;
- (id)serializeAsRemoteApplication;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationType:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCounterpartIdentifiers:(id)arg1;
- (void)setDatabaseUUID:(id)arg1;
- (void)setDefaultsToPrivateAlwaysOnDisplayTreatment:(bool)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setIsDeletable:(bool)arg1;
- (void)setLocalizedInfoPlistStrings:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (void)setSupportsAlwaysOnDisplay:(bool)arg1;
- (bool)supportsAlwaysOnDisplay;

@end
