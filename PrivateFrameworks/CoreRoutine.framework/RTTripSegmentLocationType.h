
@interface RTTripSegmentLocationType : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    RTDistanceInterval * _distanceInterval;
    long long  _locationType;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) RTDistanceInterval *distanceInterval;
@property (nonatomic, readonly) long long locationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (id)distanceInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 distanceInterval:(id)arg2 locationType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)locationType;

@end
