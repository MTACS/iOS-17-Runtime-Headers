
@interface PPSMetricMonitor : NSObject <PPSMetricMonitorClientInterface> {
    PPSMetricMonitorConfiguration * _config;
    NSXPCConnection * _connection;
    NSString * _currentProcessName;
    int  _currentProcessPID;
    <PPSMetricMonitorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _isInterrupted;
    long long  _monitoringState;
    <PPSMetricMonitorServiceInterface> * _remoteProxy;
    NSObject<OS_dispatch_queue> * _xpcMessagingQueue;
}

@property (retain) PPSMetricMonitorConfiguration *config;
@property (retain) NSXPCConnection *connection;
@property (retain) NSString *currentProcessName;
@property int currentProcessPID;
@property (nonatomic) <PPSMetricMonitorDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property bool isInterrupted;
@property long long monitoringState;
@property (retain) <PPSMetricMonitorServiceInterface> *remoteProxy;
@property (retain) NSObject<OS_dispatch_queue> *xpcMessagingQueue;

- (void).cxx_destruct;
- (void)_handleXPCInterruption;
- (void)_resetMonitoringState;
- (void)_resumeMonitoring;
- (void)_setUpXPCConnectionWithConfig:(id)arg1;
- (id)config;
- (id)connection;
- (id)currentProcessName;
- (int)currentProcessPID;
- (id)delegate;
- (id)delegateQueue;
- (void)endWithError:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)isInterrupted;
- (long long)monitoringState;
- (id)remoteProxy;
- (void)setConfig:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentProcessName:(id)arg1;
- (void)setCurrentProcessPID:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setIsInterrupted:(bool)arg1;
- (void)setMonitoringState:(long long)arg1;
- (void)setRemoteProxy:(id)arg1;
- (void)setXpcMessagingQueue:(id)arg1;
- (bool)startMonitoringProcessWithName:(id)arg1 error:(id*)arg2;
- (bool)startMonitoringProcessWithPID:(int)arg1 error:(id*)arg2;
- (void)startMonitoringSystemMetricsOnly;
- (bool)startMonitoringSystemMetricsWithError:(id*)arg1;
- (void)stopMonitoring;
- (void)updateWithMetrics:(id)arg1;
- (id)xpcMessagingQueue;

@end
