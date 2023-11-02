
@protocol PKPaletteColorPicker <NSObject>

@required

- (long long)colorUserInterfaceStyle;
- (UIColor *)selectedColor;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setSelectedColor:(UIColor *)arg1;
- (void)setSelectedColorForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSupportsAlpha:(bool)arg1;
- (bool)supportsAlpha;

@end
