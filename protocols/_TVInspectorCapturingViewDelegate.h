
@protocol _TVInspectorCapturingViewDelegate <NSObject>

@required

- (void)capturingView:(_TVInspectorCapturingView *)arg1 didCaptureTapOnView:(UIView *)arg2;
- (UIView *)rootView;

@end
