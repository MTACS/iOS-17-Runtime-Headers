
@protocol _UNNotificationContentExtensionHostContextDelegate <NSObject>

@required

- (void)notificationExtension:(_UNNotificationContentExtensionHostContext *)arg1 didUpdateNotificationActions:(NSArray *)arg2;
- (void)notificationExtension:(_UNNotificationContentExtensionHostContext *)arg1 didUpdateTitle:(NSString *)arg2;
- (void)notificationExtensionDidUpdatePlayPauseMediaButton:(_UNNotificationContentExtensionHostContext *)arg1;
- (void)notificationExtensionMediaPlayingDidPause:(_UNNotificationContentExtensionHostContext *)arg1;
- (void)notificationExtensionMediaPlayingDidStart:(_UNNotificationContentExtensionHostContext *)arg1;
- (void)notificationExtensionRequestsDefaultAction:(_UNNotificationContentExtensionHostContext *)arg1;
- (void)notificationExtensionRequestsDismiss:(_UNNotificationContentExtensionHostContext *)arg1;

@optional

- (void)notificationExtension:(_UNNotificationContentExtensionHostContext *)arg1 extensionDidCompleteResponse:(UNNotificationResponse *)arg2 withOption:(unsigned long long)arg3;

@end
