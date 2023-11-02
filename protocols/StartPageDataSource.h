
@protocol StartPageDataSource <NSObject, _SFNavigationIntentHandling>

@required

- (NSString *)activeProfileIdentifier;
- (bool)canShowSidebar;
- (bool)catalogPopoverIsShowing;
- (<WBSCloudTabDeviceProvider> *)cloudTabStore;
- (void)commitLinkPreviewViewController:(UIViewController *)arg1;
- (void)editBookmark:(WebBookmark *)arg1;
- (bool)getContextForCurrentPageWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKContextResponse *, void*
- (bool)isPrivateBrowsingEnabled;
- (void)linkPreviewProviderWillDismissPreview;
- (UIViewController *)linkPreviewViewControllerForNavigationIntent:(_SFNavigationIntent *)arg1;
- (void)presentBookmarkPickerWithImportHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WebBookmark *, void*
- (void)presentCloudTabsPickerWithPrimaryDeviceUUID:(NSString *)arg1;
- (void)presentPrivacyReport;
- (void)setPresentingModalBookmarksController:(bool)arg1 withExclusiveCollection:(NSString *)arg2 bookmarkUUIDString:(NSString *)arg3 animated:(bool)arg4;
- (bool)shouldIncreaseTopSpacingForStartPageController:(StartPageController *)arg1;
- (bool)shouldShowWhatsNewInPrivateBrowsingSheet;
- (bool)startPageControllerActiveTabIsBlank:(StartPageController *)arg1;
- (<TabGroupProvider> *)tabGroupProvider;
- (bool)tabItem:(NSObject<WBSTabItemSearchSupport> *)arg1 matchesSearchText:(NSString *)arg2;
- (long long)updatePolicyForStartPageController:(StartPageController *)arg1;

@end
