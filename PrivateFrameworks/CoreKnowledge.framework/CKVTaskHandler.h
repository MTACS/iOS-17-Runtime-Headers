
@interface CKVTaskHandler : NSObject {
    CKVTaskCoalescenceManager * _coalescenceManager;
    NSObject<CKVDonateTaskProvider> * _donateTaskProvider;
    NSString * _handlerName;
    CKVIndexManager * _indexManager;
    bool  _isAdmin;
    CKVSettings * _settings;
}

+ (void)_emitNotificationForTask:(unsigned short)arg1;
+ (id)dailyDonateTasks;
+ (id)migrationDonateTasks;
+ (id)siriLanguageDependentDonateTasks;
+ (id)verificationTasks;

- (void).cxx_destruct;
- (id /* block */)_assetUpdateTaskBlockWithReason:(unsigned short)arg1;
- (id)_deletedItemIdsWithDatabaseSearcher:(id)arg1;
- (id /* block */)_destroyAllStateTaskBlockWithReason:(unsigned short)arg1;
- (bool)_didEnablementOptionsChange:(bool*)arg1;
- (bool)_didLocalizationChange:(unsigned short)arg1 isMaintenance:(bool)arg2;
- (id)_enabledDerivativeTasksForTask:(id)arg1;
- (id /* block */)_executeTaskBlock:(id /* block */)arg1 ifTaskEnabled:(unsigned short)arg2;
- (bool)_handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 shouldDefer:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id /* block */)_maintenanceTaskBlockWithReason:(unsigned short)arg1 shouldDefer:(id /* block */)arg2;
- (void)_runMigration:(unsigned short)arg1 completion:(id /* block */)arg2;
- (id /* block */)_siriLanguageChangedTaskBlockWithReason:(unsigned short)arg1;
- (id /* block */)_siriSettingsChangedTaskBlockWithReason:(unsigned short)arg1;
- (void)_submitTask:(unsigned short)arg1 reason:(unsigned short)arg2 taskBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id /* block */)_taskBlockForTask:(unsigned short)arg1 reason:(unsigned short)arg2 shouldDefer:(id /* block */)arg3;
- (id /* block */)_verificationTaskBlockForTask:(unsigned short)arg1 reason:(unsigned short)arg2;
- (id /* block */)_wakePodcastsTaskBlockWithReason:(unsigned short)arg1;
- (void)enableSimulatedTasks:(bool)arg1;
- (bool)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 completion:(id /* block */)arg3;
- (bool)handleTask:(unsigned short)arg1 reason:(unsigned short)arg2 shouldDefer:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)initWithHandlerName:(id)arg1 settings:(id)arg2 donateTaskProvider:(id)arg3 coalescenceManager:(id)arg4 indexManager:(id)arg5 isAdmin:(bool)arg6;

@end
