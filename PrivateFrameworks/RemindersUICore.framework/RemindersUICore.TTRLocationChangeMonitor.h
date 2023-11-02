
@interface RemindersUICore.TTRLocationChangeMonitor : NSObject <CLLocationManagerDelegate> {
    void changeRadius;
    void hasStarted;
    void lastResult;
    void locationChange;
    void locationChangePassthroughSubject;
    void locationManager;
    void state;
    void timer;
    void timerInterval;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;

@end
