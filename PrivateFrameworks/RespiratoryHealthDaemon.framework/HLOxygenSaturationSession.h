
@interface HLOxygenSaturationSession : NSObject {
    <HLOxygenSaturationSessionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <HLOxygenSaturationSessionDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)abort;
- (void)begin;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 onQueue:(id)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)unitTesting_deliverFeedback:(unsigned long long)arg1;
- (void)unitTesting_endSessionWithReason:(unsigned long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5;

@end
