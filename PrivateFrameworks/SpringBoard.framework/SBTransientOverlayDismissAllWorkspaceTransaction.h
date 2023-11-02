
@interface SBTransientOverlayDismissAllWorkspaceTransaction : SBMainWorkspaceTransaction {
    long long  _animatedOverride;
}

@property (getter=isAnimatedOverride, nonatomic) long long animatedOverride;

+ (bool)isValidForTransitionRequest:(id)arg1;

- (void)_begin;
- (bool)_canBeInterrupted;
- (id)initWithTransitionRequest:(id)arg1;
- (long long)isAnimatedOverride;
- (void)setAnimatedOverride:(long long)arg1;

@end
