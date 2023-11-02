
@protocol NWNetworkOfInterestManagerDelegate

@optional

- (void)didStartTrackingNOI:(NWNetworkOfInterest *)arg1;
- (void)didStopTrackingAllNOIs:(NSSet *)arg1;
- (void)didStopTrackingNOI:(NWNetworkOfInterest *)arg1;

@end
