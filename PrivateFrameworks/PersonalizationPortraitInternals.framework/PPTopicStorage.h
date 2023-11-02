
@interface PPTopicStorage : NSObject {
    PPSQLDatabase * _db;
    id  _deletionObserver;
    PPDKStorage * _dkStorage;
    NSObject<OS_dispatch_queue> * _populateDatabaseQueue;
    PPSourceStorage * _sourceStorage;
    PPRecordStorageHelper * _storageHelper;
    PPTrialWrapper * _trialWrapper;
}

@property (nonatomic, readonly) NSString *parentDirectory;

- (void).cxx_destruct;
- (void)clearRemoteRecordsMissingFromDuetWithShouldContinueBlock:(id /* block */)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (id)clusterIdentifiersExistingBeforeDate:(id)arg1;
- (void)dealloc;
- (bool)decayFeedbackCountsWithDecayRate:(double)arg1 shouldContinueBlock:(id /* block */)arg2;
- (id)decayedFeedbackCountsForClusterIdentifier:(id)arg1;
- (bool)deleteAllTopicFeedbackCountRecordsOlderThanDate:(id)arg1;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 atLeastOneTopicRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneTopicRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned long long)arg4 atLeastOneTopicRemoved:(bool*)arg5 deletedCount:(unsigned long long*)arg6 error:(id*)arg7;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneTopicRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(bool*)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneTopicRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsOlderThanDate:(id)arg1 atLeastOneTopicRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(bool*)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 atLeastOneTopicRemoved:(bool*)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (void)disableSyncForBundleIds:(id)arg1;
- (bool)donateTopicFeedback:(id)arg1;
- (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 exactMatchesInSourceText:(id)arg7 error:(id*)arg8;
- (unsigned int)duetReadBatchSize;
- (double)duetWriteBatchInterval;
- (unsigned int)duetWriteBatchSize;
- (void)exportRecordsToDKWithShouldContinueBlock:(id /* block */)arg1;
- (id)firstDonationSourceCountsWithShouldContinueBlock:(id /* block */)arg1;
- (void)fixupDKEventsMetadataWithShouldContinueBlock:(id /* block */)arg1;
- (void)fixupDKEventsWithShouldContinueBlock:(id /* block */)arg1;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)arg1 isComplete:(bool*)arg2 shouldContinueBlock:(id /* block */)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(bool)arg4 trialWrapper:(id)arg5;
- (bool)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)lastDonationTimeForSourcesBeforeDate:(id)arg1;
- (id)parentDirectory;
- (void)processNewDKEventDeletions;
- (bool)pruneOrphanedTopicFeedbackCountRecordsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)sourceStats:(unsigned long long)arg1 withExcludedAlgorithms:(id)arg2;
- (id)tempViewForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)thirdPartyBundleIdsFromToday;
- (unsigned int)uniqueClusterIdentifierCount;

@end
