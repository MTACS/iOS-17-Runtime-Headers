
@protocol _SFBrowserContentController <NSObject>

@required

- (<_SFBrowserDocument> *)activeDocument;
- (<WBSWebExtensionTab> *)activeTabForExtensions;
- (bool)canReadActiveLanguage;
- (void)clearBadgeOnPageFormatMenu;
- (unsigned long long)downloadsCount;
- (bool)hasDedicatedDownloadsToolbarItem;
- (bool)hasDedicatedExtensionsButton;
- (bool)hasDedicatedMediaStateButton;
- (bool)hasUnviewedDownloads;
- (bool)isShowingReader;
- (bool)keepBarsMinimized;
- (_SFPageZoomPreferenceManager *)pageZoomManager;
- (_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
- (void)presentDownloadsViewController;
- (void)presentModalViewController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setKeepBarsMinimized:(bool)arg1;
- (void)siriReadThisMenuInvocation;
- (long long)siriReaderPlaybackStateForActiveTab;
- (bool)supportsPrivacyReport;
- (void)toggleShowingReaderForUserAction;
- (UIViewController *)viewControllerToPresentFrom;

@end
