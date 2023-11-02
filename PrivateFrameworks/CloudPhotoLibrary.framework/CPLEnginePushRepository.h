
@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject> {
    CPLBatchExtractionStrategy * _extractionStrategy;
    double  _lastApproximativeUploadRate;
    NSString * _lastStrategyName;
    NSDate * _lastUploadRateUpdateDate;
    NSMutableDictionary * _propertiesPerClass;
    NSMutableDictionary * _pushObservers;
    NSObject<OS_dispatch_queue> * _timingStatisticQueue;
    NSMutableDictionary * _timingStatistics;
    NSObject<OS_dispatch_queue> * _uploadRateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumResourceSizePerBatch;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_outgoingResources;
- (id)_timingStatisticStatuses;
- (bool)acknowledgeContributorsUpdates:(id)arg1 error:(id*)arg2;
- (void)addPushObserver:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)changeWithScopedIdentifier:(id)arg1;
- (bool)checkInBatchStorage:(id)arg1 error:(id*)arg2;
- (id)checkOutBatchStorageWithPriority:(unsigned long long)arg1 error:(id*)arg2;
- (id)contributorsUpdatesForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
- (id)countPerFlagsForScopeWithIdentifier:(id)arg1;
- (bool)deleteAllChangesWithError:(id*)arg1;
- (bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
- (bool)deleteSharingFlagsWithMaxCount:(unsigned long long)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)discardChangeWithScopedIdentifier:(id)arg1 error:(id*)arg2;
- (id)extractionStrategy;
- (bool)getRelatedScopedIdentifier:(id*)arg1 forRecordWithScopedIdentifier:(id)arg2;
- (bool)hasAnyChangeWithRelatedScopedIdentifier:(id)arg1;
- (bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (bool)hasChangesWithPriorityGreaterThanPriority:(unsigned long long)arg1 inScopeWithIdentifier:(id)arg2;
- (bool)hasChangesWithPriorityLowerThanPriority:(unsigned long long)arg1 inScopeWithIdentifier:(id)arg2;
- (bool)hasChangesWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (bool)hasChangesWithScopeFilter:(id)arg1;
- (bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (unsigned long long)maximumResourceSizePerBatch;
- (unsigned long long)minimumPriorityForChangesInScopeWithIdentifier:(id)arg1;
- (void)notePushRepositoryStoredSomeChanges;
- (bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(bool*)arg3 error:(id*)arg4;
- (bool)reinjectChange:(id)arg1 priority:(unsigned long long)arg2 error:(id*)arg3;
- (bool)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id*)arg2 error:(id*)arg3;
- (void)removePushObserverWithIdentifier:(id)arg1;
- (bool)resetPriorityForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(bool*)arg3 error:(id*)arg4;
- (unsigned long long)scopeType;
- (id)scopedIdentifiersForChangesWithFlag:(long long)arg1 forScopeWithIdentifier:(id)arg2;
- (void)setExtractionStrategy:(id)arg1;
- (id)status;
- (bool)storeChange:(id)arg1 pushContext:(id)arg2 error:(id*)arg3;
- (bool)storeExtractedBatch:(id)arg1 error:(id*)arg2;
- (id)storedExtractedBatch;
- (void)updateApproximativeUploadRate:(double)arg1;
- (void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(bool)arg4 cancelled:(bool)arg5;

@end
