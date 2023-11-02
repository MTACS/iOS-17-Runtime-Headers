
@interface ChronoCore.LocationService : _TtCs12_SwiftObject {
    void _authPermissionsChangedPublisher;
    void _significantLocationChangedPublisher;
    void authMonitorByIdentifier;
    void authMonitorType;
    void extInfoByIdentifier;
    void extManager;
    void extManagerSubscription;
    void graceState;
    void graceStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  graceStoreFlushInterval;
    void graceStoreFlushPending;
    void graceTimer;
    void inUseAssertionType;
    void inUseNanosecondsOfGrace;
    void invalidated;
    void lock;
    void publisherLock;
    void serialProcessingQueue;
    void significantChangeMonitor;
    void significantChangeMonitorType;
}

@end
