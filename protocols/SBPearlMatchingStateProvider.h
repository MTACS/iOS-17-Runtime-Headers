
@protocol SBPearlMatchingStateProvider <NSObject>

@required

- (<SBPearlMatchingStateProviderDelegate> *)delegate;
- (bool)pearlMatchEnabledAndPossible;
- (void)reset;
- (bool)seenMatchResultSinceScreenOn;
- (void)setDelegate:(id <SBPearlMatchingStateProviderDelegate>)arg1;

@end
