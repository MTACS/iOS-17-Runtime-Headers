
@protocol _UIPreviewInteractionImpl <NSObject>

@required

- (void)_startPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (void)cancelInteraction;
- (<UIPreviewInteractionDelegate> *)delegate;
- (id)initWithView:(UIView *)arg1 previewInteraction:(UIPreviewInteraction *)arg2;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (UIPreviewInteraction *)previewInteraction;
- (void)setDelegate:(id <UIPreviewInteractionDelegate>)arg1;
- (void)setPreviewInteraction:(UIPreviewInteraction *)arg1;
- (void)setTouchForceProvider:(id <_UIPreviewInteractionTouchForceProviding>)arg1;
- (<_UIPreviewInteractionTouchForceProviding> *)touchForceProvider;
- (UIView *)view;

@end
