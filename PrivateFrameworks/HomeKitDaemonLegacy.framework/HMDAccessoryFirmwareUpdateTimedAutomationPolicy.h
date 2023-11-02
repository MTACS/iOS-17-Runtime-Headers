
@interface HMDAccessoryFirmwareUpdateTimedAutomationPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate> {
    HMFTimer * _reevaluateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *reevaluateTimer;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_getMaxUpdateApplyEndTime;
- (id)_getTriggerFireDateBeforeEndTime:(id)arg1;
- (void)_startReevaluateTimer:(double)arg1;
- (void)_stopReevaluateTimer;
- (void)configure;
- (bool)evaluate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)reevaluateTimer;
- (void)setReevaluateTimer:(id)arg1;
- (bool)status;
- (void)timerDidFire:(id)arg1;

@end
