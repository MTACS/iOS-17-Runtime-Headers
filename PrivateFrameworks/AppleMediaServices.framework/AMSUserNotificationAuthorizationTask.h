
@interface AMSUserNotificationAuthorizationTask : AMSTask {
    NSString * _bundleIdentifier;
    <AMSUserNotificationAuthorizationDelegate> * _delegate;
    UNUserNotificationCenter * _notificationCenter;
    AMSUserNotificationAuthorizationOptions * _options;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic) <AMSUserNotificationAuthorizationDelegate> *delegate;
@property (nonatomic, retain) UNUserNotificationCenter *notificationCenter;
@property (nonatomic, retain) AMSUserNotificationAuthorizationOptions *options;

+ (id)_findEngagementRequestInResponse:(id)arg1;
+ (id)engagementRequestForFullSheet;
+ (id)recordEngagementEventWithBundleIdentifier:(id)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)_startEngagementAuthorizationWithResult:(id)arg1;
- (id)bundleIdentifier;
- (id)delegate;
- (id)initWithBundleIdentifier:(id)arg1 options:(id)arg2;
- (id)notificationCenter;
- (id)options;
- (id)requestAuthorization;
- (void)setDelegate:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setOptions:(id)arg1;

@end
