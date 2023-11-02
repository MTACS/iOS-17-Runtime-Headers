
@interface AMSPushParsableGenericNotification : NSObject <AMSPushParsable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_generateDialogRequestFromPayload:(id)arg1 config:(id)arg2;
+ (id)_generateNotificationFromPayload:(id)arg1 config:(id)arg2;
+ (bool)_shouldPresentAlertForPayload:(id)arg1;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;

@end
