
@interface AMSUserAgent : NSObject {
    AMSMappedBundleInfo * _bundleInfo;
    <AMSDeviceInfo> * _deviceInfoProvider;
    AMSProcessInfo * _processInfo;
}

@property (nonatomic, readonly) AMSMappedBundleInfo *bundleInfo;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, readonly) <AMSDeviceInfo> *deviceInfoProvider;
@property (nonatomic, readonly) AMSProcessInfo *processInfo;

+ (id)_sharedCache;
+ (void)cacheUserAgent:(id)arg1 forBundleIdentifier:(id)arg2;
+ (id)cachedUserAgentForBundleIdentifier:(id)arg1;
+ (id)userAgentForProcessInfo:(id)arg1;

- (void).cxx_destruct;
- (id)_compileAndShouldCache:(bool*)arg1;
- (id)_compiledAMSCoreUserAgent;
- (id)_compiledAMSUserAgentShouldCache:(bool*)arg1;
- (id)_iOSComponentBuildVersion;
- (id)_iOSComponentClientInfo;
- (id)_iOSComponentDeviceModel;
- (id)_iOSComponentHardwarePlatform;
- (id)_iOSComponentProductVersion;
- (id)_initWithProcessInfo:(id)arg1 deviceInfoProvider:(id)arg2;
- (id)_sharedComponentFairPlayDeviceType;
- (id)_sharedComponentFrameworkVersion;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1;
- (id)_sharedComponentParentheticalWithFairPlayDeviceType:(id)arg1 productType:(id)arg2;
- (id)_userAgentSuffix;
- (id)bundleInfo;
- (id)clientName;
- (id)clientVersion;
- (id)compile;
- (id)deviceInfoProvider;
- (id)initWithProcessInfo:(id)arg1;
- (id)processInfo;
- (void)setClientName:(id)arg1;
- (void)setClientVersion:(id)arg1;

@end
