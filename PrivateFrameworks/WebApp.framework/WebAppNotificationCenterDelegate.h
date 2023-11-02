
@interface WebAppNotificationCenterDelegate : NSObject <UNUserNotificationCenterDelegate> {
    NSMutableDictionary * _webAppViewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDelegate;

- (void).cxx_destruct;
- (void)addWebAppViewController:(id)arg1;
- (id)init;
- (void)removeWebAppViewController:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
