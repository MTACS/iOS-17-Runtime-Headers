
@interface _HKRPDefaultWatchAppsInstallProvider : NSObject <HKRPWatchInstallAppsProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
