
@interface PPTopicReadWriteClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_doDeletionSyncCallWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 syncCall:(id /* block */)arg3;
- (bool)_doSyncCallWithError:(id*)arg1 syncCall:(id /* block */)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)computeAndCacheTopicScores:(id*)arg1;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllTopicsWithTopicId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 exactMatchesInSourceText:(id)arg6 error:(id*)arg7;
- (id)init;

@end
