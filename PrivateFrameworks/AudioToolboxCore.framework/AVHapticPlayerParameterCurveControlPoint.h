
@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding> {
    double  _time;
    float  _value;
}

@property double time;
@property float value;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime:(double)arg1 value:(float)arg2;
- (void)setTime:(double)arg1;
- (void)setValue:(float)arg1;
- (double)time;
- (float)value;

@end
