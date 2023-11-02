
@interface FCPersonalizationLowFlowEstimationConfig : NSObject <NSCopying, NSSecureCoding> {
    double  _exponent;
    double  _padding;
    double  _prior;
}

@property (nonatomic) double exponent;
@property (nonatomic) double padding;
@property (nonatomic) double prior;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)exponent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithExponent:(double)arg1 padding:(double)arg2 prior:(double)arg3;
- (double)padding;
- (double)prior;
- (void)setExponent:(double)arg1;
- (void)setPadding:(double)arg1;
- (void)setPrior:(double)arg1;

@end
