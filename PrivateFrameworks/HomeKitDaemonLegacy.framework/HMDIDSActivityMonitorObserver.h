
@interface HMDIDSActivityMonitorObserver : NSObject <HMFLogging, IDSActivityMonitorListenerDelegate> {
    HMDIDSActivityMonitor * _activityMonitor;
    <HMDIDSActivityMonitorObserverRegistrationManager> * _dataSource;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _subactivityToDelegatesMap;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (retain) <HMDIDSActivityMonitorObserverRegistrationManager> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *subactivityToDelegatesMap;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)activityMonitor;
- (void)activityMonitor:(id)arg1 didReceiveActivityUpdate:(id)arg2;
- (void)addObserver:(id)arg1 forSubActivity:(id)arg2;
- (void)configureWithDataSource:(id)arg1;
- (id)dataSource;
- (id)initWithActivityMonitor:(id)arg1;
- (id)logIdentifier;
- (void)removeObserver:(id)arg1 forSubActivity:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)startObservingPresenceForDevice:(id)arg1;
- (void)stopObservingPresenceForDevice:(id)arg1;
- (id)subactivityToDelegatesMap;

@end
