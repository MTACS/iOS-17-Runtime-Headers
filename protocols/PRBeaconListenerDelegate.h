
@protocol PRBeaconListenerDelegate <NSObject>

@required

- (void)beaconListener:(PRBeaconListener *)arg1 didChangeState:(unsigned long long)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didFailWithError:(NSError *)arg2;

@optional

- (void)beaconListener:(PRBeaconListener *)arg1 didOutputRangeResults:(NSArray *)arg2;
- (void)beaconListener:(PRBeaconListener *)arg1 didOutputSuperframeStats:(NSDictionary *)arg2;

@end
