
@protocol CALNEKCalendarNotificationReferenceProvider <NSObject>

@required

- (EKCalendarNotificationReference *)notificationReferenceForObjectID:(EKObjectID *)arg1 withType:(int)arg2 date:(NSDate *)arg3 inEventStore:(EKEventStore *)arg4;
- (EKCalendarNotificationReference *)notificationReferenceForObjectID:(EKObjectID *)arg1 withType:(int)arg2 inEventStore:(EKEventStore *)arg3;

@end
