
@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)initialContentDownloadsEnabled;
+ (void)installApp:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)installApp:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)installApps:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)interface;
+ (void)setInitialContentDownloadsEnabled:(bool)arg1;

@end
