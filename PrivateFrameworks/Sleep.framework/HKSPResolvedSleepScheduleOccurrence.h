
@interface HKSPResolvedSleepScheduleOccurrence : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    HKSPSleepEvent * _bedtimeEvent;
    HKSPSleepScheduleOccurrence * _occurrence;
    HKSPSleepEvent * _wakeUpEvent;
    HKSPSleepEvent * _windDownEvent;
}

@property (nonatomic, readonly) HKSPSleepEvent *bedtimeEvent;
@property (nonatomic, readonly) NSDateInterval *bedtimeInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKSPSleepScheduleOccurrence *occurrence;
@property (nonatomic, readonly) NSDateInterval *scheduledInterval;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKSPSleepEvent *wakeUpEvent;
@property (nonatomic, readonly) HKSPSleepEvent *windDownEvent;
@property (nonatomic, readonly) NSDateInterval *windDownInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bedtimeEvent;
- (id)bedtimeInterval;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateOverrideOccurrenceForCurrentDate:(id)arg1 gregorianCalendar:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOccurrence:(id)arg1 wakeUpEvent:(id)arg2 bedtimeEvent:(id)arg3 windDownEvent:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)occurrence;
- (id)occurrenceByAdjustingEvent:(id)arg1;
- (id)occurrenceByRemovingEventWithIdentifier:(id)arg1;
- (id)scheduledInterval;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)wakeUpEvent;
- (id)windDownEvent;
- (id)windDownInterval;

@end
