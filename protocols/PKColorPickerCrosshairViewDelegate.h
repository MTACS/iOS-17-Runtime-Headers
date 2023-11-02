
@protocol PKColorPickerCrosshairViewDelegate

@required

- (UIColor *)colorForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)colorPickerCrosshairViewShouldUpdateColor:(PKColorPickerCrosshairView *)arg1 point:(struct CGPoint { double x1; double x2; })arg2;
- (void)colorPickerCrosshairViewShouldUpdateWithColor:(UIColor *)arg1;
- (unsigned long long)cornerPositionForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForColorPickerCrosshairView:(PKColorPickerCrosshairView *)arg1;

@end
