
@interface CDPDSecureBackupConfiguration : NSObject {
    NSDictionary * _configurationURLs;
    CDPContext * _context;
    NSDictionary * _escrowConfigurationURLs;
    NSURLSession * _session;
}

+ (id)_configurationRequestWithURLString:(id)arg1;
+ (id)configurationWithContext:(id)arg1;
+ (id)configurationWithContext:(id)arg1 andSession:(id)arg2;

- (void).cxx_destruct;
- (id)_configurationInfoURLRequest;
- (id)_escrowConfigurationBag;
- (id)_escrowConfigurationBagFull;
- (id)_escrowProxyConfigurationURL;
- (id)_escrowProxyConfigurationURLRequest;
- (id)_escrowProxyURL;
- (id)_fetchConfigurationDictionary;
- (id)_fetchConfigurationWithRequest:(id)arg1;
- (id)_fetchEscrowConfigurationBag;
- (id)_iCloudEnvironment;
- (id)_setupConfigurationURLs;
- (id)accountInfoFetchSetupDictionary;
- (id)escrowAuthInfo;

@end
