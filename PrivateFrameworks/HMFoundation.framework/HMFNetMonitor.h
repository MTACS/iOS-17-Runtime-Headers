
@interface HMFNetMonitor : HMFObject <HMFLogging> {
    <HMFNetMonitorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMFNetAddress * _netAddress;
    bool  _reachable;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMFNetMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HMFNetAddress *netAddress;
@property (readonly) unsigned long long reachabilityPath;
@property (getter=isReachable) bool reachable;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initWithNetAddress:(id)arg1;
- (id)initWithNetService:(id)arg1;
- (bool)isReachable;
- (id)netAddress;
- (unsigned long long)reachabilityPath;
- (void)setDelegate:(id)arg1;
- (void)setReachable:(bool)arg1;

@end
