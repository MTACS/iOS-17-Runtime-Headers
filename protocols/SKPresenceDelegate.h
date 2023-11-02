
@protocol SKPresenceDelegate <NSObject>

@optional

- (void)invitedHandlesChangedForPresence:(SKPresence *)arg1;
- (void)presenceAssertionForPresence:(SKPresence *)arg1 completedSuccessfully:(bool)arg2 error:(NSError *)arg3;
- (void)presenceDaemonDisconnected:(SKPresence *)arg1;
- (void)presentDevicesChangedForPresence:(SKPresence *)arg1;

@end
