
@protocol PKPaletteViewHoverDelegate <NSObject>

@required

- (void)paletteViewHoverDidSwitchToolsViaPencilInteraction:(PKPaletteView *)arg1;
- (struct CGPoint { double x1; double x2; })paletteViewHoverLocation:(PKPaletteView *)arg1;
- (UIView *)paletteViewHoverView:(PKPaletteView *)arg1;
- (void)paletteViewPencilDidTap:(PKPaletteView *)arg1;

@end
