
@protocol VKTextLiftingViewDelegate <NSObject>

@required

- (void)animateAlongsideFadeOutForTextLiftingView:(VKTextLiftingView *)arg1;
- (void)animateAlongsideTextLiftingForView:(VKTextLiftingView *)arg1;
- (void)fadeOutAnimationDidEndForView:(VKTextLiftingView *)arg1;
- (void)textLiftingAnimationDidEndForView:(VKTextLiftingView *)arg1;

@end
