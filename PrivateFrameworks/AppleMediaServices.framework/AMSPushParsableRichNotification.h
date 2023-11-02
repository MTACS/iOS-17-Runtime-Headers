
@interface AMSPushParsableRichNotification : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (bool)shouldSkipAccountCheck;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;

@end
