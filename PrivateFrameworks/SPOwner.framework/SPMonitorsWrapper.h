
@interface SPMonitorsWrapper : NSObject <SPPowerMonitorDelegate> {
    <SPMonitorsWrapperDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _isRunning;
    NSDate * _lastStateChangeDate;
    SPNetworkMonitor * _networkMonitor;
    NSDate * _nextStateChangeDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPMonitorsWrapperDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isRunning;
@property (nonatomic, retain) NSDate *lastStateChangeDate;
@property (nonatomic, retain) SPNetworkMonitor *networkMonitor;
@property (nonatomic, retain) NSDate *nextStateChangeDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithBeaconManager:(id)arg1 delegateQueue:(id)arg2;
- (bool)isNetworkUp;
- (bool)isRunning;
- (id)lastStateChangeDate;
- (id)networkMonitor;
- (id)nextStateChangeDate;
- (void)pause;
- (unsigned long long)powerState;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIsRunning:(bool)arg1;
- (void)setLastStateChangeDate:(id)arg1;
- (void)setNetworkMonitor:(id)arg1;
- (void)setNextStateChangeDate:(id)arg1;
- (void)start;
- (void)stop;

@end
