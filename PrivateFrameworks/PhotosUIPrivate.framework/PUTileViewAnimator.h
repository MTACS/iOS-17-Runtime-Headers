
@interface PUTileViewAnimator : PUTileAnimator {
    NSMapTable * __synchronizedAnimationGroupsByTransition;
}

@property (nonatomic, readonly) NSMapTable *_synchronizedAnimationGroupsByTransition;

- (void).cxx_destruct;
- (void)_performAnimations:(id /* block */)arg1 withOptions:(id)arg2;
- (id)_synchronizedAnimationGroupsByTransition;
- (void)animateTileController:(id)arg1 toLayoutInfo:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (void)prepareTileControllerForAnimation:(id)arg1 withInitialLayoutInfo:(id)arg2;
- (void)transition:(id)arg1 didComplete:(bool)arg2;
- (void)updateAnimationForTileController:(id)arg1 withRepositionedTargetLayoutInfo:(id)arg2;

@end
