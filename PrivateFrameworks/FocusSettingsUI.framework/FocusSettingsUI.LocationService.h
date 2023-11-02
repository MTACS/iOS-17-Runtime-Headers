
@interface FocusSettingsUI.LocationService : NSObject <CLLocationManagerDelegate, MKLocalSearchCompleterDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _completions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _queryFragment;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _searchCompletion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _searchResults;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _status;
    void completer;
    void completionCancellable;
    void localRegion;
    void locationManager;
    void locationQueue;
    void queryCancellable;
    void searchNearCurrentLocation;
}

- (void).cxx_destruct;
- (void)completerDidUpdateResults:(id)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
