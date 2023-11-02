
@interface _SRDeviceUsageMotionActivity : NSObject <NSSecureCoding, SRSampleExporting> {
    double  _duration;
    long long  _motionActivityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property long long motionActivityType;
@property (readonly) Class superclass;

+ (id)motionActivityWithActivityType:(long long)arg1 duration:(double)arg2;
+ (bool)supportsSecureCoding;

- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)motionActivityType;
- (void)setDuration:(double)arg1;
- (void)setMotionActivityType:(long long)arg1;
- (id)sr_dictionaryRepresentation;

@end
