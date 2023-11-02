
@interface PHASEConeDirectivityModelSubbandParameters : NSObject {
    double  _frequency;
    double  _innerAngle;
    double  _outerAngle;
    double  _outerGain;
}

@property (nonatomic) double frequency;
@property (readonly) double innerAngle;
@property (readonly) double outerAngle;
@property (nonatomic) double outerGain;

- (double)frequency;
- (id)init;
- (double)innerAngle;
- (double)outerAngle;
- (double)outerGain;
- (void)setFrequency:(double)arg1;
- (void)setInnerAngle:(double)arg1 outerAngle:(double)arg2;
- (void)setOuterGain:(double)arg1;

@end
