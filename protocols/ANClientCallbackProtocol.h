
@protocol ANClientCallbackProtocol <NSObject>

@required

- (void)notificationWasActivated:(ANAccountNotification *)arg1;
- (void)notificationWasCleared:(ANAccountNotification *)arg1;
- (void)notificationWasDismissed:(ANAccountNotification *)arg1;

@end
