
@interface HKSPSleepScheduleRange : NSObject {
    NSDateComponents * _earliestBedtimeComponents;
    bool  _earliestBedtimeIsOnPreviousDay;
    NSDateComponents * _earliestWakeUpComponents;
    NSDateComponents * _latestBedtimeComponents;
    NSDateComponents * _latestWakeUpComponents;
}

@property (nonatomic, readonly, copy) NSDateComponents *earliestBedtimeComponents;
@property (nonatomic, readonly) bool earliestBedtimeIsOnPreviousDay;
@property (nonatomic, readonly, copy) NSDateComponents *earliestWakeUpComponents;
@property (nonatomic, readonly, copy) NSDateComponents *latestBedtimeComponents;
@property (nonatomic, readonly, copy) NSDateComponents *latestWakeUpComponents;

- (void).cxx_destruct;
- (id)description;
- (id)earliestBedtimeComponents;
- (bool)earliestBedtimeIsOnPreviousDay;
- (id)earliestWakeUpComponents;
- (id)initWithLatestWakeUpComponents:(id)arg1 latestBedtimeComponents:(id)arg2 earliestWakeUpComponents:(id)arg3 earliestBedtimeComponents:(id)arg4 earliestBedtimeIsOnPreviousDay:(bool)arg5;
- (id)latestBedtimeComponents;
- (id)latestWakeUpComponents;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
