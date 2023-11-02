
@interface SLCollaborationHandshakeController : SLDServiceProxy <SLRemoteTaskManagerDelegate> {
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
- (id)_handshakeService;
- (id)_sandboxExtensionIssueFileURL:(id)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2;
- (void)addParticipantHandles:(id)arg1 withFileURL:(id)arg2 metadata:(id)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (void)addParticipantHandles:(id)arg1 withMetadata:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (void)generateProofForIdentity:(id)arg1 collaborationIdentifier:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (id)initWithTargetSerialQueue:(id)arg1 synchronous:(bool)arg2;
- (void)removeParticipantIdentities:(id)arg1 withFileURL:(id)arg2 metadata:(id)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (void)removeParticipantIdentities:(id)arg1 withMetadata:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (void)setSynchronous:(bool)arg1;
- (void)setTargetSerialQueue:(id)arg1;
- (void)setTaskManager:(id)arg1;
- (void)startCollaborationWithFileURL:(id)arg1 metadata:(id)arg2 participants:(id)arg3 timeout:(double)arg4 completion:(id /* block */)arg5;
- (void)startCollaborationWithMetadata:(id)arg1 participants:(id)arg2 timeout:(double)arg3 completion:(id /* block */)arg4;
- (bool)synchronous;
- (id)targetSerialQueue;
- (id)taskManager;
- (id)taskServiceWithErrorHandler:(id /* block */)arg1;
- (void)verifySourceBundleIdentifierFromMetadata:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;

@end
