
@interface NCNotificationEventTracker : NSObject {
    ATXNotificationsLoggingClient * _logger;
}

+ (id)createATXNotificationInterfaceFromRequest:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_displayedNotificationRequests:(id)arg1 inUILocation:(long long)arg2;
- (void)digestAppeared:(id)arg1;
- (void)digestDismissed:(id)arg1;
- (void)digestExpanded:(id)arg1;
- (void)digestExpired:(id)arg1;
- (void)dismissedSectionType:(unsigned long long)arg1 withUUID:(id)arg2;
- (void)executedActionWithIdentifier:(id)arg1 forNotificationRequest:(id)arg2;
- (void)expandedSectionType:(unsigned long long)arg1 withUUID:(id)arg2;
- (void)hideNotificationRequest:(id)arg1;
- (id)init;
- (void)insertedNotificationRequest:(id)arg1 toSectionType:(unsigned long long)arg2;
- (void)longLookCustomAction:(id)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookDismissInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)longLookPresentedForNotificationRequest:(id)arg1;
- (void)longLookReparkInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)missedBundleAppeared:(id)arg1;
- (void)missedBundleDismissed:(id)arg1;
- (void)missedBundleExpanded:(id)arg1;
- (void)missedBundleExpired:(id)arg1;
- (void)modifiedNotificationRequest:(id)arg1;
- (void)notificationCenterAppeared;
- (void)notificationCenterClearAll;
- (void)notificationCenterDisappeared;
- (id)notificationDestinationForState:(id)arg1;
- (void)presentedNotificationRequestAsBanner:(id)arg1;
- (unsigned long long)primaryAttachmentTypeForRequest:(id)arg1;
- (void)realTimeTuningOutcome:(long long)arg1 withBundleId:(id)arg2;
- (void)realTimeTuningTrigger:(long long)arg1;
- (void)receivedNotification:(id)arg1 withProminence:(bool)arg2 sectionSettings:(id)arg3;
- (void)removedNotificationRequest:(id)arg1;
- (void)shortLookClearedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)shortLookDefaultActionInvokedWithTrigger:(long long)arg1 forNotificationRequest:(id)arg2 withState:(id)arg3;
- (void)shortLookDismissInvokedForNotificationRequest:(id)arg1 withState:(id)arg2;
- (void)toggledGroupState:(bool)arg1 withLeadingNotificationRequest:(id)arg2;

@end
