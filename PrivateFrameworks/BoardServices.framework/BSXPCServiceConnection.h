
@interface BSXPCServiceConnection : NSObject <BSInvalidatable, BSXPCServiceConnectionAuditTokenUpdater, BSXPCServiceConnectionParent> {
    <BSServiceDispatchingQueue> * _configured_connectionQueue;
    NSObject<OS_dispatch_queue> * _configured_underlyingTargetQueue;
    BSXPCServiceConnectionContext * _context;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    unsigned int  _lock_activationGeneration;
    BSXPCServiceConnectionActivationMessage * _lock_activationMessage;
    BSXPCServiceConnectionMessageReply * _lock_activationReply;
    BSAuditToken * _lock_auditToken;
    NSMutableArray * _lock_childConnections;
    bool  _lock_clientInvalidated;
    bool  _lock_clientInvalidatedExplicitly;
    bool  _lock_configured;
    NSObject<OS_xpc_object> * _lock_connection;
    NSMutableArray * _lock_connectionActivatedEvents;
    NSMutableArray * _lock_connectionEstablishedEvents;
    bool  _lock_established;
    BSXPCServiceConnectionEventHandler * _lock_eventHandler;
    bool  _lock_invalidated;
    BSXPCServiceConnectionMessage * _lock_invalidationMessage;
    NSObject<OS_xpc_object> * _lock_lastKnownConnection;
    <BSXPCServiceConnectionParent> * _lock_parent;
    BSXPCServiceConnectionPeer * _lock_peer;
    bool  _lock_remotelyInvalidated;
    bool  _lock_sendsMustWaitForEstablished;
    NSString * _proem;
    RBSTarget * _remoteAssertionTarget;
}

@property (getter=_isClientInvalidated, nonatomic, readonly) bool _clientInvalidated;
@property (getter=_isInvalidated, nonatomic, readonly) bool _invalidated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateChildConnection:(id)arg1;
- (bool)_isClientInvalidated;
- (bool)_isInvalidated;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)invalidate;
- (void)updateAuditTokenFromReplyMessage:(id)arg1 fromActivationGeneration:(unsigned int)arg2;

@end
