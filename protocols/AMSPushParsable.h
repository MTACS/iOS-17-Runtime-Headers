
@protocol AMSPushParsable <NSObject>

@required

+ (void)handleNotificationPayload:(AMSPushPayload *)arg1 config:(AMSPushConfiguration *)arg2 bag:(id <AMSBagProtocol>)arg3;

@optional

+ (bool)shouldSkipAccountCheck;

@end
