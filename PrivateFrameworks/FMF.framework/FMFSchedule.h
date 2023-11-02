
@interface FMFSchedule : NSObject <NSCopying, NSSecureCoding> {
    long long  _daysOfWeek;
    unsigned long long  _endHour;
    unsigned long long  _endMin;
    NSCalendar * _gregorian;
    unsigned long long  _spanDays;
    unsigned long long  _startHour;
    unsigned long long  _startMin;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) NSCalendar *_gregorian;
@property (nonatomic) long long daysOfWeek;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) unsigned long long endHour;
@property (nonatomic) unsigned long long endMin;
@property (nonatomic, readonly) NSString *localizedDaysOfWeekString;
@property (nonatomic, readonly) NSString *localizedEndTimeString;
@property (nonatomic, readonly) NSString *localizedStartTimeString;
@property (nonatomic) unsigned long long spanDays;
@property (nonatomic) unsigned long long startHour;
@property (nonatomic) unsigned long long startMin;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (readonly) NSString *validityError;

+ (id)_dateFromHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2;
+ (id)_dayStringForDayOfWeek:(long long)arg1;
+ (void)_enumerateDaysOfWeekInFMFDaysOfWeek:(long long)arg1 callback:(id /* block */)arg2;
+ (id)_stringForDaysOfWeek:(long long)arg1;
+ (id)firstDateFromDates:(id)arg1 order:(long long)arg2;
+ (id)localizedDaysOfWeekStringFor:(long long)arg1;
+ (id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2;
+ (id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_daysOfWeek;
- (id)_endDateForStartDate:(id)arg1;
- (id)_gregorian;
- (id)_nextStartDateOnDayOfWeek:(long long)arg1 from:(id)arg2 options:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)daysOfWeek;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endHour;
- (unsigned long long)endMin;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isCurrentAt:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDaysOfWeekString;
- (id)localizedEndTimeString;
- (id)localizedStartTimeString;
- (id)nextStartDateFrom:(id)arg1 options:(unsigned long long)arg2;
- (id)nextStartOrEndDateFrom:(id)arg1;
- (id)previousStartDateFrom:(id)arg1;
- (void)setDaysOfWeek:(long long)arg1;
- (void)setEndHour:(unsigned long long)arg1;
- (void)setEndMin:(unsigned long long)arg1;
- (void)setSpanDays:(unsigned long long)arg1;
- (void)setStartHour:(unsigned long long)arg1;
- (void)setStartMin:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (unsigned long long)spanDays;
- (unsigned long long)startHour;
- (unsigned long long)startMin;
- (id)timeZone;
- (id)validityError;

@end
