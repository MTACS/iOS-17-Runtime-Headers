
@protocol AVPlaybackContentTransitioningViewDelegate <NSObject>

@required

- (AVPlaybackContentContainerView *)contentTransitioningPlayerContentViewForTransition:(AVPlaybackContentTransitioningView *)arg1;
- (bool)contentTransitioningView:(AVPlaybackContentTransitioningView *)arg1 shouldBeginTransitionWithDirection:(long long)arg2;
- (void)contentTransitioningViewDidChangeTransitionStatus:(AVPlaybackContentTransitioningView *)arg1 oldState:(long long)arg2 oldTransitionDirection:(long long)arg3 oldProgress:(double)arg4;
- (bool)contentTransitioningViewShouldBeginDragging:(AVPlaybackContentTransitioningView *)arg1 locationInView:(struct CGPoint { double x1; double x2; })arg2;

@end
