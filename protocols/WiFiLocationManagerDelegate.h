
@protocol WiFiLocationManagerDelegate <NSObject>

@optional

- (void)didChangeAuthorizationStatus;
- (void)didFailWithError:(NSError *)arg1;
- (void)didUpdateLocations:(CLLocation *)arg1;
- (void)didUpdateVisits:(CLVisit *)arg1;

@end
