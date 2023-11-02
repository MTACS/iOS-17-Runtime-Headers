
@protocol GCApplicationStateObserver <NSObject>

@required

- (void)applicationBackgrounded:(int)arg1;
- (void)applicationCanReceiveEventsDidChange:(bool)arg1 forPID:(int)arg2;
- (void)applicationForegrounded:(int)arg1;

@end
