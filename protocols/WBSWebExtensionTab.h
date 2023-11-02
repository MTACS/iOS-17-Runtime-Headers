
@protocol WBSWebExtensionTab <NSObject>

@required

- (unsigned long long)changedPropertiesForOnUpdatedWebExtensionEvent;
- (void)close;
- (NSURL *)expectedOrCurrentURL;
- (NSURL *)expectedOrCurrentURLOrLastActiveURLIfCrashed;
- (NSDictionary *)extensionIdentifierToDynamicallyInjectedStyleSheets;
- (void)goBack;
- (void)goForward;
- (double)idForWebExtensions;
- (bool)isArticle;
- (bool)isAudible;
- (bool)isFrontmost;
- (bool)isInReaderMode;
- (bool)isLoadingComplete;
- (bool)isMuted;
- (bool)isPinnedTab;
- (bool)isPrivate;
- (void)loadURL:(NSURL *)arg1;
- (void)mute;
- (double)parentTabIDForWebExtensions;
- (NSURL *)pendingURLForWebExtensions;
- (WBSWebExtensionTabPosition *)previousWebExtensionTabPosition;
- (WBProfile *)profile;
- (void)reload;
- (void)reloadFromOrigin;
- (void)select;
- (void)setExtensionIdentifierToDynamicallyInjectedStyleSheets:(NSDictionary *)arg1;
- (void)setPreviousWebExtensionTabPosition:(WBSWebExtensionTabPosition *)arg1;
- (void)setZoomFactor:(double)arg1;
- (NSString *)tabTitle;
- (struct CGSize { double x1; double x2; })tabViewSize;
- (void)toggleReader;
- (WBSTranslationContext *)translationContext;
- (void)unmute;
- (NSURL *)urlForExtensions;
- (<WBSWebExtensionWindow> *)webExtensionWindow;
- (WKWebView *)webViewForExtensions;
- (NSArray *)webViewsThatCanReceiveMessages;
- (double)zoomFactor;

@end
