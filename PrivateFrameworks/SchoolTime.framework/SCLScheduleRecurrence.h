
@interface SCLScheduleRecurrence : NSObject <NSCopying, NSSecureCoding> {
    long long  _day;
    SCLTimeInterval * _timeInterval;
}

@property (nonatomic, readonly) long long day;
@property (nonatomic, readonly, copy) SCLTimeInterval *timeInterval;

+ (id /* block */)dayOfWeekAndStartTimeComparator;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalForActiveScheduleOnOrAfterDate:(id)arg1 calendar:(id)arg2;
- (long long)day;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(id)arg1 day:(long long)arg2;
- (bool)intersectsRecurrence:(id)arg1;
- (bool)isActiveAtDate:(id)arg1 calendar:(id)arg2;
- (bool)isContiguousWithRecurrence:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)timeInterval;

@end
