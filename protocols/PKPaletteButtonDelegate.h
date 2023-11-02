
@protocol PKPaletteButtonDelegate <NSObject>

@required

- (UIColor *)paletteButton:(PKPaletteButton *)arg1 backgroundColorForState:(unsigned long long)arg2;
- (UIColor *)paletteButton:(PKPaletteButton *)arg1 tintColorForState:(unsigned long long)arg2;
- (bool)paletteButton:(PKPaletteButton *)arg1 wantsCustomBackgroundColorForState:(unsigned long long)arg2;
- (bool)paletteButton:(PKPaletteButton *)arg1 wantsCustomTintColorForState:(unsigned long long)arg2;

@end
