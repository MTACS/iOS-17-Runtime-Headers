
@interface SBLoginAppContainerOverlayWrapperView : UIView {
    _UIBackdropView * _backdropView;
    SBLockOverlayView * _overlayView;
}

@property (nonatomic, readonly) SBLockOverlayView *overlayView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 overlayView:(id)arg2;
- (void)layoutSubviews;
- (id)overlayView;

@end
