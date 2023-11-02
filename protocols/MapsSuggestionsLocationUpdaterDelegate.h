
@protocol MapsSuggestionsLocationUpdaterDelegate <MapsSuggestionsObject>

@required

- (void)didLoseLocationPermission;
- (void)didUpdateLocation:(CLLocation *)arg1;

@end
