
@interface PFUbiquityTransactionHistoryCache : NSObject {
    PFUbiquityKnowledgeVector * _cacheKV;
    NSMutableArray * _entriesToWrite;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    NSMutableDictionary * _globalIDToHistoryArray;
    bool  _hasScheduledWriteBlock;
    NSString * _localPeerID;
    PFUbiquityKnowledgeVector * _minCacheKV;
    NSMutableDictionary * _peerIDToHistoryArray;
    NSRecursiveLock * _peerIDToHistoryArrayLock;
    NSPersistentStoreCoordinator * _privatePSC;
    NSPersistentStore * _privateStore;
    PFUbiquityLocation * _rootLocation;
    NSString * _storeName;
}

- (bool)addTransactionEntry:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)init;

@end
