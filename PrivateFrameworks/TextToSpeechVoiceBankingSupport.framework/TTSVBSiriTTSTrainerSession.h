
@interface TTSVBSiriTTSTrainerSession : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    SiriTTSTrainerSession * _session;
    NSObject<OS_dispatch_queue> * _siriTrainingQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, retain) SiriTTSTrainerSession *session;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *siriTrainingQueue;

- (void).cxx_destruct;
- (id)_replyQueue:(id)arg1;
- (id)calloutQueue;
- (void)cancelTask:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelTaskWithID:(id)arg1 replyOnQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)discardTrainingTasksReplyOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchTrainingScriptsReplyOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllTasksReplyOnQueue:(id)arg1 statusHandler:(id /* block */)arg2;
- (void)getTaskByID:(id)arg1 replyOnQueue:(id)arg2 statusHandler:(id /* block */)arg3;
- (void)getTasksByIDs:(id)arg1 replyOnQueue:(id)arg2 statusHandler:(id /* block */)arg3;
- (id)init;
- (void)installAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)installableTrainingAssets;
- (id)installedTrainingAssets;
- (id)session;
- (void)setCalloutQueue:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSiriTrainingQueue:(id)arg1;
- (id)siriTrainingQueue;
- (void)startTraining:(id)arg1 replyOnQueue:(id)arg2 trainingStartedHandler:(id /* block */)arg3;
- (void)uninstallAsset:(id)arg1;

@end
