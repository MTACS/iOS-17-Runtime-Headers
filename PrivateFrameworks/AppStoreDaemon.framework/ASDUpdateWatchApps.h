
@interface ASDUpdateWatchApps : NSObject

+ (bool)shouldPromptBeforeUpdating;
+ (void)shouldPromptBeforeUpdatingWithResultHandler:(id /* block */)arg1;
+ (bool)updateBundleIDs:(id)arg1 userInitiated:(bool)arg2 error:(id*)arg3;
+ (void)updateBundleIDs:(id)arg1 userInitiated:(bool)arg2 withResultHandler:(id /* block */)arg3;

@end
