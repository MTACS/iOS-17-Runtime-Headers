
@protocol SBHViewControllerTransitionAnimating

@required

- (void)animateToEndpoint:(void *)arg1 withContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: long long, <SBHViewControllerTransitionAnimationContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id <SBHViewControllerTransitionAnimationContext>)arg2;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id <SBHViewControllerTransitionAnimationContext>)arg2;

@end
