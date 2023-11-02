
@interface AKAutoBugCapture : NSObject

+ (bool)shouldCapturePromptBugForContext:(id)arg1;
+ (void)triggerAutoBugCaptureWithSubType:(id)arg1 andBundleID:(id)arg2 userInfo:(id)arg3;
+ (id)userInfoFromAccount:(id)arg1;
+ (id)userInfoFromContext:(id)arg1;

@end
