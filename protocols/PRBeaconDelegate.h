
@protocol PRBeaconDelegate <NSObject>

@required

- (void)beacon:(PRBeacon *)arg1 didChangeState:(unsigned long long)arg2;
- (void)beacon:(PRBeacon *)arg1 didFailWithError:(NSError *)arg2;

@optional

- (void)beacon:(PRBeacon *)arg1 didOutputRangeResults:(NSArray *)arg2;
- (void)beacon:(PRBeacon *)arg1 didOutputSuperframeStats:(NSDictionary *)arg2;

@end
