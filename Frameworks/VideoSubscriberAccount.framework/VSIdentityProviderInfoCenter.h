
@interface VSIdentityProviderInfoCenter : NSObject <VSRemoteNotifierDelegate> {
    VSAccountStore * _accountStore;
    NSString * _cachedDesignatedAppBundleIdentifier;
    VSIdentityProvider * _cachedIdentityProvider;
    bool  _cachedIsSetTopBox;
    NSError * _currentError;
    VSDevice * _device;
    bool  _ignoredFirstNotification;
    id /* block */  _newIdentityProviderFetchAllOperationBlock;
    id /* block */  _newIdentityProviderFetchOperationBlock;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _setupCompleted;
}

@property (nonatomic, retain) VSAccountStore *accountStore;
@property (nonatomic, retain) NSString *cachedDesignatedAppBundleIdentifier;
@property (nonatomic, retain) VSIdentityProvider *cachedIdentityProvider;
@property (nonatomic) bool cachedIsSetTopBox;
@property (nonatomic, retain) NSError *currentError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoredFirstNotification;
@property (nonatomic, copy) id /* block */ newIdentityProviderFetchAllOperationBlock;
@property (nonatomic, copy) id /* block */ newIdentityProviderFetchOperationBlock;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) bool setupCompleted;
@property (readonly) Class superclass;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (void)_developerSettingsDidChange;
- (void)_identityProviderForSetTopBoxProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)_postdentityProviderInfoDidChangeNotification;
- (void)_refresh:(id /* block */)arg1;
- (id)_value:(id)arg1 withDefault:(id)arg2;
- (id)accountStore;
- (id)cachedDesignatedAppBundleIdentifier;
- (id)cachedIdentityProvider;
- (bool)cachedIsSetTopBox;
- (id)currentError;
- (void)dealloc;
- (id)device;
- (void)enqueueIdentityProviderAppsQueryWithCompletion:(id /* block */)arg1;
- (void)enqueueInfoQueryWithCompletion:(id /* block */)arg1;
- (void)enqueueManagedSetTopBoxInfoQueryWithCompletion:(id /* block */)arg1;
- (void)enqueueSetTopBoxInfoQueryWithCompletion:(id /* block */)arg1;
- (void)enqueueSetTopBoxProfileProviderQueryWithCompletion:(id /* block */)arg1;
- (void)fetchAccountAndIdentityProvider:(id /* block */)arg1;
- (void)fetchIdentityProviderAppBundleIdFromDeveloperSettings:(id /* block */)arg1;
- (bool)ignoredFirstNotification;
- (id)init;
- (id /* block */)newIdentityProviderFetchAllOperationBlock;
- (id /* block */)newIdentityProviderFetchOperationBlock;
- (id)preferences;
- (id)privateQueue;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)serialQueue;
- (void)setAccountStore:(id)arg1;
- (void)setCachedDesignatedAppBundleIdentifier:(id)arg1;
- (void)setCachedIdentityProvider:(id)arg1;
- (void)setCachedIsSetTopBox:(bool)arg1;
- (void)setCurrentError:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setIgnoredFirstNotification:(bool)arg1;
- (void)setNewIdentityProviderFetchAllOperationBlock:(id /* block */)arg1;
- (void)setNewIdentityProviderFetchOperationBlock:(id /* block */)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSetupCompleted:(bool)arg1;
- (bool)setupCompleted;

@end
