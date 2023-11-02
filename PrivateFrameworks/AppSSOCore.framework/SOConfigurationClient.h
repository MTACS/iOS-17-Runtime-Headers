
@interface SOConfigurationClient : NSObject {
    SOClient * _client;
    SOConfiguration * _configuration;
    SOConfigurationVersion * _configurationVersion;
}

@property (nonatomic, readonly) long long configVersion;
@property (nonatomic, readonly) SOConfiguration *configuration;

+ (id)defaultClient;

- (void).cxx_destruct;
- (void)_checkNewVersion;
- (void)_reloadConfig;
- (long long)configVersion;
- (id)configuration;
- (id)init;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (bool)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;

@end
