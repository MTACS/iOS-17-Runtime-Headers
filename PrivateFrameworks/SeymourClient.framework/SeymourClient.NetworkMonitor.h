
@interface SeymourClient.NetworkMonitor : NSObject <SMCAirplaneModeObserverDelegate> {
    void airplaneModeObserver;
    void coreTelephonyObserver;
    void delegate;
    void queue;
    void reachabilityObserver;
    void wifiObserver;
}

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)init;

@end
