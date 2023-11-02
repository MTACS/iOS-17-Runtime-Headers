
@interface WLCredentialStore : NSObject {
    WLDeviceAuthentication * _authentication;
    WLAuthenticationCredentials * _credentials;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)credentialsForAuthentication:(id)arg1;
- (id)currentAuthentication;
- (id)init;
- (void)setCredentials:(id)arg1 forAuthentication:(id)arg2;

@end
