
@interface AMSPushParsableBadging : NSObject <AMSPushParsable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_performLegacyCallbackWithRequest:(id)arg1 payload:(id)arg2 config:(id)arg3 bag:(id)arg4 error:(id*)arg5;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (bool)shouldSkipAccountCheck;

@end
