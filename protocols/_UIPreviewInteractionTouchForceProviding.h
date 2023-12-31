
@protocol _UIPreviewInteractionTouchForceProviding <NSObject>

@required

- (void)cancelInteraction;
- (bool)isActive;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (double)touchForce;

@end
