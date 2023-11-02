
@protocol MTNotificationCenter <NSObject>

@required

- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1;
- (void)dismissNotificationsForTimer:(MTTimer *)arg1;
- (void)postNotificationForScheduledAlarm:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 6: MTScheduledObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)postNotificationForScheduledTimer:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 6: MTScheduledObject *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForAlarm:(MTAlarm *)arg1 includeSnooze:(bool)arg2;
- (void)dismissNotificationsWithIdentifiers:(NSArray *)arg1;
- (void)dismissRelatedNotificationsForScheduledAlarm:(MTScheduledObject *)arg1;
- (void)removeAllDeliveredNotifications;

@end
