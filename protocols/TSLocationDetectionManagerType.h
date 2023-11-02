
@protocol TSLocationDetectionManagerType

@required

- (bool)authorized;
- (bool)locationServicesEnabled;
- (CLLocation *)mostFrequentLocation;
- (id)observableMostFrequentLocation;

@end
