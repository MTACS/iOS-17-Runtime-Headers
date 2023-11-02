
@interface LKLogoutSupport : NSObject {
    UMUserSwitchBlockingTask * _syncTask;
}

@property (nonatomic, retain) UMUserSwitchBlockingTask *syncTask;

- (void).cxx_destruct;
- (bool)_canLogoutToLoginSession;
- (void)_syncPreferencesIfNeeded;
- (id)init;
- (bool)isCurrentUserAnonymous;
- (void)logoutToLoginSessionWithCompletionHandler:(id /* block */)arg1;
- (void)logoutToLoginUserWithCompletionHandler:(id /* block */)arg1;
- (void)logoutToLoginWindowWithCompletionHandler:(id /* block */)arg1;
- (id)logoutWarningMessage;
- (void)setSyncTask:(id)arg1;
- (id)syncTask;

@end
