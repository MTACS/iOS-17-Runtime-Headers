
@interface IRAVOutputDeviceDiscoverySessionController : NSObject {
    IRAVOutputDeviceProvider * _avOutputDeviceProvider;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
    AVOutputDeviceDiscoverySession * _session;
}

@property (nonatomic, readonly) IRAVOutputDeviceProvider *avOutputDeviceProvider;

- (void).cxx_destruct;
- (void)_didUpdateAVOutputDevices:(id)arg1;
- (id)avOutputDeviceProvider;
- (void)dealloc;
- (id)initWithAVOutputDeviceProvider:(id)arg1;
- (void)registerForAvailableOutputDevicesNotification;
- (void)startDetailedDiscovery;
- (void)stopDetailedDiscovery;
- (void)unregisterForAvailableOutputDevicesNotification;

@end
