
@interface _GCRacingWheelManager : NSObject {
    struct __CFSet { } * _connectedWheelDeviceNotifications;
    NSMutableDictionary * _connectedWheels;
    struct __CFSet { } * _deviceNotificationIterators;
    struct IONotificationPort { } * _deviceNotificationPort;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)init;

@end
