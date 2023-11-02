
@interface NotificationCenter : NSObject <UNUserNotificationCenterDelegate> {
    NSString * _body;
    bool  _hasHaptics;
    bool  _hasHealthApp;
    NSString * _subtitle;
    NSString * _title;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_healthAppHidden;

- (void).cxx_destruct;
- (void)handleNotificationAction:(id)arg1;
- (id)init;
- (void)sendNotificationWithExposureLevel:(double)arg1 duration:(double)arg2 eventType:(unsigned int)arg3 volumeLoweringAction:(unsigned int)arg4;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
