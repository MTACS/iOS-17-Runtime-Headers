
@protocol BrowserControllerUIDelegate <NSObject>

@required

- (<BannerControllerDelegate> *)browserController:(BrowserController *)arg1 delegateForBannerController:(BannerController *)arg2;
- (void)browserController:(BrowserController *)arg1 didDisconnectFromScene:(UIWindowScene *)arg2;
- (void)browserController:(BrowserController *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)browserController:(BrowserController *)arg1 setCatalogViewController:(CatalogViewController *)arg2;
- (<TabDocumentViewGeometryProviding> *)browserController:(BrowserController *)arg1 tabDocumentViewGeometryProviderForTabDocumentView:(TabDocumentView *)arg2;
- (<TabSnapshotContentProvider> *)browserController:(BrowserController *)arg1 tabSnapshotContentProviderForTabDocument:(TabDocument *)arg2;
- (void)browserController:(BrowserController *)arg1 updateViewForActiveTabDocument:(TabDocument *)arg2;
- (void)browserController:(BrowserController *)arg1 willConnectToScene:(UIWindowScene *)arg2 session:(UISceneSession *)arg3 options:(UISceneConnectionOptions *)arg4;
- (CatalogViewController *)browserControllerCatalogViewController:(BrowserController *)arg1;
- (double)browserControllerCatalogViewPopoverWidth:(BrowserController *)arg1;
- (UIView *)browserControllerContentContainerView:(BrowserController *)arg1;
- (void)browserControllerDidBeginIgnoringUserInteraction:(BrowserController *)arg1;
- (void)browserControllerDidEndIgnoringUserInteraction:(BrowserController *)arg1;
- (void)browserControllerDidEndNavigationGesture:(BrowserController *)arg1;
- (void)browserControllerDidEndObfuscating:(BrowserController *)arg1;
- (void)browserControllerLayOutCatalogView:(BrowserController *)arg1;
- (void)browserControllerMakeKey:(BrowserController *)arg1;
- (void)browserControllerMakeKeyAndVisible:(BrowserController *)arg1;
- (<_SFNavigationBarCommon> *)browserControllerNavigationBar:(BrowserController *)arg1;
- (bool)browserControllerShouldUpdateSnapshotForActiveTab:(BrowserController *)arg1;
- (bool)browserControllerShouldUpdateWebViewGeometryOnScroll:(BrowserController *)arg1;
- (double)browserControllerStatusBarWidth:(BrowserController *)arg1;
- (TabBarManager *)browserControllerTabBarManager:(BrowserController *)arg1;
- (UIView *)browserControllerTabContentContainerView:(BrowserController *)arg1;
- (TabHoverPreview *)browserControllerTabHoverPreview:(BrowserController *)arg1;
- (void)browserControllerWillBeginNavigationGesture:(BrowserController *)arg1;
- (void)browserControllerWillBeginObfuscating:(BrowserController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })browserControllerWindowFrame:(BrowserController *)arg1;
- (void)handleTabViewPinchForBrowserController:(BrowserController *)arg1;
- (<SidebarUIProxy> *)sidebarUIProxyForBrowserController:(BrowserController *)arg1;
- (void)updateTabViewPinchRecognizerForBrowserController:(BrowserController *)arg1;

@optional

- (void)browserController:(BrowserController *)arg1 animateLinkImage:(struct CGImage { }*)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(UIView *)arg4 toBarItem:(long long)arg5;
- (void)browserController:(BrowserController *)arg1 animateSafariIconLinkFromPoint:(struct CGPoint { double x1; double x2; })arg2 inView:(UIView *)arg3;
- (void)browserController:(BrowserController *)arg1 catalogViewController:(CatalogViewController *)arg2 willDismissPopoverWithReason:(long long)arg3;
- (void)browserController:(BrowserController *)arg1 catalogViewController:(CatalogViewController *)arg2 willPresentViewControllerWithinPopover:(UIViewController *)arg3;
- (void)browserController:(BrowserController *)arg1 didChangeReaderVisibilityForTabDocument:(TabDocument *)arg2;
- (void)browserController:(BrowserController *)arg1 didDismissTransientUIWithOptions:(unsigned long long)arg2;
- (void)browserController:(BrowserController *)arg1 didFinishVoiceSearchWithNavigation:(bool)arg2;
- (void)browserController:(BrowserController *)arg1 overrideDownloadQuickLookPreview:(_SFDownload *)arg2;
- (void)browserController:(BrowserController *)arg1 tabBarExpansionViewDidBeginTrackingDropSession:(id <UIDropSession>)arg2;
- (void)browserController:(BrowserController *)arg1 tabBarExpansionViewDidEndTrackingDropSession:(id <UIDropSession>)arg2;
- (void)browserController:(BrowserController *)arg1 tabDocumentDidChangeMediaState:(TabDocument *)arg2;
- (void)browserController:(BrowserController *)arg1 tabDocumentDidStartLoading:(TabDocument *)arg2;
- (void)browserController:(BrowserController *)arg1 tabDocumentWillBeginDragSession:(id <UIDragSession>)arg2;
- (void)browserController:(BrowserController *)arg1 tabDocumentWillEndDragSession:(id <UIDragSession>)arg2;
- (void)browserController:(BrowserController *)arg1 webExtensionWasRemotelyEnabled:(WBSWebExtensionData *)arg2;
- (void)browserController:(BrowserController *)arg1 willChangeToFavoritesState:(long long)arg2;
- (void)browserController:(BrowserController *)arg1 willPresentAutocompletionDetailViewController:(UIViewController *)arg2;
- (void)browserController:(BrowserController *)arg1 willPresentStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg2;
- (void)browserControllerContentContainerViewFrameDidChange:(BrowserController *)arg1;
- (UIResponder *)browserControllerNextResponder:(BrowserController *)arg1;
- (bool)browserControllerShouldIncreaseTopPaddingForStartPage:(BrowserController *)arg1;
- (void)browserControllerShouldUpdateUnifiedBarVisibility:(BrowserController *)arg1;
- (void)browserControllerStartPageUpdatePolicyDidChange:(BrowserController *)arg1;
- (<SFStartPageVisualStyleProviding> *)browserControllerStartPageVisualStyleProvider:(BrowserController *)arg1;
- (TabOverview *)createTabOverviewForBrowserController:(BrowserController *)arg1;
- (UIViewController *)viewControllerToPresentFromForBrowserController:(BrowserController *)arg1;

@end
