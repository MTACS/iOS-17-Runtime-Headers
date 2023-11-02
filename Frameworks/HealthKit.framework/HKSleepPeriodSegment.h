
@interface HKSleepPeriodSegment : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    long long  _category;
    bool  _containsAppleSleepTrackingData;
    NSDateInterval * _dateInterval;
    NSArray * _sampleIntervals;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) bool containsAppleSleepTrackingData;
@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly, copy) NSArray *sampleIntervals;

+ (id)sleepPeriodSegmentWithDateInterval:(id)arg1 category:(long long)arg2;
+ (id)sleepPeriodSegmentWithDateInterval:(id)arg1 sampleIntervals:(id)arg2 category:(long long)arg3;
+ (id)sleepPeriodSegmentWithDateInterval:(id)arg1 sampleIntervals:(id)arg2 category:(long long)arg3 containsAppleSleepTrackingData:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)category;
- (bool)containsAppleSleepTrackingData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mergingSleepPeriodSegment:(id)arg1;
- (id)sampleIntervals;

@end
