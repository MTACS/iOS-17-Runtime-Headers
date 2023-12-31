
@protocol NMSNotificationDispatcherDelegate <NSObject>

@optional

- (void)dispatcherDidReceiveNotificationFromCurrentProcess:(NMSNotificationDispatcher *)arg1;
- (void)dispatcherDidReceiveNotificationFromOtherProcess:(NMSNotificationDispatcher *)arg1;
- (void)dispatcherDidReceiveNotificationFromRemoteDevice:(NMSNotificationDispatcher *)arg1;

@end
