
@interface NTKColorCurveElement : NSObject {
    UIColor * _color;
    float  _fraction;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) float fraction;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)color;
- (id)description;
- (float)fraction;
- (id)initWithColor:(id)arg1 fraction:(float)arg2;
- (void)setColor:(id)arg1;
- (void)setFraction:(float)arg1;
- (void)setTimingFunction:(id)arg1;
- (id)timingFunction;

@end
