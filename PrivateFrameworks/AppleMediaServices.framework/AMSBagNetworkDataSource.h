
@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol> {
    <AMSBagAccountProvider> * _accountProvider;
    AMSObserver * _accountsChangedObserver;
    NSError * _activeFailure;
    AMSTimeout * _activeFailureTimeout;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _cachedDataAccessLock;
    AMSBagNetworkTaskResult * _cachedResult;
    NSString * _cachedStorefront;
    NSObject<OS_dispatch_queue> * _completionQueue;
    AMSBagNetworkTask * _currentLoadTask;
    id /* block */  _dataSourceChangedHandler;
    id /* block */  _dataSourceDataInvalidatedHandler;
    NSMutableDictionary * _defaultValues;
    NSObject<OS_dispatch_queue> * _processAccountStoreDidChangeNotificationQueue;
    AMSProcessInfo * _processInfo;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, readonly) <AMSBagAccountProvider> *accountProvider;
@property (nonatomic, retain) AMSObserver *accountsChangedObserver;
@property (nonatomic, retain) NSError *activeFailure;
@property (nonatomic, readonly) AMSTimeout *activeFailureTimeout;
@property (nonatomic, readonly, copy) NSString *bagLoadingPartialIdentifier;
@property (nonatomic, readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; } cachedDataAccessLock;
@property (nonatomic, retain) AMSBagNetworkTaskResult *cachedResult;
@property (nonatomic, retain) NSString *cachedStorefront;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, retain) AMSBagNetworkTask *currentLoadTask;
@property (nonatomic, copy) id /* block */ dataSourceChangedHandler;
@property (nonatomic, copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableDictionary *defaultValues;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *descriptionExtended;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (void)_valueForURLVariable:(id)arg1 account:(id)arg2 clientInfo:(id)arg3 sync:(bool)arg4 completion:(id /* block */)arg5;
+ (id)requestPartialIdentifierForClientInfo:(id)arg1 profile:(id)arg2 profileVersion:(id)arg3;
+ (id)valueForURLVariable:(id)arg1 account:(id)arg2 clientInfo:(id)arg3;

- (void).cxx_destruct;
- (void)_accountStoreDidChange;
- (id)_fetchBag;
- (void)_invalidateCacheNotification:(id)arg1;
- (id)_newCompletionQueue;
- (void)_updateCachedResult:(id)arg1;
- (id)accountProvider;
- (id)accountsChangedObserver;
- (id)activeFailure;
- (id)activeFailureTimeout;
- (id)bagLoadingPartialIdentifier;
- (struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_1_1; } x1; unsigned int x2; })cachedDataAccessLock;
- (id)cachedResult;
- (id)cachedStorefront;
- (id)completionQueue;
- (id)currentLoadTask;
- (id /* block */)dataSourceChangedHandler;
- (id /* block */)dataSourceDataInvalidatedHandler;
- (void)dealloc;
- (id)defaultValueForKey:(id)arg1;
- (id)defaultValues;
- (id)description;
- (id)descriptionExtended;
- (id)expirationDate;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 processInfo:(id)arg3 accountProvider:(id)arg4;
- (bool)isLoaded;
- (void)loadWithCompletion:(id /* block */)arg1;
- (id)loadedValuesForKeys:(id)arg1;
- (id)processAccountStoreDidChangeNotificationQueue;
- (id)processInfo;
- (id)profile;
- (id)profileVersion;
- (void)setAccountsChangedObserver:(id)arg1;
- (void)setActiveFailure:(id)arg1;
- (void)setCachedResult:(id)arg1;
- (void)setCachedStorefront:(id)arg1;
- (void)setCompletionQueue:(id)arg1;
- (void)setCurrentLoadTask:(id)arg1;
- (void)setDataSourceChangedHandler:(id /* block */)arg1;
- (void)setDataSourceDataInvalidatedHandler:(id /* block */)arg1;
- (void)setDefaultValue:(id)arg1 forKey:(id)arg2;
- (void)setDefaultValues:(id)arg1;
- (id)valueForURLVariable:(id)arg1 account:(id)arg2;
- (void)valueForURLVariable:(id)arg1 account:(id)arg2 completion:(id /* block */)arg3;

@end
