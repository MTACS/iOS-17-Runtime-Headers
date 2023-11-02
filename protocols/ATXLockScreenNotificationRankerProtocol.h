
@protocol ATXLockScreenNotificationRankerProtocol <NSObject>

@required

- (void)rankNewNotificationIntoNotificationArrays:(void *)arg1 newNotification:(void *)arg2 notificationArrayIndex:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSArray *, ATXUserNotification *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, unsigned long long, NSError *, void*
- (void)rankNotificationArrays:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
