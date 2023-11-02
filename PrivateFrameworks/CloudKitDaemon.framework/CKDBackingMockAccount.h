
@interface CKDBackingMockAccount : CKDBackingAccount {
    NSString * _dsid;
    <CKDTestAccountProtocol> * _testAccount;
    <CKDTestDeviceProtocol> * _testDevice;
}

@property (nonatomic, readonly) <CKDTestAccountProtocol> *testAccount;
@property (nonatomic, readonly) <CKDTestDeviceProtocol> *testDevice;

+ (id)mockAccountWithTestAccount:(id)arg1 testDevice:(id)arg2;

- (void).cxx_destruct;
- (id)_initMockAccountWithTestAccount:(id)arg1 testDevice:(id)arg2;
- (id)accountPropertiesForDataclass:(id)arg1;
- (long long)accountType;
- (bool)canRenew;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (id)displayedHostname;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (id)identifier;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isDataclassEnabledForCellular:(id)arg1;
- (bool)isPrimaryEmailVerified;
- (id)personaIdentifier;
- (id)primaryEmail;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (id)testAccount;
- (id)testDevice;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end
