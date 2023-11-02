
@interface PPNamedEntityReadWriteClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_doDeletionSyncCallWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 syncCall:(id /* block */)arg3;
- (bool)_doSyncCallWithError:(id*)arg1 syncCall:(id /* block */)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 error:(id*)arg6;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)init;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeDate:(id)arg1 error:(id*)arg2;

@end
