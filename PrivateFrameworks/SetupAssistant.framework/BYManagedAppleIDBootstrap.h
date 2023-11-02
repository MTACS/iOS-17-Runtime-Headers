
@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver, UMUserSwitchStakeholder> {
    AKAppleIDAuthenticationContext * _authContext;
    NSDictionary * _authenticationResults;
    BYPreferencesController * _buddyPreferences;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _notifyToken;
    bool  _shouldRetrySilentLoginUpgrade;
    long long  _silentLoginUpgradeRetryCount;
    UMUserSwitchContext * _userSwitchContext;
}

@property (nonatomic, retain) NSDictionary *authenticationResults;
@property (nonatomic, retain) BYPreferencesController *buddyPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) int notifyToken;
@property (nonatomic, readonly) bool passwordChangeFlowNeedsToRun;
@property (nonatomic, readonly, copy) NSString *shortLivedToken;
@property (nonatomic) bool shouldRetrySilentLoginUpgrade;
@property (nonatomic) long long silentLoginUpgradeRetryCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UMUserSwitchContext *userSwitchContext;

+ (id)delegateBundleIDsForManagedAccount;
+ (bool)isFirstTimeLogin;
+ (bool)isManagedAppleIDSignedIn;
+ (bool)isMultiUser;
+ (bool)isSettingUpMultiUser;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_authenticationContextWithAuthenticationResults:(id)arg1;
- (void)_createAppleAccountWithAuthenticationResults:(id)arg1 completion:(id /* block */)arg2;
- (id)_fetchAKURLBagSynchronously;
- (id)_languageConfigurationDictionary;
- (void)_modifyAuthenticationContextIfNeeded:(id)arg1;
- (void)_registerForStartupCompletionNotificationWithTask:(id /* block */)arg1;
- (void)_runPostStartupTasksWithAccountStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_runSilentLoginUpgradeWithCompletion:(id /* block */)arg1 shortLivedTokenUpgradeCompletion:(id /* block */)arg2;
- (void)_upgradeShortLivedTokenCompletion:(id /* block */)arg1;
- (id)authenticationResults;
- (id)buddyPreferences;
- (void)dealloc;
- (void)ingestManagedBuddyData;
- (id)init;
- (bool)isLoginUser;
- (void)markUserWithManagedCredentials;
- (bool)needsToUpgradeShortLivedToken;
- (id)notificationQueue;
- (int)notifyToken;
- (bool)passwordChangeFlowNeedsToRun;
- (void)postUserSwitchContextHasBeenUsed;
- (void)recoverEMCSWithCompletion:(id /* block */)arg1;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)arg1 shortLivedTokenUpgradeCompletion:(id /* block */)arg2;
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(id /* block */)arg1 shortLivedTokenUpgradeCompletion:(id /* block */)arg2 willNotCompleteBlock:(id /* block */)arg3;
- (void)setAuthenticationResults:(id)arg1;
- (void)setBuddyPreferences:(id)arg1;
- (void)setNotificationQueue:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setShouldRetrySilentLoginUpgrade:(bool)arg1;
- (void)setSilentLoginUpgradeRetryCount:(long long)arg1;
- (id)shortLivedToken;
- (bool)shouldRetrySilentLoginUpgrade;
- (long long)silentLoginUpgradeRetryCount;
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(id /* block */)arg2;
- (id)userSwitchContext;
- (void)userSwitchContextHasBeenUsed;
- (void)willSwitchUser;
- (void)writeAccountConfigurationIfNeededWithCompletion:(id /* block */)arg1;

@end
