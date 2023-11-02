
@interface SeymourServices.SyncCoordinator : _TtCs12_SwiftObject {
    void $__lazy_storage_$_pairedSyncDelay;
    void $__lazy_storage_$_serverSyncDelay;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _ignoreSyncTimer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _pairedSyncEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _serverSyncEnabled;
    void eventHub;
    void pairedSyncCoordinator;
    void persistenceStore;
    void platform;
    void serverSyncCoordinator;
    void subscriptionToken;
}

@end
