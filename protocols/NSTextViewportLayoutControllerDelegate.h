
@protocol NSTextViewportLayoutControllerDelegate <NSObject>

@required

- (void)textViewportLayoutController:(NSTextViewportLayoutController *)arg1 configureRenderingSurfaceForTextLayoutFragment:(NSTextLayoutFragment *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewportBoundsForTextViewportLayoutController:(NSTextViewportLayoutController *)arg1;

@optional

- (void)textViewportLayoutControllerDidLayout:(NSTextViewportLayoutController *)arg1;
- (void)textViewportLayoutControllerWillLayout:(NSTextViewportLayoutController *)arg1;

@end
