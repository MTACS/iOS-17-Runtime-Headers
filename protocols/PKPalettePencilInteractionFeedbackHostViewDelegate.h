
@protocol PKPalettePencilInteractionFeedbackHostViewDelegate <NSObject>

@required

- (UIColor *)paletteBorderColor;
- (double)paletteBorderWidth;
- (double)paletteEdgeSpacing;
- (double)paletteEdgeSpacingForMinimized;
- (UIColor *)paletteShadowColor;
- (struct CGSize { double x1; double x2; })paletteShadowOffset;
- (double)paletteShadowOpacity;
- (double)paletteShadowRadius;
- (double)paletteSpringAnimationDampingRatio;
- (double)paletteSpringAnimationResponse;
- (PKDrawingPaletteView *)paletteView;

@end
