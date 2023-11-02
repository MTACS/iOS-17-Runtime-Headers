
@interface WBSWebExtensionToolbarItem : NSObject <WKNavigationDelegate> {
    NSString * _badgeText;
    bool  _enabled;
    WBSSafariExtensionStateObserver * _extensionStateObserver;
    WBSWebExtensionsController * _extensionsController;
    bool  _hasUpdatedBadgeForAllTabs;
    UIImage * _image;
    NSString * _label;
    NSURL * _popupURL;
    WKWebView * _popupWebView;
    UIImage * _runtimeIcon;
    bool  _showingExtensionPopup;
    NSMutableDictionary * _tabIdentifierToBadgeTextMap;
    NSMutableDictionary * _tabIdentifierToDNRBlockedCountMap;
    NSMutableDictionary * _tabIdentifierToEnabledMap;
    NSMutableDictionary * _tabIdentifierToIconMap;
    NSMutableDictionary * _tabIdentifierToPopupURLMap;
    NSMutableDictionary * _tabIdentifierToTitleMap;
    NSMutableSet * _tabIdentifiersWithUpdatedBadgeText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) UIImage *image;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) WKWebView *popupWebView;
@property (nonatomic, readonly) bool showingExtensionPopup;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WBSWebExtensionData *webExtension;

- (void).cxx_destruct;
- (void)_webViewDidDisableInspectorBrowserDomain:(id)arg1;
- (void)_webViewDidEnableInspectorBrowserDomain:(id)arg1;
- (id)badgeTextForTabWithIdentifier:(id)arg1;
- (void)clearBlockedResourceCounts;
- (void)clearStateForTabWithIdentifier:(id)arg1;
- (void)didSelectTab:(id)arg1;
- (void)didViewBadgeInTabWithIdentifier:(id)arg1;
- (bool)hasUpdatedBadgeTextInTabWithIdentifier:(id)arg1;
- (id)iconForTabWithIdentifier:(id)arg1;
- (id)image;
- (void)increaseBlockedResourcesCountByAmount:(id)arg1 forTabWithIdentifier:(id)arg2;
- (id)initWithWebExtension:(id)arg1 extensionsController:(id)arg2 label:(id)arg3 popupURL:(id)arg4 image:(id)arg5;
- (bool)isEnabledForTabWithIdentifier:(id)arg1;
- (id)label;
- (id)popupURLForTabWithIdentifier:(id)arg1;
- (id)popupWebView;
- (void)setBadgeText:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)setEnabled:(bool)arg1 forTabWithIdentifier:(id)arg2;
- (void)setIcon:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)setPopupURL:(id)arg1 forTabWithIdentifier:(id)arg2;
- (void)setTitle:(id)arg1 forTabWithIdentifier:(id)arg2;
- (bool)shouldRequestAccessForTab:(id)arg1;
- (bool)showingExtensionPopup;
- (id)titleForTabWithIdentifier:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

@end
