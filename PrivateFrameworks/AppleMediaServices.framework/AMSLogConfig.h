
@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying> {
    NSObject<OS_os_log> * _OSLogObject;
    NSString * _category;
    NSString * _subsystem;
}

@property (nonatomic, retain) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) bool debugLogsEnabled;
@property (nonatomic, copy) NSString *subsystem;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedActionConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedBagConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedConfig;
+ (id)sharedConfigOversize;
+ (id)sharedDataMigrationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedMediaConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedMetricsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedWebUIConfig;

- (void).cxx_destruct;
- (id)OSLogObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debugLogsEnabled;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCategory:(id)arg1 backingLog:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategory:(id)arg1;
- (void)setOSLogObject:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (id)subsystem;

// Image: /System/Library/PrivateFrameworks/AppStoreKitInternal.framework/AppStoreKitInternal

+ (id)ask_generalLogConfig;

@end
