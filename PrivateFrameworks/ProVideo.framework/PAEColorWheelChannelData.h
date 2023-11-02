
@interface PAEColorWheelChannelData : NSObject <FxCustomParameterInterpolation_v2, NSCopying, NSSecureCoding> {
    struct PAEColorWheelData { 
        double r; 
        double t; 
        double sat; 
        double e; 
    }  _value;
}

+ (id)channelDataWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isAtDefaults;
- (bool)isEqual:(id)arg1;
- (double)light;
- (double)radius;
- (void)reset;
- (double)saturation;
- (void)setLight:(double)arg1;
- (void)setRadius:(double)arg1;
- (void)setSaturation:(double)arg1;
- (void)setTheta:(double)arg1;
- (double)theta;

@end
