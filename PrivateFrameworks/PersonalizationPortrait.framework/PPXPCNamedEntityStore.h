
@interface PPXPCNamedEntityStore : PPNamedEntityStore {
    PPClientFeedbackHelper * _clientFeedbackHelper;
    _PASLock * _monitoringSessionsLock;
}

- (void).cxx_destruct;
- (id)_init;
- (id)_lastCallDateForQuery:(id)arg1;
- (void)_loadNamedEntityRecordsForQuery:(id)arg1 withDelegate:(id)arg2;
- (id)_monitoringHelperForQuery:(id)arg1 createIfNeeded:(bool)arg2;
- (id /* block */)_recordGeneratorForQuery:(id)arg1;
- (void)_sendChangesToDelegatesForQuery:(id)arg1;
- (void)_sendResetToAllDelegatesForQuery:(id)arg1;
- (void)_setLastCallDateForQuery:(id)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (id)clientIdentifier;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 error:(id*)arg6;
- (bool)flushDonationsWithError:(id*)arg1;
- (bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2;
- (bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 query:(id)arg2 error:(id*)arg3;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;
- (void)setClientIdentifier:(id)arg1;
- (void)unloadMonitoringDelegate:(id)arg1;

@end
