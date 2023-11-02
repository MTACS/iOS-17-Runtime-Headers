
@interface FMIPCore.FMIPBeaconRefreshingController : _TtCs12_SwiftObject {
    void appBeacons;
    void callbackInterval;
    void clientConfiguration;
    void currentlyRefreshing;
    void defaultCallbackInterval;
    void delegate;
    void filterQueue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void initialCallbackInterval;
    void isRefreshing;
    void isThrottled;
    void isThrottledOverride;
    void itemGroups;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastActiveTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastRefreshTime;
    void nextRefreshQueued;
    void ownerSession;
    void refreshQueue;
    void refreshTimer;
    void refreshingPolicy;
    void separationMonitoringState;
    void shouldUseBeaconsOptimizationSPI;
    void spBeacons;
    void unknownBeacons;
    void utAlertState;
}

- (void)handleBeaconsChanged;
- (void)handleUnknownBeaconsChanged;
- (void)refreshTimerFired;

@end
