
@interface HDRPOxygenSaturationSessionServer : HDStandardTaskServer <HKRPOxygenSaturationSessionServerInterface, HLOxygenSaturationSessionDelegate> {
    double  _expectedDuration;
    NSDate * _expectedEndDate;
    NSObject<OS_dispatch_queue> * _queue;
    HLOxygenSaturationSession * _sensorSession;
    long long  _sessionState;
    double  _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expectedDuration;
@property (nonatomic, retain) NSDate *expectedEndDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HLOxygenSaturationSession *sensorSession;
@property (nonatomic) long long sessionState;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_queue_abortSensorSession;
- (void)_queue_abortWithCompletion:(id /* block */)arg1;
- (void)_queue_notifyClientDidEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;
- (void)_queue_notifyClientDidSendFeedback:(unsigned long long)arg1;
- (void)_queue_notifyClientDidStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
- (void)_queue_startWithCompletion:(id /* block */)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (double)expectedDuration;
- (id)expectedEndDate;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)oxygenSaturationSession:(id)arg1 didBeginWithStartTime:(double)arg2 expectedDuration:(double)arg3;
- (void)oxygenSaturationSession:(id)arg1 didEndForReason:(unsigned long long)arg2 measurement:(id)arg3;
- (void)oxygenSaturationSession:(id)arg1 feedbackDidChange:(unsigned long long)arg2;
- (id)queue;
- (id)remoteInterface;
- (void)remote_abortWithCompletion:(id /* block */)arg1;
- (void)remote_startWithCompletion:(id /* block */)arg1;
- (id)sensorSession;
- (long long)sessionState;
- (void)setExpectedDuration:(double)arg1;
- (void)setExpectedEndDate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSensorSession:(id)arg1;
- (void)setSessionState:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
