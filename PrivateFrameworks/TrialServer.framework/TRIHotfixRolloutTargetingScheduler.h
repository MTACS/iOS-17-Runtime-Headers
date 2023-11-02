
@interface TRIHotfixRolloutTargetingScheduler : NSObject <TRIHotfixRolloutTargetingSchedulerProtocol> {
    <TRITaskQueuing> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TRITaskQueuing> *queue;
@property (readonly) Class superclass;

+ (id)_xpcActivityCriteriaWithRunDelay:(double)arg1 allowAnyNetworkingAndBatteryUsage:(bool)arg2;

- (void).cxx_destruct;
- (void)_scheduleTaskQueueActivityWithDelay:(double)arg1 allowingAnyNetworkingAndBatteryUsage:(bool)arg2;
- (id)initWithTaskQueue:(id)arg1;
- (id)queue;
- (void)scheduleHotfixForDeployment:(id)arg1 allowingAnyNetworkingAndBatteryUsage:(bool)arg2 runDelay:(double)arg3;

@end
