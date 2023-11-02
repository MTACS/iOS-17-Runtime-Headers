
@protocol SUAutoInstallFailureNotification <NSObject>

@optional

- (void)dismissNotification;
- (void)postNotificationForError:(NSError *)arg1;
- (void)postNotificationForError:(NSError *)arg1 withUpdateBuildNumber:(NSString *)arg2;

@end
