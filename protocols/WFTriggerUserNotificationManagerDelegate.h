
@protocol WFTriggerUserNotificationManagerDelegate <NSObject>

@required

- (void)notificationManager:(WFTriggerUserNotificationManager *)arg1 didDismissTriggerWithIdentifier:(NSString *)arg2 pendingTriggerEventIDs:(NSArray *)arg3;
- (void)notificationManager:(WFTriggerUserNotificationManager *)arg1 didFailToPostNotificationPromptWithTriggerIdentifier:(NSString *)arg2 pendingTriggerEventIDs:(NSArray *)arg3;
- (void)notificationManager:(WFTriggerUserNotificationManager *)arg1 didRequestDisablementOfTriggersWithIdentifiers:(NSArray *)arg2;
- (void)notificationManager:(WFTriggerUserNotificationManager *)arg1 receivedConfirmationToRunTriggerWithIdentifier:(NSString *)arg2 pendingTriggerEventIDs:(NSArray *)arg3;

@end
