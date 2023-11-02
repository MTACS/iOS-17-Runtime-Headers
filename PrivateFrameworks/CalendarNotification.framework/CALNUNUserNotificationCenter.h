
@interface CALNUNUserNotificationCenter : NSObject <CALNUserNotificationCenter, UNUserNotificationCenterDelegate> {
    bool  _active;
    <CALNUserNotificationCenterDelegate> * _delegate;
    CALNUNNotificationContentMapper * _notificationContentMapper;
    CALNUNNotificationMapper * _notificationMapper;
    CALNUNNotificationRequestMapper * _notificationRequestMapper;
    CALNUNNotificationResponseMapper * _notificationResponseMapper;
    <CALNNotificationStorage> * _storage;
    <CALNUNUserNotificationCenterProtocol> * _userNotificationCenter;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALNUNNotificationContentMapper *notificationContentMapper;
@property (nonatomic, readonly) CALNUNNotificationMapper *notificationMapper;
@property (nonatomic, readonly) CALNUNNotificationRequestMapper *notificationRequestMapper;
@property (nonatomic, readonly) CALNUNNotificationResponseMapper *notificationResponseMapper;
@property (nonatomic, readonly) <CALNNotificationStorage> *storage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CALNUNUserNotificationCenterProtocol> *userNotificationCenter;

+ (void)_addSettingName:(id)arg1 value:(id)arg2 toStatsPayload:(id)arg3 forTopicIdentifier:(id)arg4;
+ (id)_statsPayloadKeyForSettingName:(id)arg1 topicIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_updatedRecord:(id)arg1;
- (void)activate;
- (bool)addNotificationRequest:(id)arg1 error:(id*)arg2;
- (void)collectSettingsStats:(id)arg1;
- (void)deactivate;
- (id)delegate;
- (id)deliveredNotifications;
- (id)initWithBundleIdentifier:(id)arg1 userNotificationCenterFactory:(id)arg2 storage:(id)arg3 notificationIconCache:(id)arg4;
- (bool)isActive;
- (id)notificationCategories;
- (id)notificationContentMapper;
- (id)notificationMapper;
- (id)notificationRequestMapper;
- (id)notificationResponseMapper;
- (void)removeAllDeliveredNotifications;
- (void)removeAllPendingNotificationRequests;
- (void)removeDeliveredNotificationsWithIdentifiers:(id)arg1;
- (bool)replaceNotificationRequest:(id)arg1 error:(id*)arg2;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCategories:(id)arg1;
- (id)storage;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
