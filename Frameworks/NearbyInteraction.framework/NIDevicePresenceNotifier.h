
@interface NIDevicePresenceNotifier : NSObject {
    NISession * parentSession;
}

- (void).cxx_destruct;
- (id)initWithParentSession:(id)arg1;
- (void)notifyBluetoothSample:(id)arg1;

@end
