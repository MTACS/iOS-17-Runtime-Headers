
@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSArray * _segments;
}

@property (nonatomic, readonly) bool containsSegmentsWithAppleSleepTrackingData;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly, copy) NSArray *segments;

+ (id)sleepPeriodWithDateInterval:(id)arg1 segments:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containsSegmentsWithAppleSleepTrackingData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (double)durationForCategory:(long long)arg1 overlappingDateInterval:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)segments;

@end
