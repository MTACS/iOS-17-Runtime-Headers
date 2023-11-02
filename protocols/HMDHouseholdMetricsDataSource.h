
@protocol HMDHouseholdMetricsDataSource

@required

- (HMDDevice *)currentDevice;
- (NSArray *)devicesOnCurrentAccount;
- (NSArray *)homeDataSources;
- (HMDNetworkObserver *)networkObserver;
- (HMDThreadNetworkObserver *)threadNetworkObserver;

@end
