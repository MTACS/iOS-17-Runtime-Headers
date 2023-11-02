
@interface CALNNotificationDataSourceUtils : NSObject

+ (id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (id)eventWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2;
+ (id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)objectIDWithSourceClientIdentifier:(id)arg1;
+ (void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2;
+ (void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(bool)arg4;
+ (id)sourceClientIdentifierForNotification:(id)arg1;

@end
