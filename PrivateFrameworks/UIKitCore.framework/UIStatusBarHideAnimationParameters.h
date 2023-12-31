
@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {
    double  _additionalSlideHeight;
    int  _hideAnimation;
}

@property (nonatomic) double additionalSlideHeight;
@property (nonatomic) int hideAnimation;

- (double)additionalSlideHeight;
- (int)hideAnimation;
- (id)initWithDefaultParameters;
- (void)setAdditionalSlideHeight:(double)arg1;
- (void)setHideAnimation:(int)arg1;
- (bool)shouldAnimate;

@end
