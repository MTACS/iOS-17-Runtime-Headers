
@interface PAEOffsetColorCurveChannelData : NSObject <FxCustomParameterInterpolation_v2, NSCopying, NSSecureCoding> {
    void * _curve_private;
}

+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)channelDataWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const void*)arg4;
+ (bool)supportsSecureCoding;

- (double)blue;
- (bool)conformFromColorCurve:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)curveRef;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)evaluate:(double)arg1;
- (double)green;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 curve:(const void*)arg4;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isAtDefaults;
- (bool)isEqual:(id)arg1;
- (double)red;
- (void)reset;

@end
