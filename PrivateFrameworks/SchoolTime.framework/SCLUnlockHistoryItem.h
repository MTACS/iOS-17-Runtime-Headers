
@interface SCLUnlockHistoryItem : NSObject <NSCoding, NSSecureCoding> {
    NSCalendar * _calendar;
    SCLScheduleRecurrence * _effectiveRecurrence;
    SCLScheduleTime * _scheduleEndTime;
    SCLScheduleTime * _scheduleStartTime;
    NSTimeZone * _timeZone;
    NSDateInterval * _unlockedInterval;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) SCLScheduleRecurrence *effectiveRecurrence;
@property (nonatomic, readonly) SCLScheduleTime *scheduleEndTime;
@property (nonatomic, readonly) SCLScheduleTime *scheduleStartTime;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSDateInterval *unlockedInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadEffectiveRecurrence;
- (id)calendar;
- (id)description;
- (id)effectiveRecurrence;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterval:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3;
- (id)initWithInterval:(id)arg1 calendar:(id)arg2 timeZone:(id)arg3 startTime:(id)arg4 endTime:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)scheduleEndTime;
- (id)scheduleStartTime;
- (id)timeZone;
- (id)unlockedInterval;

@end
