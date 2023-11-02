
@interface ChronoCore._LocationSignificantChangeMonitorImpl : NSObject <CLLocationManagerDelegate> {
    void _didChangeHandler;
    void _significantLocationDidChangePublisher;
    void lock;
    void manager;
    void significantLocationDidChangePublisher;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end
