
@interface SBBannerPoofTransitionAnimator : SBBannerCustomTransitionAnimator {
    UIViewFloatAnimatableProperty * _blurProgressProperty;
}

@property (nonatomic, retain) UIViewFloatAnimatableProperty *blurProgressProperty;

+ (void)performAnimationsForTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (id)settings;

- (void).cxx_destruct;
- (void)_addGaussianBlurToViewIfNeeded:(id)arg1 inputRadius:(double)arg2;
- (void)_removeBlurFilterFromView:(id)arg1;
- (bool)_viewHasGaussianBlurFilter:(id)arg1;
- (id)blurProgressProperty;
- (void)performActionsForTransition:(id)arg1;
- (void)prepareForTransition:(id)arg1;
- (void)setBlurProgressProperty:(id)arg1;
- (id)settings;

@end
