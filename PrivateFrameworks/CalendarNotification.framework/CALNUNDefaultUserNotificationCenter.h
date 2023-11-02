
@interface CALNUNDefaultUserNotificationCenter : NSObject <CALNUNUserNotificationCenterProtocol> {
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (bool)addNotificationRequest:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)deliveredNotifications;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)notificationCategories;
- (id)notificationSettings;
- (id)notificationSettingsForTopics;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (bool)replaceContentForRequestWithIdentifier:(id)arg1 replacementContent:(id)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (void)setWantsNotificationResponsesDelivered;
- (id)userNotificationCenter;

@end
