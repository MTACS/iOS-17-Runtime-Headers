
@protocol AVPlaybackContentContainer <NSObject>

@required

- (AVPlaybackContentContainerView *)activeContentView;
- (bool)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeContentView:(AVPlaybackContentContainerView *)arg2;
- (bool)isPlayingOnSecondScreen;
- (void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setVideoContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideoGravity:(long long)arg1 removingAllSublayerTransformAnimations:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })videoContentFrame;

@end
