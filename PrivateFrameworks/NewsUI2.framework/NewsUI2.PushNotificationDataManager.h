
@interface NewsUI2.PushNotificationDataManager : NSObject <FCUserInfoObserving> {
    void debounceTasks;
    void featureAvailability;
    void pushNotificationService;
    void subscriptionController;
    void userInfo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)userInfoDidChangeSportsTopicNotificationsEnabledState:(id)arg1 fromCloud:(bool)arg2;

@end
