
@interface EMUbiquitouslyPersistedDictionary : NSObject <EFLoggable, EMMutableDictionaryProtocol> {
    <EMUbiquitouslyPersistedDictionaryDelegate> * _delegate;
    <EFScheduler> * _delegateScheduler;
    NSString * _identifier;
    NSUbiquitousKeyValueStore * _kvStore;
    NSObject<OS_dispatch_queue> * _mutationQueue;
    NSString * _plistPath;
    NSMutableDictionary * _storedObjects;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EMUbiquitouslyPersistedDictionaryDelegate> *delegate;
@property (nonatomic, readonly) <EFScheduler> *delegateScheduler;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *kvStore;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mutationQueue;
@property (nonatomic, readonly) NSString *plistPath;
@property (nonatomic, readonly) NSMutableDictionary *storedObjects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;

+ (id)log;
+ (id)sharedDictionaryWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (void)_ensureStoredObjectsAreInKVStore;
- (id)_mergeChangesForRemotelyChangedKeys:(id)arg1;
- (void)_mergeKVStoreChangedKeys:(id)arg1;
- (void)_purgeOldestEntries;
- (void)_resetKVStore;
- (void)_storeChangedExternally:(id)arg1;
- (void)_synchronize;
- (void)_writeToPlist;
- (unsigned long long)count;
- (id)delegate;
- (id)delegateScheduler;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 encrypted:(bool)arg2 delegate:(id)arg3;
- (id)initWithPlistPath:(id)arg1 identifier:(id)arg2;
- (id)initWithPlistPath:(id)arg1 identifier:(id)arg2 encrypted:(bool)arg3 delegate:(id)arg4;
- (id)kvStore;
- (id)mutationQueue;
- (void)notifyDelegateOfChangedItems:(id)arg1 deletedItems:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)plistPath;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)storedObjects;
- (id)ubiquitousKeyValueStore;

@end
