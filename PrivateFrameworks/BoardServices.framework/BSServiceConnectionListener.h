
@interface BSServiceConnectionListener : NSObject <BSInvalidatable, BSServiceConnectionListenerConfiguring, BSServiceListener> {
    NSString * _domain;
    NSString * _instance;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    <BSServiceConnectionListenerDelegate> * _lock_delegate;
    BSServiceConnectionEndpoint * _lock_endpoint;
    bool  _lock_invalidated;
    BSServiceManager * _manager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    <BSInvalidatable> * _registrationLock_assertion;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly, copy) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *instance;
@property (nonatomic, readonly, copy) NSString *service;
@property (readonly) Class superclass;

+ (id)extendBootstrap;
+ (id)listenerWithConfigurator:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)description;
- (void)didReceiveConnection:(id)arg1;
- (id)domain;
- (id)endpoint;
- (id)init;
- (id)instance;
- (void)invalidate;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)setService:(id)arg1;

@end
