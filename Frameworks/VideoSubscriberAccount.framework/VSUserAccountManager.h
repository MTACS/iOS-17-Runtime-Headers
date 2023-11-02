
@interface VSUserAccountManager : NSObject <VSRemoteNotifierDelegate> {
    VSUserAccountServiceConnection * _connection;
    VSRemoteNotifier * _remoteNotifier;
}

@property (nonatomic, retain) VSUserAccountServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;

+ (id)sharedUserAccountManager;

- (void).cxx_destruct;
- (id)connection;
- (void)deleteUserAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUserAccountWithSourceIdentifier:(id)arg1 sourceType:(long long)arg2 deviceIdentifier:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)forceRefreshUserAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)queryUserAccountsWithOptions:(long long)arg1 completion:(id /* block */)arg2;
- (void)queryUserAccountsWithOptions:(long long)arg1 sourceIdentifier:(id)arg2 sourceType:(id)arg3 deviceIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)updateUserAccount:(id)arg1 completion:(id /* block */)arg2;

@end
