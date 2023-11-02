
@protocol AMSDeviceMessengerClientInterface <NSObject>

@required

- (void)deviceMessengerDidClearMessage:(AMSXDMessage *)arg1;
- (void)deviceMessengerDidReceiveMessage:(AMSXDMessage *)arg1;
- (void)deviceMessengerDidReceiveReply:(AMSXDMessage *)arg1;
- (void)deviceMessengerDidUpdateDevices;

@end
