
@protocol SXComponentInteractionManager <NSObject>

@required

- (void)commitViewController:(UIViewController *)arg1;
- (bool)hasInteractionForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (<SXComponentInteractionPreviewContext> *)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1;

@optional

- (bool)accessibilityShouldHandleInteractionForComponentView:(SXComponentView *)arg1;

@end
