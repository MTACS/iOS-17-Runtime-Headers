
@interface BSServiceConnectionEndpointMonitor : NSObject <BSInvalidatable, BSServiceMonitor> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    <BSServiceConnectionEndpointMonitorDelegate> * _lock_delegate;
    NSDictionary * _lock_endpointToEnvironments;
    bool  _lock_invalidated;
    NSMutableSet * _lock_serialCallOut_endpoints;
    BSServiceManager * _manager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    <BSInvalidatable> * _registrationLock_assertion;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BSServiceConnectionEndpointMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *service;
@property (readonly) Class superclass;

+ (id)monitorForService:(id)arg1;

- (void).cxx_destruct;
- (void)activate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)endpointsForEnvironment:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1;
- (id)service;
- (void)setDelegate:(id)arg1;

@end
