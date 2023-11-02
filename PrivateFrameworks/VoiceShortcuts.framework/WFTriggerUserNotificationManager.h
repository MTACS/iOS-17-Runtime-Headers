
@interface WFTriggerUserNotificationManager : NSObject <UNUserNotificationCenterDelegate, WFTriggerNotificationDebouncerDelegate> {
    WFTriggerNotificationDebouncer * _debouncer;
    <WFTriggerUserNotificationManagerDelegate> * _delegate;
    WFUserNotificationManager * _userNotificationManager;
}

@property (nonatomic, readonly) WFTriggerNotificationDebouncer *debouncer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFTriggerUserNotificationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFUserNotificationManager *userNotificationManager;

+ (id)alertCategory;
+ (id)backgroundRunningCategory;
+ (id)categoryIdentifiers;
+ (id)promptCategory;

- (void).cxx_destruct;
- (bool)_postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 removeDeliveredNotifications:(bool)arg4 pendingTriggerEventIDs:(id)arg5 actionIcons:(id)arg6 error:(id*)arg7;
- (id)debouncer;
- (id)delegate;
- (id)initWithUserNotificationManager:(id)arg1;
- (bool)postBackgroundRunningNotificationWithConfiguredTriggers:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)postNotificationForTrigger:(id)arg1 workflowReference:(id)arg2 pendingTriggerEventIDs:(id)arg3;
- (bool)postNotificationOfType:(unsigned long long)arg1 forTrigger:(id)arg2 workflowReference:(id)arg3 removeDeliveredNotifications:(bool)arg4 pendingTriggerEventIDs:(id)arg5 actionIcons:(id)arg6 error:(id*)arg7;
- (void)postNotificationThatTrigger:(id)arg1 failedWithError:(id)arg2;
- (void)removeNotificationsWithTriggerIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)userNotificationManager;

@end
