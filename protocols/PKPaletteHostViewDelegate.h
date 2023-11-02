
@protocol PKPaletteHostViewDelegate <NSObject>

@required

- (void)hostView:(UIView *)arg1 didDockPaletteToPosition:(long long)arg2;
- (void)hostView:(UIView *)arg1 willDockPaletteToPosition:(long long)arg2 prepareForExpansion:(bool)arg3;

@end
