
@protocol TabDocumentDelegate <TabDocumentNavigationObserving, TabDocumentRenderingProgressEventObserving>

@required

- (void)closeTabDocument:(TabDocument *)arg1 animated:(bool)arg2;
- (void)filteredArticleTextDidBecomeReadyInTabDocument:(TabDocument *)arg1;
- (_SFPageZoomPreferenceManager *)pageZoomPreferenceManagerForTabDocument:(TabDocument *)arg1;
- (unsigned long long)popUpPolicyForTabDocument:(TabDocument *)arg1;
- (void)removeAppBannerFromTabDocument:(TabDocument *)arg1 animated:(bool)arg2;
- (void)setAppBannerPinnedToTop:(bool)arg1 forTabDocument:(TabDocument *)arg2;
- (bool)tabDocument:(TabDocument *)arg1 canShowDownload:(_SFDownload *)arg2;
- (void)tabDocument:(TabDocument *)arg1 didChangePIPState:(bool)arg2;
- (void)tabDocument:(TabDocument *)arg1 didCreateNewTabDocument:(TabDocument *)arg2;
- (void)tabDocument:(TabDocument *)arg1 didCreatePreviewDocument:(TabDocument *)arg2;
- (void)tabDocument:(TabDocument *)arg1 didDetectReaderAvailability:(bool)arg2;
- (void)tabDocument:(TabDocument *)arg1 didExtractArticleText:(NSString *)arg2 withMetadata:(NSDictionary *)arg3;
- (void)tabDocument:(TabDocument *)arg1 didFinishLoadingWithError:(bool)arg2;
- (void)tabDocument:(TabDocument *)arg1 dismissViewControllerAnimated:(UIViewController *)arg2;
- (void)tabDocument:(TabDocument *)arg1 presentViewControllerAnimated:(UIViewController *)arg2;
- (bool)tabDocumentCanBecomeCurrentUserActivity:(TabDocument *)arg1;
- (bool)tabDocumentCanBeginInputSessionForStreamlinedLogin:(TabDocument *)arg1;
- (bool)tabDocumentCanCloseWindow:(TabDocument *)arg1;
- (bool)tabDocumentCanDisplayModalUI:(TabDocument *)arg1;
- (bool)tabDocumentCanDownloadFile:(TabDocument *)arg1;
- (bool)tabDocumentCanFindNextOrPrevious:(TabDocument *)arg1;
- (bool)tabDocumentCanRedirectToExternalApplication:(TabDocument *)arg1;
- (bool)tabDocumentCanShowJavaScriptAlertConfirmOrTextInput:(TabDocument *)arg1;
- (void)tabDocumentCommitPreviewedDocument:(TabDocument *)arg1;
- (void)tabDocumentCommitPreviewedDocumentAsNewTab:(TabDocument *)arg1 inBackground:(bool)arg2;
- (void)tabDocumentDidAddAlert:(TabDocument *)arg1;
- (void)tabDocumentDidCancelRedirectToExternalApplication:(TabDocument *)arg1;
- (void)tabDocumentDidChangeCanStopLoadingState:(TabDocument *)arg1;
- (void)tabDocumentDidChangeLocationWithinPageForMainFrame:(TabDocument *)arg1;
- (void)tabDocumentDidChangeMediaState:(TabDocument *)arg1;
- (void)tabDocumentDidChangeSafeAreaInsets:(TabDocument *)arg1;
- (void)tabDocumentDidChangeSafeAreaShouldAffectObscuredInsets:(TabDocument *)arg1;
- (void)tabDocumentDidClearLibraryType:(TabDocument *)arg1;
- (void)tabDocumentDidCompleteCheckForAppBanner:(TabDocument *)arg1;
- (void)tabDocumentDidDimissPreviewedDocument:(TabDocument *)arg1;
- (void)tabDocumentDidStartLoading:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateBackForward:(TabDocument *)arg1;
- (void)tabDocumentDidUpdatePersistentState:(TabDocument *)arg1;
- (void)tabDocumentDidUpdatePinned:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateShowingContinuous:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateThemeColor:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateTitle:(TabDocument *)arg1;
- (void)tabDocumentDidUpdateURL:(TabDocument *)arg1;
- (void)tabDocumentFluidProgressRocketAnimationDidComplete:(TabDocument *)arg1;
- (bool)tabDocumentIsBackgroundPreloading:(TabDocument *)arg1;
- (long long)tabDocumentOrderIndex:(TabDocument *)arg1;
- (NSData *)tabDocumentSavedSessionStateData:(TabDocument *)arg1;
- (void)tabDocumentShouldCloseAndSwitchToParentTab:(TabDocument *)arg1;
- (bool)tabDocumentShouldDeferAppBannerRemoval:(TabDocument *)arg1;
- (bool)tabDocumentShouldFillStringForFind:(TabDocument *)arg1;
- (bool)tabDocumentShouldHandleAuthentication:(TabDocument *)arg1;
- (bool)tabDocumentShouldHandleCertificateError:(TabDocument *)arg1;
- (void)tabDocumentWillDisableLinkPreview;
- (void)tabDocumentWillDismissInlineDialog:(TabDocument *)arg1;
- (void)tabDocumentWillShowInlineDialog:(TabDocument *)arg1;
- (void)willStartLoadFromUserTap:(TabDocument *)arg1;

@end
