
@interface PRPosterColorHSBValues : NSObject {
    double  _brightness;
    double  _hue;
    double  _saturation;
}

@property (nonatomic, readonly) double brightness;
@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) double saturation;

- (double)brightness;
- (id)colorWithAlpha:(double)arg1;
- (id)hslValues;
- (double)hue;
- (id)initWithColor:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3;
- (double)saturation;

@end
