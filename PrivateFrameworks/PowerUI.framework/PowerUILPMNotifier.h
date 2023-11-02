
@interface PowerUILPMNotifier : NSObject <UNUserNotificationCenterDelegate> {
    int  _bsmToken;
    NSBundle * _bundle;
    NSObject<OS_dispatch_queue> * _firstUseQueue;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)autoDisabledNotificationRequest;
- (void)displayAutoDisabledNotification;
- (void)displayFirstUseNotification;
- (id)init;
- (void)removeAutoDisabledNotification;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
