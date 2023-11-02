
@protocol PRBTGroupLocalizerDelegate <NSObject>

@required

- (void)didFailWithError:(NSError *)arg1 onItem:(NSUUID *)arg2;

@optional

- (void)didFindItem:(NSUUID *)arg1;
- (void)didStartRangingOn:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didStopRangingOn:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didUpdateBTProximity:(PRBTProximityMeasurement *)arg1;
- (void)willIntegrateBTRSSI:(PRBTRssiMeasurement *)arg1;

@end
