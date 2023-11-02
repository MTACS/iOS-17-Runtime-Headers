
@protocol HDLocationManagerObserver <NSObject>

@optional

- (void)healthLocationManager:(HDLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)healthLocationManager:(HDLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)healthLocationManager:(HDLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;

@end
