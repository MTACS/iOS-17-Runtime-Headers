
@interface HKSPSleepEventTimelineResults : NSObject {
    HKSPMutableSleepSchedule * _mutableValidSleepSchedule;
    HKSPSleepSchedule * _originalSleepSchedule;
    bool  _sleepScheduleInvalid;
    unsigned long long  _sleepScheduleInvalidReason;
    bool  _snoozeFireDateNeedsReset;
    HKSPSleepEventTimeline * _timeline;
    HKSPSleepEventTimeline * _unadjustedTimeline;
}

@property (nonatomic, retain) HKSPMutableSleepSchedule *mutableValidSleepSchedule;
@property (nonatomic, retain) HKSPSleepSchedule *originalSleepSchedule;
@property (nonatomic) bool sleepScheduleInvalid;
@property (nonatomic) unsigned long long sleepScheduleInvalidReason;
@property (nonatomic) bool snoozeFireDateNeedsReset;
@property (nonatomic, retain) HKSPSleepEventTimeline *timeline;
@property (nonatomic, retain) HKSPSleepEventTimeline *unadjustedTimeline;
@property (nonatomic, readonly) HKSPSleepSchedule *validSleepSchedule;

- (void).cxx_destruct;
- (id)mutableValidSleepSchedule;
- (id)originalSleepSchedule;
- (void)setMutableValidSleepSchedule:(id)arg1;
- (void)setOriginalSleepSchedule:(id)arg1;
- (void)setSleepScheduleInvalid:(bool)arg1;
- (void)setSleepScheduleInvalidReason:(unsigned long long)arg1;
- (void)setSnoozeFireDateNeedsReset:(bool)arg1;
- (void)setTimeline:(id)arg1;
- (void)setUnadjustedTimeline:(id)arg1;
- (bool)sleepScheduleInvalid;
- (unsigned long long)sleepScheduleInvalidReason;
- (bool)snoozeFireDateNeedsReset;
- (id)timeline;
- (id)unadjustedTimeline;
- (id)validSleepSchedule;

@end
