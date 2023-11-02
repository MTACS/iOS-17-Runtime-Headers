
@interface CKDBackingExplicitCredentialsAccount : CKDBackingAccount <AKAppleIDAuthenticationDelegate> {
    ACAccount * _fakeCKAccount;
    NSString * _hsa2AccountPassword;
    NSString * _hsa2DevicePassword;
    NSString * _hsa2RecoveryKey;
}

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (retain) ACAccount *fakeCKAccount;
@property (nonatomic, readonly) NSString *hsa2AccountPassword;
@property (retain) NSString *hsa2DevicePassword;
@property (nonatomic, readonly) NSString *hsa2RecoveryKey;
@property (nonatomic, readonly) NSString *password;

+ (id)explicitCredentialsAccountWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_setOverridesOnVettingContext:(id)arg1;
- (long long)accountType;
- (bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (id)fakeCKAccount;
- (id)hsa2AccountPassword;
- (id)hsa2DevicePassword;
- (id)hsa2RecoveryKey;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (id)initWithAppleAccount:(id)arg1 hsa2RecoveryKey:(id)arg2 hsa2AccountPassword:(id)arg3;
- (bool)isDataclassEnabled:(id)arg1;
- (id)password;
- (void)renewAuthTokenWithOptions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 22: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, long double, int, BOOL, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (void)setFakeCKAccount:(id)arg1;
- (void)setHsa2DevicePassword:(id)arg1;
- (void)updateAccountPropertiesAndSaveAccount:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, inout unsigned short, /* Warning: Unrecognized filer type: 'E' using 'void*' */ void*, const const out const /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end
