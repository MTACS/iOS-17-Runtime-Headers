
@interface PPLocalTopicStore : PPTopicStore <PPFeedbackProcessing> {
    PPTopicBlocklist * _blocklist;
    NSObject<OS_dispatch_queue> * _cacheAsyncUpdateQueue;
    NSString * _cachePath;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _cacheUpdateEnqueued;
    NSError * _cacheUpdateError;
    NSObject<OS_dispatch_queue> * _cacheUpdateQueue;
    _PASLock * _lock;
    NSCache * _modelCache;
    PPTopicStorage * _storage;
    PPTrialWrapper * _trialWrapper;
}

@property (nonatomic, readonly) PPTopicStorage *storage;

+ (id)calibrateScoredTopic:(id)arg1 calibrationTrie:(id)arg2;
+ (id)defaultStore;
+ (id)recordsForTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)cachePath:(id*)arg1;
- (id)cachedTopicScores;
- (bool)clearTopicScoresCache:(id*)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)computeAndCacheTopicScores:(id*)arg1;
- (bool)computeAndCacheTopicScoresWithShouldContinueBlock:(id /* block */)arg1 error:(id*)arg2;
- (bool)deleteAllTopicFeedbackCountsOlderThanDate:(id)arg1;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 algorithm:(unsigned long long)arg3 olderThan:(id)arg4 deletedCount:(unsigned long long*)arg5 error:(id*)arg6;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (void)disableSyncForBundleIds:(id)arg1;
- (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7;
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)init;
- (id)initWithStorage:(id)arg1 trialWrapper:(id)arg2;
- (bool)iterScoredTopicsWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3 block:(id /* block */)arg4;
- (bool)iterScoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)iterTopicRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)logDonationErrorForReason:(long long)arg1 errorCode:(unsigned long long)arg2 source:(id)arg3;
- (void)processFeedback:(id)arg1;
- (bool)pruneOrphanedTopicFeedbackCountsWithLimit:(unsigned long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedTopicsWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)scoreTopics:(id)arg1 scoringDate:(id)arg2 decayRate:(double)arg3 strictFiltering:(bool)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 streamingScorer:(id*)arg7 mlModel:(id)arg8;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (id)scoresForTopicMapping:(id)arg1 query:(id)arg2 error:(id*)arg3 clientProcessName:(id)arg4;
- (id)storage;
- (id)topicCacheSandboxExtensionToken:(id*)arg1;
- (id)topicExtractionsFromText:(id)arg1 clientProcessName:(id)arg2 error:(id*)arg3;
- (id)topicExtractionsFromText:(id)arg1 error:(id*)arg2;
- (id)topicRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 error:(id*)arg3;

@end
