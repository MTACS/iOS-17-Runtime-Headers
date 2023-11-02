
@interface PPTopicReadWriteServerRequestHandler : NSObject <PPTopicReadWriteServerProtocol>

- (void)clearWithCompletion:(id /* block */)arg1;
- (void)cloudSyncWithCompletion:(id /* block */)arg1;
- (void)computeAndCacheTopicScores:(id /* block */)arg1;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 completion:(id /* block */)arg4;
- (void)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteAllTopicsWithTopicId:(id)arg1 completion:(id /* block */)arg2;
- (void)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 completion:(id /* block */)arg7;

@end
