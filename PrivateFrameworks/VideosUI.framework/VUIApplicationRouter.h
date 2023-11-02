
@interface VUIApplicationRouter : NSObject

+ (void)_amsBagURLForKey:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)_dismissPresentedViewControllerWithCompletion:(id /* block */)arg1;
+ (void)_handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3 isModalPresentation:(bool)arg4 originalNavigationController:(id)arg5;
+ (bool)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 documentOptions:(id)arg4 completion:(id /* block */)arg5;
+ (bool)_handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 eventDataSource:(id)arg4 documentOptions:(id)arg5 extraInfo:(id*)arg6;
+ (void)_navigateAccountSettingsWithDestinationViewController:(id)arg1 shouldEmbedInNavController:(bool)arg2 isModalPresentation:(bool)arg3 originalNavigationController:(id)arg4;
+ (void)_performForType:(long long)arg1 targetResponder:(id)arg2 appContext:(id)arg3 eventDataSource:(id)arg4 documentOptions:(id)arg5;
+ (id)_viewControllerWithIdentifier:(id)arg1;
+ (id)currentNavigationController;
+ (void)dismissOrPopLastViewControllerWithCompletion:(id /* block */)arg1;
+ (void)dismissOrPopViewControllerWithId:(id)arg1 completion:(id /* block */)arg2;
+ (void)dismissPresentedViewController;
+ (id)eventDataSourceForEvent:(id)arg1 routerDataSource:(id)arg2;
+ (bool)handleAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3;
+ (bool)handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 routerDataSource:(id)arg4 supplementaryData:(id)arg5 extraInfo:(id*)arg6;
+ (void)invokeAction:(id)arg1 primaryAction:(id)arg2 targetResponder:(id)arg3 completion:(id /* block */)arg4;
+ (void)invokeAction:(id)arg1 targetResponder:(id)arg2 completion:(id /* block */)arg3;
+ (void)pushAccountSettingsEventWithUrl:(id)arg1 amsBagKey:(id)arg2 useAMSWebView:(bool)arg3 fromNavigationController:(id)arg4;
+ (id)topMostVisibleViewController;
+ (id)topPresentedViewController;

@end
