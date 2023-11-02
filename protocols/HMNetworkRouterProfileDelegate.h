
@protocol HMNetworkRouterProfileDelegate <NSObject>

@optional

- (void)profileDidUpdateNetworkStatus:(HMNetworkRouterProfile *)arg1;
- (void)profileDidUpdateSatellites:(HMNetworkRouterProfile *)arg1;

@end
