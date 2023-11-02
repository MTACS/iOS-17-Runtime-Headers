
@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString * _activeModelVersionHash;
    PFUbiquityBaselineHeuristics * _baselineHeuristics;
    PFUbiquitySwitchboardCacheWrapper * _cacheWrapper;
    _PFUbiquityRecordsExporter * _exporter;
    _PFUbiquityRecordsImporter * _importer;
    NSString * _localPeerID;
    PFUbiquityLocation * _localRootLocation;
    NSPersistentStoreCoordinator * _privatePSC;
    NSObject<OS_dispatch_queue> * _privateQueue;
    NSSQLCore * _privateStore;
    PFUbiquityRecordsImporterSchedulingContext * _schedulingContext;
    NSString * _storeName;
    NSMutableSet * _stores;
    PFUbiquityLocation * _ubiquityRootLocation;
    bool  _useLocaAccount;
    bool  _useLocalStorage;
}

- (void)dealloc;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;

@end
