
@protocol PKPaletteViewAnnotationDelegate <PKPalettePopoverDismissing>

@required

- (void)paletteViewDidSelectPlusButton:(PKDrawingPaletteView *)arg1;
- (UIColor *)paletteViewSelectedAnnotationColor:(PKDrawingPaletteView *)arg1;

@end
