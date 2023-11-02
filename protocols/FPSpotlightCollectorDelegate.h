
@protocol FPSpotlightCollectorDelegate

@required

- (void)collectorDidFinish:(FPSpotlightCollector *)arg1;
- (NSSet *)mountPointsForCollector:(FPSpotlightCollector *)arg1;

@end
