
@interface PULayoutAnimationsHelper : NSObject {
    PUSectionedGridLayout * _layout;
    bool  _shouldAnimateTemporaryImageView;
}

@property (nonatomic, readonly) PUSectionedGridLayout *layout;
@property (nonatomic) bool shouldAnimateTemporaryImageView;

+ (double)stackedTransitionAnimationPreferredDurationUsingSpringAnimations:(bool)arg1;
+ (id /* block */)stackedTransitionAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 shouldUseSpringAnimations:(bool)arg3;
+ (double)zoomTransitionAnimationPreferredDurationWhenZoomingIn:(bool)arg1;

- (void).cxx_destruct;
- (id)_adjustAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustCellAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustDecorationViewAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustRenderedStripAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_adjustSectionHeaderAnimation:(id)arg1 forReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (void)_applyDefaultLayoutAttributes:(id)arg1 toView:(id)arg2;
- (void)_configureAnimationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)_createDefaultZoomingInAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_createDefaultZoomingOutAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id)_defaultAnimationForKeyPath:(id)arg1 ofReusableView:(id)arg2 toLayoutAttributes:(id)arg3;
- (id /* block */)animationsForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)didFinishLayoutTransitionAnimations:(bool)arg1 transitionIsAppearing:(bool)arg2;
- (id)initWithSectionedGridLayout:(id)arg1;
- (id)layout;
- (void)setShouldAnimateTemporaryImageView:(bool)arg1;
- (bool)shouldAnimateTemporaryImageView;

@end