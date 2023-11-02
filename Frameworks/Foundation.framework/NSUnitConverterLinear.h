
@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding> {
    double  _coefficient;
    double  _constant;
}

@property (readonly) double coefficient;
@property (readonly) double constant;

+ (bool)supportsSecureCoding;

- (double)baseUnitValueFromValue:(double)arg1;
- (double)coefficient;
- (double)constant;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoefficient:(double)arg1;
- (id)initWithCoefficient:(double)arg1 constant:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)valueFromBaseUnitValue:(double)arg1;

@end
