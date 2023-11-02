
@interface HMDAccessoryMetric : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    HMFTimer * _accessoryMetricTimer;
    HMDAccessoryDiagnosticsMetric * _diagnosticsMetric;
    HMDAccessorySessionMetric * _sessionMetric;
    double  _timerInterval;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (nonatomic, retain) HMFTimer *accessoryMetricTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMDAccessoryDiagnosticsMetric *diagnosticsMetric;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDAccessorySessionMetric *sessionMetric;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timerInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryMetricTimer;
- (id)diagnosticsMetric;
- (id)initWithAccessory:(id)arg1;
- (id)logIdentifier;
- (id)sessionMetric;
- (void)setAccessoryMetricTimer:(id)arg1;
- (void)submitMetricAndStop;
- (void)timerDidFire:(id)arg1;
- (double)timerInterval;
- (id)workQueue;

@end
