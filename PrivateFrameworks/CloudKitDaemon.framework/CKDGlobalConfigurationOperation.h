
@interface CKDGlobalConfigurationOperation : CKDOperation {
    CKDServerConfiguration * _configuration;
    NSObject<OS_dispatch_group> * _configurationFetchedGroup;
}

@property (nonatomic, retain) CKDServerConfiguration *configuration;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *configurationFetchedGroup;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)configuration;
- (id)configurationFetchedGroup;
- (void)main;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationFetchedGroup:(id)arg1;
- (bool)shouldCheckAppVersion;

@end
