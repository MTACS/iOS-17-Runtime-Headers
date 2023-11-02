
@interface RTTripSegment : NSObject <NSCopying, NSSecureCoding> {
    NSDateInterval * _dateInterval;
    NSUUID * _identifier;
    long long  _modeOfTransportation;
    double  _tripDistance;
    double  _tripDistanceUncertainty;
}

@property (nonatomic, readonly, copy) NSDateInterval *dateInterval;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) long long modeOfTransportation;
@property (nonatomic, readonly) double tripDistance;
@property (nonatomic, readonly) double tripDistanceUncertainty;

+ (id)mergeTripSegment:(id)arg1 other:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTripSegmentIdentifier:(id)arg1 dateInterval:(id)arg2 tripDistance:(double)arg3 tripDistanceUncertainty:(double)arg4 modeOfTransportation:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (long long)modeOfTransportation;
- (double)tripDistance;
- (double)tripDistanceUncertainty;

@end
