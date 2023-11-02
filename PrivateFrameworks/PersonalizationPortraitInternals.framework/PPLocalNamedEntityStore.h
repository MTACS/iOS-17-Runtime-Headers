
@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {
    NSString * _invalidationNotificationOverride;
    _PASLazyResult * _lazyContactStoreForMapsFeedback;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _mapsPrefetchQueue;
    NSString * _meaningfulChangeNotificationOverride;
    NSCache * _modelCache;
    PPNamedEntityStorage * _storage;
    PPLocalTopicStore * _topicStoreForNamedEntityMapping;
    PPTrialWrapper * _trialWrapper;
}

@property (nonatomic, retain) NSString *invalidationNotificationOverride;
@property (nonatomic, retain) NSString *meaningfulChangeNotificationOverride;
@property (nonatomic, readonly) PPNamedEntityStorage *storage;

+ (id)defaultStore;
+ (id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg1 perRecordDecayRate:(float)arg2;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)arg1;
- (void)disableSyncForBundleIds:(id)arg1;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 error:(id*)arg6;
- (bool)filterExistingNamedEntitiesWithShouldContinueBlock:(id /* block */)arg1;
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)init;
- (id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2 lazyContactStoreForMapsFeedback:(id)arg3 trialWrapper:(id)arg4;
- (id)invalidationNotificationOverride;
- (bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (id)meaningfulChangeNotificationOverride;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id*)arg3;
- (void)processFeedback:(id)arg1;
- (bool)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;
- (void)runWithLockAcquired:(id /* block */)arg1;
- (id)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 streamingScorer:(id*)arg7 mlModel:(id)arg8;
- (void)setInvalidationNotificationOverride:(id)arg1;
- (void)setMeaningfulChangeNotificationOverride:(id)arg1;
- (id)storage;

@end
