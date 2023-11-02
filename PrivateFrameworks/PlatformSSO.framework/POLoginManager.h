
@interface POLoginManager : NSObject <NSSecureCoding> {
    struct __SecCertificate { } * _deviceAttestationCertificate;
    NSDictionary * _extensionData;
    <SOHostExtensionContextProtocol> * _hostExtensionContext;
    NSString * _requestIdentifier;
    POServiceLoginManagerConnection * _serviceConnection;
}

@property (nonatomic, readonly) struct __SecCertificate { }*deviceAttestationCertificate;
@property (getter=isDeviceRegistered, readonly) bool deviceRegistered;
@property (nonatomic, copy) NSDictionary *extensionData;
@property (retain) <SOHostExtensionContextProtocol> *hostExtensionContext;
@property (nonatomic, readonly, copy) POLoginConfiguration *loginConfiguration;
@property (nonatomic, retain) NSString *loginUserName;
@property (nonatomic, readonly, copy) NSString *registrationToken;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (nonatomic, copy) NSDictionary *ssoTokens;
@property (nonatomic, readonly, copy) POUserLoginConfiguration *userLoginConfiguration;
@property (getter=isUserRegistered, readonly) bool userRegistered;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)attestKey:(long long)arg1 clientDataHash:(id)arg2 completion:(id /* block */)arg3;
- (struct __SecCertificate { }*)copyDeviceAttestationCertificate;
- (struct __SecIdentity { }*)copyIdentityForKeyType:(long long)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)copyKeyForKeyType:(long long)arg1;
- (struct __SecCertificate { }*)deviceAttestationCertificate;
- (void)deviceRegistrationsNeedsRepair;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionData;
- (id)hostExtensionContext;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUid:(unsigned int)arg1;
- (void)invalidate;
- (bool)isDeviceRegistered;
- (bool)isUserRegistered;
- (id)loginConfiguration;
- (id)loginUserName;
- (void)presentRegistrationViewControllerWithCompletion:(id /* block */)arg1;
- (id)registrationToken;
- (id)requestIdentifier;
- (void)resetDeviceKeys;
- (void)resetKeys;
- (void)resetUserSecureEnclaveKey;
- (void)saveCertificate:(struct __SecCertificate { }*)arg1 keyType:(long long)arg2;
- (bool)saveLoginConfiguration:(id)arg1 error:(id*)arg2;
- (bool)saveUserLoginConfiguration:(id)arg1 error:(id*)arg2;
- (void)setExtensionData:(id)arg1;
- (void)setHostExtensionContext:(id)arg1;
- (void)setLoginUserName:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSsoTokens:(id)arg1;
- (id)ssoTokens;
- (id)userLoginConfiguration;
- (void)userNeedsReauthentication;
- (void)userNeedsReauthenticationWithCompletion:(id /* block */)arg1;
- (void)userRegistrationsNeedsRepair;

@end
