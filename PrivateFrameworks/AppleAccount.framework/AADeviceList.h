
@interface AADeviceList : NSObject {
    AIDAAccountManager * _accountManager;
    AKAppleIDAuthenticationController * _authController;
    <AADeviceListDelegate> * _delegate;
    NSArray * _devices;
    NSError * _loadError;
}

@property (nonatomic) <AADeviceListDelegate> *delegate;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, readonly) NSError *loadError;

- (void).cxx_destruct;
- (id)_accountStore;
- (id)_aidaAccount;
- (id)_appleAccount;
- (id)_authController;
- (void)_createRequestForAccount:(id)arg1 requestHandler:(id /* block */)arg2;
- (void)_loadDeviceList;
- (void)_loadRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_renewCredentials;
- (void)_setDeviceList:(id)arg1 loadError:(id)arg2;
- (id)delegate;
- (id)devices;
- (id)initWithAccountManager:(id)arg1;
- (id)loadError;
- (void)refreshDeviceList;
- (void)setDelegate:(id)arg1;

@end
