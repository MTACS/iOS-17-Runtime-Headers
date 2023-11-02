
@interface GKGameDescriptor : GKInternalRepresentation {
    NSNumber * _adamID;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersion;
    long long  _platform;
    NSString * _shortBundleVersion;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, retain) NSNumber *externalVersion;
@property (nonatomic) long long platform;
@property (nonatomic, copy) NSString *shortBundleVersion;

+ (long long)currentPlatform;
+ (id)currentPlatformServerString;
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;
+ (long long)gamePlatformFromServerGameDescriptorString:(id)arg1;
+ (long long)gamePlatformFromServerPushString:(id)arg1;
+ (id)platformStringForServerRequest:(long long)arg1;
+ (id)secureCodedPropertyKeys;
+ (id)supportedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamID;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)description;
- (id)dictionaryForRequest;
- (id)externalVersion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPushDictionary:(id)arg1;
- (long long)platform;
- (void)setAdamID:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setExternalVersion:(id)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setShortBundleVersion:(id)arg1;
- (id)shortBundleVersion;

@end
