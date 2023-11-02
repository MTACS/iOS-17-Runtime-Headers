
@interface HMDAccessoryFirmwareUpdateTimeWindowPolicy : HMDAccessoryFirmwareUpdatePolicy <HMFTimerDelegate, NSCopying> {
    NSDateFormatter * _dateFormatter;
    HMFTimer * _reevaluateTimer;
    HMDAccessoryFirmwareUpdateTimeWindow * _updateTimeWindow;
}

@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFTimer *reevaluateTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDAccessoryFirmwareUpdateTimeWindow *updateTimeWindow;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startReevaluateTimer:(id)arg1;
- (void)_stopReevaluateTimer;
- (void)configure;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormatter;
- (bool)evaluate;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 timeWindow:(id)arg2 workQueue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)reevaluateTimer;
- (void)setDateFormatter:(id)arg1;
- (void)setReevaluateTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)updateTimeWindow;

@end
