
@interface WiFiCloudSyncEngineCore : NSObject {
    int (* callback;
    NSObject<OS_dispatch_queue> * clientQueue;
    NSThread * clientThread;
    void * context;
    bool  iCloudSyncingEnabled;
    bool  isKVSEncrypted;
    NSUbiquitousKeyValueStore * keyValueStore;
}

@property int (*callback;
@property NSObject<OS_dispatch_queue> *clientQueue;
@property NSThread *clientThread;
@property void*context;
@property bool iCloudSyncingEnabled;
@property bool isKVSEncrypted;
@property NSUbiquitousKeyValueStore *keyValueStore;

- (void)addToKVStore:(id)arg1 synchronize:(bool)arg2;
- (int (*)callback;
- (void)clearKVS;
- (id)clientQueue;
- (id)clientThread;
- (void*)context;
- (void)dealloc;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1;
- (void)enableIcloudSyncing:(bool)arg1 ForBundleId:(id)arg2;
- (bool)iCloudSyncingEnabled;
- (id)initWithEncryptedKVS:(bool)arg1;
- (bool)isKVSEncrypted;
- (id)keyValueStore;
- (void)printCompleteKVStore;
- (void)pruneKVSStore;
- (void)queryKeychainSyncState;
- (id)readCompleteKVStore;
- (void)readStoreValueForKey:(id)arg1;
- (void)registerCallback:(int (*)arg1 context:(void*)arg2;
- (void)registerCallback:(int (*)arg1 queue:(id)arg2 context:(void*)arg3;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(id)arg1;
- (void)relayKeychainSyncState:(id)arg1;
- (void)relayMergeNetworks:(id)arg1;
- (void)relayPruneKVSStore:(id)arg1;
- (void)relayReadStoreValueAction:(id)arg1;
- (void)removeFromKVStore:(id)arg1;
- (void)setCallback:(int (*)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setClientThread:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setICloudSyncingEnabled:(bool)arg1;
- (void)setIsKVSEncrypted:(bool)arg1;
- (void)setKeyValueStore:(id)arg1;
- (void)subscribeKVStoreNotficationsForBundleId:(id)arg1;
- (void)synchronizeAndCallMergeNetworks;
- (void)synchronizeKVS;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (void)unSubscribeKVStoreNotfications;

@end
