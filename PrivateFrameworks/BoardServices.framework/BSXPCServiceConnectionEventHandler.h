
@interface BSXPCServiceConnectionEventHandler : NSObject {
    id /* block */  _activationHandler;
    RBSTarget * _assertionTarget;
    id /* block */  _connectionHandler;
    id  _context;
    id /* block */  _errorHandler;
    BSXPCCoder * _initiatingContext;
    BSServiceInterface * _interface;
    id  _interfaceTarget;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned int  _lock_activationGeneration;
    NSObject<OS_xpc_object> * _lock_activeXPCConnection;
    BSXPCServiceConnection * _lock_connection;
    BSXPCServiceConnectionProxy * _lock_remoteTarget;
    NSObject<OS_dispatch_queue> * _lock_xpcConnectionTargetQueue;
    id /* block */  _messageHandler;
    NSString * _name;
    id /* block */  _noMoreChildrenHandler;
    bool  _nonLaunchingAware;
    BSServiceQuality * _serviceQuality;
    <BSServiceDispatchingQueue> * _targetDispatchingQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
