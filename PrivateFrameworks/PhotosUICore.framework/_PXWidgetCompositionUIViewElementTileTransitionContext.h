
@interface _PXWidgetCompositionUIViewElementTileTransitionContext : NSObject {
    id /* block */  _alongsideAnimation;
    id /* block */  _alongsideAnimationCompletion;
    PXBasicTileAnimationOptions * _animationOptions;
}

@property (nonatomic, copy) id /* block */ alongsideAnimation;
@property (nonatomic, copy) id /* block */ alongsideAnimationCompletion;
@property (nonatomic, retain) PXBasicTileAnimationOptions *animationOptions;

- (void).cxx_destruct;
- (id /* block */)alongsideAnimation;
- (id /* block */)alongsideAnimationCompletion;
- (id)animationOptions;
- (void)setAlongsideAnimation:(id /* block */)arg1;
- (void)setAlongsideAnimationCompletion:(id /* block */)arg1;
- (void)setAnimationOptions:(id)arg1;

@end
