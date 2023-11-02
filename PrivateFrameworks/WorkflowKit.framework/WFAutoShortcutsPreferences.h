
@interface WFAutoShortcutsPreferences : NSObject <NSSecureCoding> {
    INAppDescriptor * _appDescriptor;
    NSString * _appName;
    NSData * _cloudKitMetadata;
    NSSet * _disabledAutoShortcuts;
    bool  _isSiriEnabled;
    bool  _isSpotlightEnabled;
    long long  _lastSyncedHash;
}

@property (nonatomic, retain) INAppDescriptor *appDescriptor;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSData *cloudKitMetadata;
@property (nonatomic, retain) NSSet *disabledAutoShortcuts;
@property (nonatomic) bool isSiriEnabled;
@property (nonatomic) bool isSpotlightEnabled;
@property (nonatomic) long long lastSyncedHash;

+ (id)appDescriptorWithBundleIdentifier:(id)arg1;
+ (int)crossPlatformHashForAppDescriptor:(id)arg1;
+ (id)defaultSettingsForAppDescriptor:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appDescriptor;
- (id)appName;
- (id)cloudKitMetadata;
- (long long)computedSyncHash;
- (id)disabledAutoShortcuts;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppDescriptor:(id)arg1 isSiriEnabled:(bool)arg2 isSpotlightEnabled:(bool)arg3 disabledAutoShortcuts:(id)arg4 cloudKitMetadata:(id)arg5;
- (id)initWithAppDescriptor:(id)arg1 isSiriEnabled:(bool)arg2 isSpotlightEnabled:(bool)arg3 disabledAutoShortcuts:(id)arg4 cloudKitMetadata:(id)arg5 lastSyncedHash:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isSiriEnabled;
- (bool)isSpotlightEnabled;
- (long long)lastSyncedHash;
- (void)setAppDescriptor:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setCloudKitMetadata:(id)arg1;
- (void)setDisabledAutoShortcuts:(id)arg1;
- (void)setIsSiriEnabled:(bool)arg1;
- (void)setIsSpotlightEnabled:(bool)arg1;
- (void)setLastSyncedHash:(long long)arg1;

@end
