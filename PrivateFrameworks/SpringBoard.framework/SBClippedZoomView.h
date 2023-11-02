
@interface SBClippedZoomView : SBZoomView {
    UIView * _clippingView;
    SBFullscreenZoomView * _fullscreenZoomViewToClip;
}

- (void).cxx_destruct;
- (id)initWithClippingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fullscreenZoomView:(id)arg2;

@end
