
@interface HPSAppleConnectController : NSObject {
    NSString * _accountID;
    bool  _enabled;
    NSString * _password;
}

@property (nonatomic, readonly, copy) NSString *accountID;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool isCarryOrLiveOnUser;
@property (nonatomic, readonly, copy) NSString *password;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_readCachedCredentials;
- (void)_saveCredentials;
- (id)accountID;
- (void)clearCredentialsSyncToKeychain:(bool)arg1;
- (void)dealloc;
- (id)init;
- (bool)isCarryOrLiveOnUser;
- (bool)isEnabled;
- (id)password;
- (void)setAccountID:(id)arg1;
- (void)setAccountID:(id)arg1 password:(id)arg2 syncToKeychain:(bool)arg3;
- (void)setPassword:(id)arg1;
- (void)tokenWithError:(id /* block */)arg1;
- (void)validateWithCompletionHandler:(id /* block */)arg1;

@end
