
@interface BDSCloudGlobalMetadataManager : NSObject <BCCloudDataSyncManagerDelegate, BDSCloudGlobalMetadataManager, BDSCloudKitSupportZoneRecovery> {
    BCCloudChangeTokenController * _changeTokenController;
    NSMutableDictionary * _conflictResolvers;
    BCCloudDataManager * _dataManager;
    bool  _enableCloudSync;
    BCCloudDataSource * _globalMetadataDataSource;
    NSManagedObjectModel * _objectModel;
    BDSSaltVersionIdentifierManager * _saltVersionIdentifierManager;
    BCCloudDataSyncManager * _syncManager;
}

@property (nonatomic, retain) BCCloudChangeTokenController *changeTokenController;
@property (nonatomic, retain) NSMutableDictionary *conflictResolvers;
@property (nonatomic, retain) BCCloudDataManager *dataManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableCloudSync;
@property (nonatomic, retain) BCCloudDataSource *globalMetadataDataSource;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSManagedObjectModel *objectModel;
@property (nonatomic, retain) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) BCCloudDataSyncManager *syncManager;

+ (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)changeTokenController;
- (id)conflictResolvers;
- (void)currentCloudSyncVersions:(id /* block */)arg1;
- (id)dataManager;
- (void)deleteMetadatumForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (bool)enableCloudSync;
- (id)entityName;
- (void)fetchMetadataIncludingDeleted:(bool)arg1 completion:(id /* block */)arg2;
- (void)getMetadataChangesSince:(id)arg1 completion:(id /* block */)arg2;
- (id)globalMetadataDataSource;
- (void)hasSaltChangedWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithCloudDataSource:(id)arg1;
- (void)metadataValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)metadatumForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)metadatumIncludingDeleted:(bool)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (id)objectModel;
- (void)removeConflictResolverForKey:(id)arg1;
- (void)removeMetadataForSaltedHashedRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)resolvedMetadataValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)saltVersionIdentifierManager;
- (void)setChangeTokenController:(id)arg1;
- (void)setConflictResolver:(id /* block */)arg1 forKey:(id)arg2;
- (void)setConflictResolvers:(id)arg1;
- (void)setDataManager:(id)arg1;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setGlobalMetadataDataSource:(id)arg1;
- (void)setMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setMetadatum:(id)arg1 completion:(id /* block */)arg2;
- (void)setObjectModel:(id)arg1;
- (void)setSaltVersionIdentifierManager:(id)arg1;
- (void)setSyncManager:(id)arg1;
- (void)signalSyncToCKForSyncManager:(id)arg1;
- (id)syncManager;
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(id /* block */)arg3;
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(id /* block */)arg2;
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(id /* block */)arg2;

@end
