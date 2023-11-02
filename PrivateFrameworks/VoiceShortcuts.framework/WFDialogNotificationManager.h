
@interface WFDialogNotificationManager : NSObject <UNUserNotificationCenterDelegate> {
    WFUserNotificationManager * _userNotificationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFUserNotificationManager *userNotificationManager;

+ (id)categoryIdentifiers;
+ (id)dialogNotificationCategory;
+ (id)dialogNotificationConfirmationCategory;

- (void).cxx_destruct;
- (void)handleRemovedIgnoredNotifications:(id)arg1;
- (id)initWithUserNotificationManager:(id)arg1;
- (void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)userNotificationManager;

@end
