
@protocol AVTAvatarTransitionModel <AVTTransitionModel>

@required

- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (AVTView *)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;

@end
