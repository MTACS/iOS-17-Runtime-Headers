
@protocol BRCNotificationPipeDelegate <NSObject>

@required

- (void)notificationPipe:(BRCNotificationPipe *)arg1 didObserveAppLibrary:(BRCAppLibrary *)arg2;
- (void)notificationPipe:(BRCNotificationPipe *)arg1 willObserveAppLibrary:(BRCAppLibrary *)arg2;

@end
