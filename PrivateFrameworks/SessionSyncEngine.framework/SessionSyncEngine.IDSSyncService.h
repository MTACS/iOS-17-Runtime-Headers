
@interface SessionSyncEngine.IDSSyncService : NSObject {
    void _queue_delegates;
    void _queue_pairedDevice;
    void idsServiceWrapper;
    void pairedDeviceNotificationToken;
    void queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)pairedDeviceStateChangedWithNotification:(id)arg1;

@end
