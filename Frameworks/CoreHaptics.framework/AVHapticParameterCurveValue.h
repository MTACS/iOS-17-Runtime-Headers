
@interface AVHapticParameterCurveValue : NSObject {
    double  _time;
    float  _value;
}

@property double time;
@property float value;

- (void)setTime:(double)arg1;
- (void)setValue:(float)arg1;
- (double)time;
- (float)value;

@end
