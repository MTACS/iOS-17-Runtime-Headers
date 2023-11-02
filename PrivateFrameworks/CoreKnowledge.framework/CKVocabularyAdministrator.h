
@interface CKVocabularyAdministrator : NSObject {
    NSObject<CKVAdminService> * _adminService;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeout;
}

+ (void)initialize;
+ (id)makeAdministrator;

- (void).cxx_destruct;
- (long long)_synchronouslyWrapRequest:(id /* block */)arg1;
- (void)_triggerMigration:(bool)arg1 completeAfterTrigger:(bool)arg2 completion:(id /* block */)arg3;
- (long long)beginEvaluation:(id)arg1 options:(unsigned short)arg2;
- (void)beginEvaluation:(id)arg1 options:(unsigned short)arg2 completion:(id /* block */)arg3;
- (void)captureVocabularySnapshot:(id /* block */)arg1;
- (void)captureVocabularySnapshot:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllItemsWithUserId:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteAllItemsWithUserId:(id)arg1 deviceId:(id)arg2 completion:(id /* block */)arg3;
- (long long)endEvaluation;
- (void)endEvaluation:(id /* block */)arg1;
- (long long)executeEvaluationTask:(unsigned short)arg1;
- (void)executeEvaluationTask:(unsigned short)arg1 completion:(id /* block */)arg2;
- (void)findProfileSnapshotsNearDate:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithAdminService:(id)arg1 queue:(id)arg2;
- (id)initWithAdminService:(id)arg1 timeout:(double)arg2 queue:(id)arg3;
- (id)rawSpeechProfileConverter;
- (id)rawSpeechProfileConverterOmittingItemTypes:(id)arg1;
- (void)rebuildSpeechProfileForUserId:(id)arg1 completion:(id /* block */)arg2;
- (id)simulateEventHandling:(bool)arg1;
- (void)triggerMaintenance:(id /* block */)arg1;
- (void)triggerMigration:(id /* block */)arg1;
- (void)triggerMigration:(bool)arg1 completion:(id /* block */)arg2;

@end
