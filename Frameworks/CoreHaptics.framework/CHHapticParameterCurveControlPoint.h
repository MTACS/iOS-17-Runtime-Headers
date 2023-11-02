
@interface CHHapticParameterCurveControlPoint : NSObject {
    double  _time;
    float  _value;
}

@property double relativeTime;
@property float value;

- (id)init;
- (id)initWithRelativeTime:(double)arg1 value:(float)arg2;
- (double)relativeTime;
- (void)setRelativeTime:(double)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
