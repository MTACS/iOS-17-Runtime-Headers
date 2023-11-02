
@interface StateReplicator.IDSSyncService : NSObject {
    void _queue_delegates;
    void _queue_deviceMonitors;
    void _queue_localDeviceID;
    void idsServiceWrapper;
    void queue;
}

- (void).cxx_destruct;
- (id)init;

@end
