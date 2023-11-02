
@interface ASCDefaults : NSObject {
    NSString * _bundleID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *debugPackageURL;
@property (nonatomic) bool disableShutdownTimer;
@property (nonatomic) bool enableWebInspector;
@property (nonatomic) bool forceRightToLeftLayout;
@property (nonatomic) bool forceStandaloneWatch;
@property (nonatomic, copy) NSString *jsVersion;
@property (nonatomic, copy) NSNumber *overlaysLoadTimeout;
@property (nonatomic, copy) NSNumber *overlaysRateLimitRequestsPerSecond;
@property (nonatomic, copy) NSNumber *overlaysRateLimitTimeWindow;
@property (nonatomic) bool preferInternalJS;
@property (nonatomic, copy) NSString *storefrontLocaleID;

+ (id)daemonDefaults;

- (void).cxx_destruct;
- (id)bundleID;
- (id)debugPackageURL;
- (id)description;
- (bool)disableShutdownTimer;
- (bool)enableWebInspector;
- (bool)forceRightToLeftLayout;
- (bool)forceStandaloneWatch;
- (unsigned long long)hash;
- (id)initWithBundleID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsVersion;
- (id)objectForKey:(id)arg1;
- (id)overlaysLoadTimeout;
- (id)overlaysRateLimitRequestsPerSecond;
- (id)overlaysRateLimitTimeWindow;
- (bool)preferInternalJS;
- (void)setDebugPackageURL:(id)arg1;
- (void)setDisableShutdownTimer:(bool)arg1;
- (void)setEnableWebInspector:(bool)arg1;
- (void)setForceRightToLeftLayout:(bool)arg1;
- (void)setForceStandaloneWatch:(bool)arg1;
- (void)setJsVersion:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOverlaysLoadTimeout:(id)arg1;
- (void)setOverlaysRateLimitRequestsPerSecond:(id)arg1;
- (void)setOverlaysRateLimitTimeWindow:(id)arg1;
- (void)setPreferInternalJS:(bool)arg1;
- (void)setStorefrontLocaleID:(id)arg1;
- (id)storefrontLocaleID;

@end
