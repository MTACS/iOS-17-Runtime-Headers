
@protocol SFTransitionCoordinating <NSObject>

@required

- (void)addAnimations:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SFTransitionContext> *, void*
- (void)addCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)addKeyframeWithRelativeStartTime:(void *)arg1 relativeDuration:(void *)arg2 animations:(void *)arg3; // needs 3 arg types, found 8: double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SFTransitionContext> *, void*
- (void)addRetargetableAnimations:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SFTransitionContext> *, void*

@end
