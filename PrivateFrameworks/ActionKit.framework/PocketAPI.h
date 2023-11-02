
@interface PocketAPI : NSObject {
    NSString * URLScheme;
    NSString * consumerKey;
    PocketAPILogin * currentLogin;
    NSOperationQueue * operationQueue;
    NSString * userAgent;
}

@property (nonatomic, retain) NSString *URLScheme;
@property (nonatomic, retain) NSString *consumerKey;
@property (getter=isLoggedIn, nonatomic, readonly) bool loggedIn;
@property (nonatomic, retain) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)pkt_hashForConsumerKey:(id)arg1 accessToken:(id)arg2;
+ (id)pocketAppURLScheme;
+ (id)sharedAPI;

- (id)URLScheme;
- (unsigned long long)appID;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (void)callAPIMethod:(id)arg1 withHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(id /* block */)arg4;
- (id)consumerKey;
- (void)dealloc;
- (bool)handleOpenURL:(id)arg1;
- (id)init;
- (bool)isLoggedIn;
- (void)loginWithDelegate:(id)arg1;
- (void)loginWithHandler:(id /* block */)arg1;
- (void)logout;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 delegate:(id)arg4;
- (id)methodOperationWithAPIMethod:(id)arg1 forHTTPMethod:(int)arg2 arguments:(id)arg3 handler:(id /* block */)arg4;
- (id)operationQueue;
- (id)pkt_actionDictionaryWithName:(id)arg1 parameters:(id)arg2;
- (id)pkt_deviceName;
- (id)pkt_deviceOSVersion;
- (id)pkt_getKeychainValueForKey:(id)arg1;
- (id)pkt_getKeychainValueForKey:(id)arg1 serviceName:(id)arg2;
- (id)pkt_getToken;
- (id)pkt_loadCurrentLoginFromDefaults;
- (void)pkt_loggedInWithUsername:(id)arg1 token:(id)arg2;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 delegate:(id)arg3;
- (void)pkt_migrateAccountToAccessTokenWithUsername:(id)arg1 password:(id)arg2 handler:(id /* block */)arg3;
- (void)pkt_saveCurrentLoginToDefaults;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2;
- (void)pkt_setKeychainValue:(id)arg1 forKey:(id)arg2 serviceName:(id)arg3;
- (id)pkt_userAgent;
- (id)saveOperationWithURL:(id)arg1 delegate:(id)arg2;
- (id)saveOperationWithURL:(id)arg1 handler:(id /* block */)arg2;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 delegate:(id)arg3;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 handler:(id /* block */)arg3;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (id)saveOperationWithURL:(id)arg1 title:(id)arg2 tweetID:(id)arg3 handler:(id /* block */)arg4;
- (void)saveURL:(id)arg1 delegate:(id)arg2;
- (void)saveURL:(id)arg1 handler:(id /* block */)arg2;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 delegate:(id)arg3;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 handler:(id /* block */)arg3;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 delegate:(id)arg4;
- (void)saveURL:(id)arg1 withTitle:(id)arg2 tweetID:(id)arg3 handler:(id /* block */)arg4;
- (void)setConsumerKey:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setURLScheme:(id)arg1;
- (id)username;

@end
