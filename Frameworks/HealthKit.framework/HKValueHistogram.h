
@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSArray * _segments;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSArray *segments;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionOfValuesInSegmentAtIndex:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSegments:(id)arg1 dateInterval:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)segments;
- (long long)totalSampleCount;

@end
