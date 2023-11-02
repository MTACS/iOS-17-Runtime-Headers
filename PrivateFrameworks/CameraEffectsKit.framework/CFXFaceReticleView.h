
@interface CFXFaceReticleView : UIView {
    UIViewPropertyAnimator * _animojiBounceAnimator;
    UIViewPropertyAnimator * _animojiFadeOutAnimator;
    UIViewPropertyAnimator * _bounceAnimator;
    bool  _canPerformFadeInAnimations;
    bool  _canPerformFadeOutAnimations;
    UIViewPropertyAnimator * _fadeOutAnimator;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _isShowingFaceIndicator;
    UIImageView * _reticleImageView;
    NSMutableArray * _reticleLayersToAnimate;
}

@property (nonatomic, retain) UIViewPropertyAnimator *animojiBounceAnimator;
@property (nonatomic, retain) UIViewPropertyAnimator *animojiFadeOutAnimator;
@property (nonatomic, retain) UIViewPropertyAnimator *bounceAnimator;
@property (nonatomic) bool canPerformFadeInAnimations;
@property (nonatomic) bool canPerformFadeOutAnimations;
@property (nonatomic, retain) UIViewPropertyAnimator *fadeOutAnimator;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool isShowingFaceIndicator;
@property (nonatomic, retain) UIImageView *reticleImageView;
@property (nonatomic, retain) NSMutableArray *reticleLayersToAnimate;

- (void).cxx_destruct;
- (id)animojiBounceAnimator;
- (void)animojiCloseAnimationWithCompletion:(id /* block */)arg1;
- (void)animojiFadeInAnimation;
- (id)animojiFadeOutAnimator;
- (id)bounceAnimator;
- (bool)canPerformFadeInAnimations;
- (bool)canPerformFadeOutAnimations;
- (void)fadeInAnimation;
- (void)fadeOutAndEndHapticWithCompletionBlock:(id /* block */)arg1;
- (void)fadeOutAnimationWithCompletion:(id /* block */)arg1;
- (id)fadeOutAnimator;
- (id)feedbackGenerator;
- (void)hideAnimojiFaceReticleAnimatedWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reticleType:(long long)arg2;
- (bool)isShowingFaceIndicator;
- (id)reticleImageView;
- (id)reticleLayersToAnimate;
- (void)setAnimojiBounceAnimator:(id)arg1;
- (void)setAnimojiFadeOutAnimator:(id)arg1;
- (void)setBounceAnimator:(id)arg1;
- (void)setCanPerformFadeInAnimations:(bool)arg1;
- (void)setCanPerformFadeOutAnimations:(bool)arg1;
- (void)setFadeOutAnimator:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setIsShowingFaceIndicator:(bool)arg1;
- (void)setReticleImageView:(id)arg1;
- (void)setReticleLayersToAnimate:(id)arg1;
- (void)setupAnimojiReticleLayers;
- (void)shouldUseHapticFeedback:(bool)arg1;
- (void)showAndAnimateAnimojiFaceReticle;
- (void)updateFrameForDisplayRelativeToBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)userFeedbackForTrackingType:(long long)arg1 needsHaptics:(bool)arg2;

@end
