
@interface CLMinimumAltitudeCondition : CLCondition <NSSecureCoding> {
    double  _altitude;
}

@property (nonatomic, readonly) double altitude;

+ (bool)supportsSecureCoding;

- (double)altitude;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAltitude:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
