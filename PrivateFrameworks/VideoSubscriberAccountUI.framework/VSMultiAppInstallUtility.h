
@interface VSMultiAppInstallUtility : NSObject

+ (void)determineMultiAppEnabledForProvider:(id)arg1 completion:(id /* block */)arg2;
+ (void)determineMultiAppEnabledForProvider:(id)arg1 withAccount:(id)arg2 completion:(id /* block */)arg3;
+ (void)determineMultiAppEnabledForProvider:(id)arg1 withAccount:(id)arg2 withBagLoadOperation:(id)arg3 completion:(id /* block */)arg4;
+ (void)filterBundleIDsByPendingConsent:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)getDecidedNonChannelAppsForProvider:(id)arg1 account:(id)arg2 device:(id)arg3;
+ (void)getPendingConsentBundleIDsFromSelectedAppDescriptions:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)isShowMultiAppInstallForCaseAlwaysRequirePasswordEnabledWithBagLoadOperation:(id)arg1 completion:(id /* block */)arg2;

@end
