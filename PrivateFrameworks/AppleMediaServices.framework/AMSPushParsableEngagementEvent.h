
@interface AMSPushParsableEngagementEvent : NSObject <AMSPushParsable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_eventForMapiPayload:(id)arg1 account:(id)arg2 bag:(id)arg3;
+ (id)_eventForStaticAssetPayload:(id)arg1 bag:(id)arg2;
+ (void)_waitForPromises:(id)arg1 completion:(id /* block */)arg2;
+ (void)handleNotificationPayload:(id)arg1 config:(id)arg2 bag:(id)arg3;
+ (bool)shouldSkipAccountCheck;

@end
