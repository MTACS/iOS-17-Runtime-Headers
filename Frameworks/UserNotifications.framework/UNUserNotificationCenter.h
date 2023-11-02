
@interface UNUserNotificationCenter : NSObject <HDMobilityHealthAppNotificationAuthorizationStatusProvider, UNUserNotificationCenterDelegateConnectionListenerDelegate, UNUserNotificationServiceConnectionObserver> {
    NSString * _bundleIdentifier;
    <UNUserNotificationCenterDelegate> * _delegate;
    <UNUserNotificationCenterDelegatePrivate> * _privateDelegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UNUserNotificationCenterDelegatePrivate> *privateDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsContentExtensions;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)currentNotificationCenter;
+ (bool)supportsContentExtensions;

- (void).cxx_destruct;
- (void)addNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)badgeNumber;
- (id)bundleIdentifier;
- (id)clearedInfoForDataProviderMigration;
- (id)delegate;
- (id)deliveredNotifications;
- (void)didChangeSettings:(id)arg1;
- (void)didOpenApplicationForResponse:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getBadgeNumberWithCompletionHandler:(id /* block */)arg1;
- (void)getDeliveredNotificationsWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationCategoriesWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationSettingsForTopicsWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)getNotificationTopicsWithCompletionHandler:(id /* block */)arg1;
- (void)getPendingNotificationRequestsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 queue:(id)arg2;
- (id)notificationCategories;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (id)notificationTopics;
- (id)pendingNotificationRequests;
- (id)privateDelegate;
- (id)queue;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (void)removePendingNotificationRequestsWithIdentifiers:(id)arg1;
- (void)removeSimilarNotificationRequests:(id)arg1;
- (void)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)requestRemoveAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (void)setBadgeCount:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)setNotificationRequests:(id)arg1;
- (void)setNotificationRequests:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setNotificationTopics:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setPrivateDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setWantsNotificationResponsesDelivered;
- (bool)supportsContentExtensions;

// Image: /System/Library/PrivateFrameworks/ContextualUnderstanding.framework/ContextualUnderstanding

- (id)initWithBundleIdentifierNM:(id)arg1;
- (void)setWantsNotificationResponsesDeliveredNM;

// Image: /System/Library/PrivateFrameworks/HealthMobilityDaemon.framework/HealthMobilityDaemon

- (bool)areHealthNotificationsDisabled;

// Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2

- (void)ts_replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (void)smu_setBadgeNumber:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)smu_setBadgeString:(id)arg1 withCompletionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI

+ (id)hksp_healthNotificationCenter;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)workflowNotificationCenter;

@end
