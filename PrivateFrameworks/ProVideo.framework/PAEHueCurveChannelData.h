
@interface PAEHueCurveChannelData : NSObject <FxCustomParameterInterpolation_v2, NSCopying, NSSecureCoding> {
    void * _curve_private;
}

+ (id)channelDataWithCurve:(const void*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)curveRef;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)evaluate:(double)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurve:(const void*)arg1;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isAtDefaults;
- (bool)isEqual:(id)arg1;
- (void)reset;

@end
