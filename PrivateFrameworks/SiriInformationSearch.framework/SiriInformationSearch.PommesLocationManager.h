
@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void $__lazy_storage_$_manager;
    void status;
}

- (void).cxx_destruct;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
