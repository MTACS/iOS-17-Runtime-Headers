
@protocol ICDocCamImageQuadEditOverlayDelegate <NSObject>

@required

- (double)currentZoomFactorForOverlay;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageFrameInOverlayCoordinates;
- (void)overlayDidLayout:(ICDocCamImageQuadEditOverlay *)arg1;
- (ICDocCamImageQuad *)quadForOverlay:(ICDocCamImageQuadEditOverlay *)arg1;
- (void)selectedKnobDidChange:(CALayer *)arg1;
- (void)selectedKnobDidPanToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unitImageRectForOverlayRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
