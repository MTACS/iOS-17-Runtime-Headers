
@interface SFWebExtension : WBSWebExtensionData {
    id /* block */  _accessRequestDialogCompletionHandler;
    bool  _isAccessRequestDialogPresentedOrScheduled;
    bool  _isBannerShownOrScheduled;
}

@property (nonatomic, readonly) WKWebViewConfiguration *extensionWebViewConfiguration;
@property (nonatomic, readonly) bool isDevelopmentBuild;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

- (void).cxx_destruct;
- (bool)_applicationIsActive;
- (id)_backgroundWebViewConfiguration;
- (bool)_canShowBanner;
- (void)_compileDeclarativeNetRequestRules:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_hidePermissionBanner;
- (id)_lastInteractionDate;
- (void)_showAccessRequestDialogForPendingRequestsAndAdditionalURLs:(id)arg1 additionalCallingAPIName:(id)arg2 performingUserGestureInTab:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_updateLastInteractionDate;
- (bool)canLoadWithErrorString:(id*)arg1;
- (void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)arg1 inTab:(id)arg2 options:(unsigned long long)arg3 callingAPIName:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)extensionWebViewConfiguration;
- (bool)isDevelopmentBuild;
- (void)permissionRequestBannerWasDismissed;
- (void)requestPermissionsFromToolbarItemInTab:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)showAlertForPendingPermissionRequests;
- (void)showOrHidePermissionRequestBannerIfNeeded;
- (void)userGesturePerformedInTab:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_loadToolbarItem;
- (void)_loadToolbarItemInPrivateBrowsing;
- (void)_unloadToolbarItem;
- (void)_unloadToolbarItemInPrivateBrowsing;
- (void)_validateToolbarItemInAllWindows;

@end
