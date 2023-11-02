
@interface CKVAdminServiceConnection : NSObject <CKVAdminService> {
    CKVIndexManager * _indexManager;
    NSObject<KVDonateServiceProvider> * _serviceProvider;
    NSObject<OS_dispatch_queue> * _serviceQueue;
    CKVSettings * _settings;
    CKVTaskHandler * _taskHandler;
}

- (void).cxx_destruct;
- (void)_donateProfile:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (bool)_isCustomerInstall:(id /* block */)arg1;
- (oneway void)beginEvaluation:(id)arg1 clean:(bool)arg2 completion:(id /* block */)arg3;
- (oneway void)captureVocabularySnapshot:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)deleteAllItemsWithUserId:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)deleteAllItemsWithUserId:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)endEvaluation:(id /* block */)arg1;
- (oneway void)fetchLocalItemsBatchWithSize:(unsigned long long)arg1 offset:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (oneway void)findProfileSnapshotsNearDate:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)finishEventSimulation:(id /* block */)arg1;
- (oneway void)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(id /* block */)arg3;
- (id)initWithServiceQueue:(id)arg1 taskHandler:(id)arg2 indexManager:(id)arg3 serviceProvider:(id)arg4 settings:(id)arg5;
- (oneway void)rebuildSpeechProfileForUserId:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)startEventSimulation:(bool)arg1 completion:(id /* block */)arg2;
- (oneway void)triggerMaintenance:(id /* block */)arg1;
- (oneway void)triggerMigration:(bool)arg1 completeAfterTrigger:(bool)arg2 completion:(id /* block */)arg3;

@end
