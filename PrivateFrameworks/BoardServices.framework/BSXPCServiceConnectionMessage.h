
@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSInvalidatable, BSXPCServiceConnectionMessage> {
    unsigned int  _activationGeneration;
    <BSXPCServiceConnectionAuditTokenUpdater> * _auditTokenUpdater;
    id /* block */  _completion;
    <BSXPCServiceConnectionHandshake> * _handshake;
    bool  _notification;
    <BSServiceDispatchingQueue> * _replyQueue;
    int  _sendFlag;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createReply;
- (bool)expectsReply;
- (id)initWithMessage:(id)arg1;
- (void)invalidate;
- (bool)send;
- (bool)sendSynchronously;
- (id)sendSynchronouslyWithError:(out id*)arg1;

@end
