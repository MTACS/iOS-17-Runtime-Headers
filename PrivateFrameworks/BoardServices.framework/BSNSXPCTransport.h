
@interface BSNSXPCTransport : NSObject <BSNSXPCConnectionConfiguring, _NSXPCTransport> {
    bool  _activateOnResume;
    _BSNSXPCInvalidCallbackTracking * _configured_invalidCallbackTracking;
    BSXPCServiceConnection * _connection;
    NSString * _explanation;
    bool  _faultOnSuspend;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_faultedOnSuspend;
    unsigned char  _messageOptions;
    id /* block */  _perMessageAssertionProvider;
    NSArray * _perMessageAttributes;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)cancel;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (int)processIdentifier;
- (void)resume;
- (void)sendBarrierBlock:(id /* block */)arg1;
- (void)sendMessage:(id)arg1;
- (void)sendMessageWithReply:(id)arg1 onQueue:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)sendMessageWithReplySync:(id)arg1;
- (void)sendNotification:(id)arg1;
- (void)setActivateOnResume;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFaultOnSuspend;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)setPerMessageAssertionAttributes:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)suspend;

@end
