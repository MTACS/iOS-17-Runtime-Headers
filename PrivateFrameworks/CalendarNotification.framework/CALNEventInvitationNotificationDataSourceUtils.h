
@interface CALNEventInvitationNotificationDataSourceUtils : NSObject

+ (void)clearEventInvitationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)eventForEventInvitation:(id)arg1 inEventStore:(id)arg2;
+ (id)eventForNotificationOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4;
+ (id)expirationDateForEventInvitation:(id)arg1;

@end
