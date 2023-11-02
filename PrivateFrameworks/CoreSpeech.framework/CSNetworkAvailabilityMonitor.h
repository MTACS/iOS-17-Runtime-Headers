
@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_availabilityChanged;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isAvailable;

@end
