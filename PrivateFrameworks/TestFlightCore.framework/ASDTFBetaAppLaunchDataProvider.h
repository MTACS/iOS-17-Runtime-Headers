
@interface ASDTFBetaAppLaunchDataProvider : NSObject <TFBetaAppLaunchDataProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)loadLaunchScreenForBundleWithURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
