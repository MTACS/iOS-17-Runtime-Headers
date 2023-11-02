
@interface PKPaletteTooltipPresentationHandle : NSObject {
    UIView * _floatingLabel;
    UIView * _hostingView;
}

- (void).cxx_destruct;
- (void)hideFloatingLabel;
- (id)initWithHostingView:(id)arg1;
- (void)showWithText:(id)arg1 fromView:(id)arg2 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atEdge:(unsigned long long)arg4 offset:(double)arg5 traitCollection:(id)arg6;

@end
