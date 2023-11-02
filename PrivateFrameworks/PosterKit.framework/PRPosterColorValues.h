
@interface PRPosterColorValues : NSObject {
    double  _alpha;
    UIColor * _color;
    PRPosterColorHSBValues * _hsbValues;
    PRPosterColorHSLValues * _hslValues;
}

@property (nonatomic) double alpha;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, retain) PRPosterColorHSBValues *hsbValues;
@property (nonatomic, retain) PRPosterColorHSLValues *hslValues;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (double)alpha;
- (id)color;
- (id)copyWithAlpha:(double)arg1;
- (id)copyWithLuminance:(double)arg1;
- (unsigned long long)hash;
- (id)hsbValues;
- (id)hslValues;
- (id)identifier;
- (id)initWithColor:(id)arg1;
- (id)initWithColor:(id)arg1 hsbValues:(id)arg2 hslValues:(id)arg3 alpha:(double)arg4;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 luminance:(double)arg3 alpha:(double)arg4;
- (bool)isEqual:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setHsbValues:(id)arg1;
- (void)setHslValues:(id)arg1;

@end
