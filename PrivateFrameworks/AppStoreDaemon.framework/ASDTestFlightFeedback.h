
@interface ASDTestFlightFeedback : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getDisplayNamesForBundleID:(id)arg1;
- (id)getDisplayNamesForBundleURL:(id)arg1;
- (id)getEmailAddressForBundleID:(id)arg1;
- (id)getEmailAddressForBundleURL:(id)arg1;
- (void)getFeedbackMetadataForBundleID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getFeedbackMetadataForBundleURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)getLaunchInfoForBundleID:(id)arg1;
- (void)getLaunchInfoForBundleID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)getLaunchInfoForBundleURL:(id)arg1;
- (void)getLaunchInfoForBundleURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)getLaunchInfoForVersion:(id)arg1;
- (id)init;
- (bool)isFeedbackEnabledForBundleID:(id)arg1;
- (bool)isFeedbackEnabledForBundleURL:(id)arg1;
- (bool)isLaunchScreenEnabledForBundleID:(id)arg1;
- (bool)isLaunchScreenEnabledForBundleURL:(id)arg1;
- (void)setFeedbackEnabled:(bool)arg1 forVersion:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setLaunchInfo:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setLaunchScreenEnabled:(bool)arg1 forVersion:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)submitFeedback:(id)arg1 bundleURL:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)submitFeedback:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)updateTestNotes:(id)arg1 forVersion:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
