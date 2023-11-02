
@protocol PRBTLocalizerDelegate <NSObject>

@optional

- (void)btLocalizerChangedState:(unsigned long long)arg1;
- (void)btLocalizerChangedState:(unsigned long long)arg1 onItem:(NSUUID *)arg2;
- (void)didFailWithError:(NSError *)arg1;
- (void)didFailWithError:(NSError *)arg1 onItem:(NSUUID *)arg2;
- (void)didFindItem;
- (void)didUpdateBTProximity:(PRBTProximityMeasurement *)arg1;
- (void)willIntegrateBTRSSI:(PRBTRssiMeasurement *)arg1;

@end
