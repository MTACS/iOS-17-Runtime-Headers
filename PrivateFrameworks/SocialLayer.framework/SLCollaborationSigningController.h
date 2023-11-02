
@interface SLCollaborationSigningController : SLDServiceProxy <SLRemoteTaskManagerDelegate> {
    bool  _synchronous;
    NSObject<OS_dispatch_queue> * _targetSerialQueue;
    SLRemoteTaskManager * _taskManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool synchronous;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetSerialQueue;
@property (nonatomic, retain) SLRemoteTaskManager *taskManager;

- (void).cxx_destruct;
- (id)initWithTargetSerialQueue:(id)arg1 synchronous:(bool)arg2;
- (void)setSynchronous:(bool)arg1;
- (void)setTargetSerialQueue:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (void)signData:(id)arg1 forCollaborationIdentifier:(id)arg2 trackingPreventionSalt:(id)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (void)signSourceProcessWithMetadata:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (bool)synchronous;
- (id)targetSerialQueue;
- (id)taskManager;
- (id)taskServiceWithErrorHandler:(id /* block */)arg1;

@end
