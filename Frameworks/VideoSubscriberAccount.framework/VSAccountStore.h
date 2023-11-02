
@interface VSAccountStore : NSObject <VSRemoteNotifierDelegate> {
    VSAccount * _cachedFirstAccount;
    id  _changeObserver;
    VSKeychainEditingContext * _keychainEditingContext;
    NSOperationQueue * _keychainQueue;
    bool  _needsUpdateCachedFirstAccount;
    VSPreferences * _preferences;
    VSRemoteNotifier * _remoteNotifier;
}

@property (nonatomic, readonly, copy) NSArray *accounts;
@property (retain) VSAccount *cachedFirstAccount;
@property (nonatomic) id changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSKeychainEditingContext *keychainEditingContext;
@property (nonatomic, retain) NSOperationQueue *keychainQueue;
@property bool needsUpdateCachedFirstAccount;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUndoManager *undoManager;

+ (Class)accountClass;
+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (id)_accountForKeychainItem:(id)arg1;
- (void)_fetchAccountsSimulatingExpiredToken:(bool)arg1 forProviderIDs:(id)arg2 completion:(id /* block */)arg3;
- (bool)_insertAccount:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)_insertLegacyKeychainItemForAccount:(id)arg1 context:(id)arg2;
- (void)_insertModernKeychainItemForAccount:(id)arg1 context:(id)arg2;
- (id)_keychainItemsWithLimit:(unsigned long long)arg1;
- (void)_sendLocalNotification;
- (void)_sendRemoteNotification;
- (id)_uniqueIdentifierForKeychainItem:(id)arg1;
- (bool)_updateCachedFirstAccount;
- (id)accounts;
- (id)cachedFirstAccount;
- (id)changeObserver;
- (void)dealloc;
- (void)fetchAccountsWithCompletionHandler:(id /* block */)arg1;
- (id)firstAccount;
- (id)firstAccountIfLoaded;
- (id)init;
- (bool)isFirstAccountLoaded;
- (id)keychainEditingContext;
- (id)keychainQueue;
- (bool)needsUpdateCachedFirstAccount;
- (id)preferences;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)saveAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCachedFirstAccount:(id)arg1;
- (void)setChangeObserver:(id)arg1;
- (void)setKeychainEditingContext:(id)arg1;
- (void)setKeychainQueue:(id)arg1;
- (void)setNeedsUpdateCachedFirstAccount:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (id)undoManager;

@end
