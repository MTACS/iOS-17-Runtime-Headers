
@interface HMDSiriSecureAccessoryAccessController : NSObject {
    <HMDSiriSecureAccessoryAccessControllerDataSource> * _dataSource;
    NSUserDefaults * _pineBoardUserDefaults;
    HMDAssistantWatchAuthenticationDataSource * _watchAuthDataSource;
}

- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 watchAuthDataSource:(id)arg2 pineBoardUserDefaults:(id)arg3;
- (void)isUnsecuringSiriActionAllowedWithCompletion:(id /* block */)arg1;

@end
