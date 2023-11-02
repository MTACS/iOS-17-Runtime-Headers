
@interface AMSPushParsableFollowUp : NSObject <AMSBagConsumer, AMSPushParsable, AMSUserNotificationIntentDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createFollowUpItemFromNotification:(id)arg1;
+ (id)_createFollowUpItemFromPayload:(id)arg1;
+ (id)_createNotificationFromFollowUpItem:(id)arg1;
+ (void)_performClearWithPayload:(id)arg1;
+ (void)_performPostWithPayload:(id)arg1 bag:(id)arg2;
+ (bool)_shouldAllowFollowUp:(id)arg1 bag:(id)arg2;
+ (bool)_shouldClearFollowUpFromPayload:(id)arg1;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (bool)isDeviceOfferNotification:(id)arg1;
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2 bag:(id)arg3;
+ (id)sharedISO8601DateFormatter;
+ (bool)shouldSkipAccountCheck;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2 bag:(id)arg3;

@end
