
@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate, HMFLogging, HMFTimerDelegate> {
    HMDIDSActivityMonitor * _activityMonitor;
    <HMDIDSActivityMonitorBroadcasterPushTokenDataSource> * _dataSource;
    HMFTimer * _debounceTimer;
    bool  _isBroadcasting;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDXPCActivityInterfacing> * _xpcActivityInterface;
}

@property (readonly) HMDIDSActivityMonitor *activityMonitor;
@property (retain) <HMDIDSActivityMonitorBroadcasterPushTokenDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) <HMDXPCActivityInterfacing> *xpcActivityInterface;

+ (id)criteria;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_refreshBroadcastSubscription;
- (void)_registerForXPCPoll;
- (id)activityMonitor;
- (void)configureWithDataSource:(id)arg1;
- (void)configureWithQueue:(id)arg1;
- (id)dataSource;
- (void)dataSourceDidUpdate:(id)arg1;
- (id)initWithActivityMonitor:(id)arg1;
- (id)initWithActivityMonitor:(id)arg1 timer:(id)arg2 xpcActivityInterface:(id)arg3;
- (id)logIdentifier;
- (id)queue;
- (void)setDataSource:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)xpcActivityInterface;

@end
