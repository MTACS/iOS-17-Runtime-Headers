
@protocol SBSearchPresentable <SBHSearchPresentable, NSObject>

@optional

- (SBHHomePullToSearchSettings *)searchTransitionSettings;
- (void)setSearchTransitionSettings:(SBHHomePullToSearchSettings *)arg1;
- (void)updatePresentationProgress:(void *)arg1 withOffset:(void *)arg2 velocity:(void *)arg3 presentationState:(void *)arg4 applyBlock:(void *)arg5; // needs 5 arg types, found 15: double, double, double, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SBFFluidBehaviorSettings *, id /* block */, void*, void, id /* block */, void*, void*

@end
