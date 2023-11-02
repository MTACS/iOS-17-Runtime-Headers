
@interface HDCloudSyncSession : HDSyncSession {
    NSSet * _excludedSyncIdentities;
    NSSet * _excludedSyncStores;
    NSArray * _filteredOrderedSyncEntities;
    HDCloudSyncSequenceRecord * _sequenceRecord;
}

@property (nonatomic, retain) HDCloudSyncSequenceRecord *sequenceRecord;

- (void).cxx_destruct;
- (id)excludedSyncIdentities;
- (id)excludedSyncStores;
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(struct { int x1; int x2; })arg2;
- (bool)requiresSyncForChangesFromAnchorRangeMap:(id)arg1;
- (id)sequenceRecord;
- (void)setExcludedSyncIdentities:(id)arg1;
- (void)setExcludedSyncStores:(id)arg1;
- (void)setSequenceRecord:(id)arg1;
- (id)syncPredicate;

@end
