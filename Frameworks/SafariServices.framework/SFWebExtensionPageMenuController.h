
@interface SFWebExtensionPageMenuController : WBSWebExtensionToolbarItem <WBSWebExtensionToolbarItemImplementation, WKUIDelegate> {
    _SFWebExtensionActivity * _activityItem;
    _SFWebExtensionSettingsAlertItem * _alertItem;
    UIViewController * _parentViewController;
    _SFWebExtensionPopupViewController * _popupViewController;
    <WBSWebExtensionTab> * _tab;
    NSNumber * _tabIdentifier;
    WBSWebExtensionData * _webExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WBSWebExtensionWindow> *windowDisplayingPopupWebView;

+ (id)_imageViewForWarningTriangleImage:(id)arg1;
+ (id)badgeViewForText:(id)arg1;

- (void).cxx_destruct;
- (void)_createTabWithURL:(id)arg1;
- (void)_loadWebExtensionPopupURL:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3 forTab:(id)arg4;
- (id)activityForTab:(id)arg1;
- (id)alertItemForTab:(id)arg1;
- (void)didSetBadgeText:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)didSetEnabledState:(bool)arg1 forTabWithIdentifier:(id)arg2;
- (void)didSetIcon:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)dismissPopupImmediatelyIfNecessary;
- (id)iconForTab:(id)arg1;
- (id)iconForTab:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithExtension:(id)arg1;
- (void)performActionForTab:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3;
- (void)popupDidNavigateRequestingNewWindowToURL:(id)arg1;
- (id)popupWebView;
- (bool)shouldShowWarningTriangleImageForTab:(id)arg1;
- (void)showPopupForTab:(id)arg1 parentViewController:(id)arg2 popoverSourceInfo:(id)arg3;
- (bool)showingExtensionPopup;
- (id)webExtension;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webViewDidClose:(id)arg1;
- (id)windowDisplayingPopupWebView;

@end
