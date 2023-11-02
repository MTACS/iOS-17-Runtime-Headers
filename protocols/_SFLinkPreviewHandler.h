
@protocol _SFLinkPreviewHandler <BCSActionDelegate>

@required

- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 commitPreviewViewControllerForAction:(long long)arg2 withTabOrder:(long long)arg3;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 didProduceNavigationIntent:(_SFNavigationIntent *)arg2 forAction:(long long)arg3;
- (UIViewController<_SFBrowserViewProviding> *)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 previewViewControllerForURL:(NSURL *)arg2;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 redirectToExternalNavigationResult:(_SFNavigationResult *)arg2;
- (_SFNavigationResult *)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 resultOfLoadingURL:(NSURL *)arg2;
- (bool)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 supportsAction:(long long)arg2 forURL:(NSURL *)arg3;

@optional

- (bool)isAutomationEnabledForLinkPreviewHelper:(_SFLinkPreviewHelper *)arg1;
- (bool)isPrivateBrowsingEnabledForPreviewHelper:(_SFLinkPreviewHelper *)arg1;
- (void)linkPreviewHelper:(_SFLinkPreviewHelper *)arg1 addURLToReadingList:(NSURL *)arg2;
- (void)linkPreviewHelperWillBeginDownload:(_SFLinkPreviewHelper *)arg1;
- (void)linkPreviewHelperWillDisableLinkPreview;
- (void)linkPreviewHelperWillOpenUniversalLinkLocally:(_SFLinkPreviewHelper *)arg1;
- (UIMenu *)openInTabGroupMenuWithNewTabGroupName:(void *)arg1 URL:(void *)arg2 descendantCount:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSURL *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
