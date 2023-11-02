
@interface SCLSchedule : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly) NSArray *recurrences;
@property (nonatomic, readonly) long long scheduledDays;
@property (nonatomic, readonly) NSArray *uniformTimeIntervals;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeForDay:(long long)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isScheduledForDay:(long long)arg1;
- (bool)isValid;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recurrences;
- (id)recurrencesForDay:(long long)arg1;
- (long long)scheduledDays;
- (id)startTimeForDay:(long long)arg1;
- (id)timeIntervalsForDay:(long long)arg1;
- (id)uniformTimeIntervals;

@end
