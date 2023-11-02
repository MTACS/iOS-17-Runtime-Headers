
@protocol SBTransientOverlayTransitionCoordinating <NSObject>

@required

- (void)finalizeTransitionWithContextProvider:(id <SBTransientOverlayTransitionContextProviding>)arg1;
- (void)startTransitionWithContextProvider:(id <SBTransientOverlayTransitionContextProviding>)arg1;

@end
