
@protocol SBTransientOverlayTransitionContextProviding <NSObject>

@required

- (void)completeTransition:(bool)arg1;
- (bool)isAnimated;
- (void)performAlongsideTransitions;

@end
