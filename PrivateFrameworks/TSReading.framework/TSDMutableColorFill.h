
@interface TSDMutableColorFill : TSDColorFill

@property (nonatomic) double brightness;
@property (nonatomic, copy) TSUColor *color;
@property (nonatomic) double hue;
@property (nonatomic) double opacity;
@property (nonatomic) double saturation;

- (void)setBrightness:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setHue:(double)arg1;
- (void)setOpacity:(double)arg1;
- (void)setSaturation:(double)arg1;

@end
