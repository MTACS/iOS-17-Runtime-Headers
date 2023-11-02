
@protocol CKMarkNotificationsReadOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleMarkNotificationReadCompletionForNotificationID:(CKNotificationID *)arg1 error:(NSError *)arg2;

@end
