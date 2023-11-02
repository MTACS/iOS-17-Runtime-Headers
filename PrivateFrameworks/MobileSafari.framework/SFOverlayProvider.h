
@interface SFOverlayProvider : NSObject <CPSInlineCardViewControllerDelegate> {
    _SFPerSitePreferencesVendor * __preferencesVendor;
    bool  _available;
    NSString * _bundleIdentifier;
    UIViewController * _cachedOwningViewController;
    CPSInlineCardViewController * _cardViewController;
    <SFOverlayProviderDelegate> * _delegate;
    NSURL * _url;
}

@property (setter=_setPreferencesVendor:, nonatomic) _SFPerSitePreferencesVendor *_preferencesVendor;
@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFOverlayProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *overlayViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (bool)alwaysShowOverlayForDebug;

- (void).cxx_destruct;
- (id)_preferencesVendor;
- (void)_setPreferencesVendor:(id)arg1;
- (id)bundleIdentifier;
- (void)cardViewControllerDidDisappear:(id)arg1 clipDidOpen:(bool)arg2 persistUserSettings:(bool)arg3;
- (id)delegate;
- (void)hideOverlayAnimated:(bool)arg1;
- (id)initWithURL:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isAvailable;
- (id)overlayViewController;
- (void)setAvailable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)showOverlayInScrollView:(id)arg1 viewController:(id)arg2;
- (id)url;
- (void)webViewBackforwardGestureNavigationDidEnd;
- (void)webViewBackforwardGestureNavigationWillBegin;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_resolvedPreferenceDomain;
- (void)_updateAppClipOverlayPreferenceHook;
- (void)requestOverlayWithPreferencesVendor:(id)arg1 completion:(id /* block */)arg2;

@end
