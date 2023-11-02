
@interface PFUbiquityImportContext : NSObject {
    PFUbiquityPeer * _actingPeer;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    PFUbiquityKnowledgeVector * _currentKnowledgeVector;
    NSString * _exportingPeerID;
    NSMutableDictionary * _globalIDToFetchedObject;
    NSDictionary * _globalIDToLocalIDURICache;
    PFUbiquityBaselineHeuristics * _heuristics;
    PFUbiquityKnowledgeVector * _kv;
    _PFUbiquityStack * _stack;
    PFUbiquityStoreMetadata * _storeMetadata;
    PFUbiquityStoreSaveSnapshot * _storeSaveSnapshot;
    PFUbiquityTransactionLog * _transactionLog;
}

- (void)dealloc;
- (id)init;
- (id)initWithStack:(id)arg1 andStoreMetadata:(id)arg2;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 withLocalPeerID:(id)arg3;

@end
