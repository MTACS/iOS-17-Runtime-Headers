
@interface ASAuthorization : NSObject {
    <ASAuthorizationCredential> * _credential;
    <ASAuthorizationProvider> * _provider;
}

@property (nonatomic, readonly) <ASAuthorizationCredential> *credential;
@property (nonatomic, readonly) <ASAuthorizationProvider> *provider;

+ (id)authorizationFromCredential:(id)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)credential;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithCorePlatformKeyCredentialAssertion:(id)arg1;
- (id)initWithCorePlatformKeyCredentialRegistration:(id)arg1;
- (id)initWithProvider:(id)arg1 credential:(id)arg2;
- (id)provider;

@end
