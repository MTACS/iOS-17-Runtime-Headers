
@protocol TAMetricsProtocol <NSObject>

@required

- (unsigned long long)getMetricsCollectionType;
- (TASPAdvertisement *)latestAdvertisement;

@end
