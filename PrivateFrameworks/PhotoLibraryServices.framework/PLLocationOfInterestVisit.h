
@interface PLLocationOfInterestVisit : NSObject <NSSecureCoding> {
    double  _confidence;
    NSUUID * _identifier;
    PLLocationOfInterest * _locationOfInterest;
    NSDateInterval * _visitInterval;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) PLLocationOfInterest *locationOfInterest;
@property (nonatomic, readonly) NSDateInterval *visitInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;
- (void)setLocationOfInterest:(id)arg1;
- (id)visitInterval;

@end
