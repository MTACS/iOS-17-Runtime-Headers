
@interface BSXPCServiceConnectionListener : NSObject <BSInvalidatable, BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent> {
    NSString * _config_eDesc;
    BSServiceQuality * _config_qos;
    bool  _isXPCService;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    NSHashTable * _lock_childConnections;
    bool  _lock_clientInvalidated;
    id /* block */  _lock_connectionHandler;
    NSString * _lock_debugDesc;
    NSObject<OS_xpc_object> * _lock_endpoint;
    id /* block */  _lock_errorHandler;
    bool  _lock_invalidated;
    NSObject<OS_xpc_object> * _lock_listener;
    bool  _lock_nonLaunching;
    NSObject<OS_dispatch_queue> * _lock_queue;
    bool  _lock_resumed;
    bool  _lock_sealed;
    NSString * _proem;
    NSString * _serviceName;
    unsigned long long  _unique;
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
- (id)init;
- (void)invalidate;
- (void)setConnectionHandler:(id /* block */)arg1;
- (void)setEndpointDescription:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setServiceQuality:(id)arg1;

@end
