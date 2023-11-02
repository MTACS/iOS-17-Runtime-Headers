
@protocol SBMultiplexedSpotlightDelegate <SPUIRemoteSearchViewDelegate>

@required

- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate:(bool)arg1;

@end
