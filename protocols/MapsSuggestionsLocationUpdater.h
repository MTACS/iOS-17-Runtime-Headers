
@protocol MapsSuggestionsLocationUpdater <MapsSuggestionsObject>

@required

- (CLLocation *)restartLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (CLLocation *)startLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;
- (void)stopLocationUpdatesForDelegate:(id <MapsSuggestionsLocationUpdaterDelegate>)arg1;

@end
