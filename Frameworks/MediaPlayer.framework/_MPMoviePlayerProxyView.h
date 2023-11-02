
@interface _MPMoviePlayerProxyView : UIView {
    MPMoviePlayerController * _controller;
}

@property (nonatomic, readonly) MPMoviePlayerController *controller;

- (void).cxx_destruct;
- (void)_updateContainmentInWindow:(id)arg1 superview:(id)arg2;
- (id)controller;
- (id)initWithMoviePlayerController:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
