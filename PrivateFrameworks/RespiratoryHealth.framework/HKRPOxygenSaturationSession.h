
@interface HKRPOxygenSaturationSession : NSObject <HKRPOxygenSaturationSessionClientInterface, _HKXPCExportable> {
    <HKRPOxygenSaturationSessionDelegate> * _delegate;
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKRPOxygenSaturationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)abortWithCompletion:(id /* block */)arg1;
- (void)clientRemote_didEndWithReason:(long long)arg1 saturation:(id)arg2 barometricPressure:(id)arg3 averageHeartRate:(id)arg4 averageHeartRateUUID:(id)arg5 error:(id)arg6;
- (void)clientRemote_didSendFeedback:(unsigned long long)arg1;
- (void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)startWithCompletion:(id /* block */)arg1;

@end
