
@protocol _UNNotificationExtensionVendorInterface

@required

- (void)_hostDidReceiveNotification:(UNNotification *)arg1;
- (void)_hostDidReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)_hostDidReceiveNotificationResponse:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UNNotificationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)_hostWantsMediaToPause;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_hostWantsToUpdateMediaPlayPauseButton;

@end
