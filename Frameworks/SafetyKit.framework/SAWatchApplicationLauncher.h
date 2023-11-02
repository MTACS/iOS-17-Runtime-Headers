
@interface SAWatchApplicationLauncher : NSObject <SAApplicationLauncher>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)init;
- (void)openApplicationInBackgroundWithBundleId:(id)arg1 withReason:(long long)arg2 completion:(id /* block */)arg3;

@end
