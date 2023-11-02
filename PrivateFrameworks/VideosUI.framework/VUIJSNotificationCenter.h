
@interface VUIJSNotificationCenter : VUIJSObject <VUIJSNotificationCenter, WLKNotificationCenterDelegate> {
    WLKNotificationCenter * _center;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)showAppInstallCompletePushNotificationWithAppContext:(id)arg1 appName:(id)arg2 contentName:(id)arg3 punchoutURL:(id)arg4;
+ (void)showSignupAlertPushNotificationWithAppContext:(id)arg1;

- (void).cxx_destruct;
- (id)badgeData;
- (void)clearBadgeData;
- (void)handleAction:(id)arg1;
- (id)initWithAppContext:(id)arg1;
- (void)post:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4;
- (void)setBadgeNumber:(id)arg1;
- (void)setBadgeString:(id)arg1;

@end
