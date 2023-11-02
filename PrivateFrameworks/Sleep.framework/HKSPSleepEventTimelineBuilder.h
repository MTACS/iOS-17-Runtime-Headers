
@interface HKSPSleepEventTimelineBuilder : NSObject {
    NSCalendar * _calendar;
    NSDate * _date;
    unsigned long long  _options;
    HKSPSleepEventTimelineResults * _results;
    HKSPSleepScheduleModel * _sleepScheduleModel;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) HKSPSleepEventTimelineResults *results;
@property (nonatomic, readonly) HKSPSleepScheduleModel *sleepScheduleModel;

+ (id)builderWithSleepScheduleModel:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (void)_addSessionToTimelineWithWakeUpDate:(id)arg1 bedtimeDate:(id)arg2 windDownDate:(id)arg3 occurrence:(id)arg4;
- (void)_adjustSessionForConfirmedWakeUp;
- (void)_adjustSessionForSnoozedWakeUpAlarm;
- (void)_adjustSessions;
- (void)_gatherSessions;
- (void)_gatherSessionsForOccurrence:(id)arg1 overrideOccurrence:(id)arg2;
- (void)_gatherSessionsForValidationForOccurrence:(id)arg1 overrideOccurrence:(id)arg2;
- (void)_validateSessionAdjustmentForSnoozedWakeUpAlarm;
- (void)_validateSessionAdjustments;
- (id)_windDownDateForBedtimeDate:(id)arg1;
- (id)buildTimelineWithOptions:(unsigned long long)arg1;
- (id)calendar;
- (id)date;
- (id)initWithSleepScheduleModel:(id)arg1 date:(id)arg2;
- (unsigned long long)options;
- (id)results;
- (id)sleepScheduleModel;

@end
