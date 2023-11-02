
@interface MPAVLightweightRoutingController : NSObject {
    AVOutputDeviceDiscoverySession * _avDiscoverySession;
    AVOutputContext * _avOutputContext;
    <MPAVLightweightRoutingControllerDelegate> * _delegate;
    long long  _discoveryMode;
    NSDate * _lastOutputContextNotificationDate;
    NSString * _name;
    bool  _notificationScheduled;
}

@property (nonatomic) <MPAVLightweightRoutingControllerDelegate> *delegate;
@property (getter=isDevicePresenceDetected, nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) long long discoveryMode;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSArray *pickedRoutes;

- (void).cxx_destruct;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)_onSyncSelf_schedulePickedRoutesChangedNotification;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_postPickedRoutesChangedNotification;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)discoveryMode;
- (id)initWithName:(id)arg1;
- (bool)isDevicePresenceDetected;
- (id)name;
- (id)pickedRoutes;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryMode:(long long)arg1;

@end
