
@interface RBSProcessMonitor : NSObject <NSCopying, PAProcessStateMonitoringEnding, RBSProcessMonitorConfiguring> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    RBSProcessMonitorConfiguration * _configuration;
    bool  _configuring;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <RBSServiceLocalProtocol> * _service;
    NSMutableDictionary * _stateByIdentity;
    bool  _valid;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) RBSProcessMonitorConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long events;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int serviceClass;
@property (nonatomic, readonly, copy) NSSet *states;
@property (readonly) Class superclass;

+ (id)_monitorWithService:(id)arg1;
+ (id)_monitorWithService:(id)arg1 configuration:(id /* block */)arg2;
+ (id)monitor;
+ (id)monitorWithConfiguration:(id /* block */)arg1;
+ (id)monitorWithPredicate:(id)arg1 updateHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_handleExitEvent:(id)arg1;
- (void)_handlePreventLaunchUpdate:(id)arg1;
- (void)_handleProcessStateChange:(id)arg1;
- (id)calloutQueue;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)events;
- (id)init;
- (void)invalidate;
- (unsigned int)serviceClass;
- (void)setEvents:(unsigned long long)arg1;
- (void)setPredicates:(id)arg1;
- (void)setPreventLaunchUpdateHandle:(id /* block */)arg1;
- (void)setServiceClass:(unsigned int)arg1;
- (void)setStateDescriptor:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id)stateForIdentity:(id)arg1;
- (id)states;
- (void)updateConfiguration:(id /* block */)arg1;

@end
