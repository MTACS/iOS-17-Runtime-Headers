
@interface HMDUserNotificationCenter : HMFObject <HMDUserNotificationCenterSettingsProviding, UNUserNotificationCenterDelegate> {
    <HMDUserNotificationCenterDelegate> * _delegate;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDUserNotificationCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly) Class superclass;
@property (readonly) UNUserNotificationCenter *userNotificationCenter;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_showNotification:(id)arg1;
- (id)configureWithNotificationCategories:(id)arg1;
- (id)delegate;
- (void)fetchAreUserNotificationsEnabledWithCompletion:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1 logEventSubmitter:(id)arg2;
- (id)logEventSubmitter;
- (void)notificationSettingsWithCompletionHandler:(id /* block */)arg1;
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1;
- (void)setBadgeNumber:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(bool)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;
- (id)userNotificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
