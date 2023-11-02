
@interface PRPosterColorHSLValues : NSObject {
    double  _hue;
    double  _luminance;
    double  _saturation;
}

@property (nonatomic, readonly) double hue;
@property (nonatomic, readonly) double luminance;
@property (nonatomic, readonly) double saturation;

- (id)hsbValues;
- (double)hue;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 luminance:(double)arg3;
- (double)luminance;
- (double)saturation;

@end
