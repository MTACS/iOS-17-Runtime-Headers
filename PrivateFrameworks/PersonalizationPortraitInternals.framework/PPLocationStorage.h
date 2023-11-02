
@interface PPLocationStorage : NSObject {
    PPSQLDatabase * _db;
    id  _deletionObserver;
    PPDKStorage * _dkStorage;
    PPSourceStorage * _sourceStorage;
    PPRecordStorageHelper * _storageHelper;
    PPTrialWrapper * _trialWrapper;
}

- (void).cxx_destruct;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (void)dealloc;
- (bool)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(id /* block */)arg2;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)arg1;
- (bool)deleteAllLocationFeedbackCountRecordsOlderThanDate:(id)arg1;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 atLeastOneLocationRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneLocationRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneLocationRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllLocationsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneLocationRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllLocationsOlderThanDate:(id)arg1 atLeastOneLocationRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)donateLocationFeedback:(id)arg1;
- (bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 error:(id*)arg6;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(bool)arg4 trialWrapper:(id)arg5;
- (bool)iterLocationRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)lastDonationTimeForSourcesBeforeDate:(id)arg1;
- (bool)pruneOrphanedLocationFeedbackCountRecordsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)sourceStats:(unsigned long long)arg1 withExcludedAlgorithms:(id)arg2;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)thirdPartyBundleIdsFromToday;

@end
