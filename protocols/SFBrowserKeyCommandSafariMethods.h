
@protocol SFBrowserKeyCommandSafariMethods <SFBrowserKeyCommandSharedMethods>

@required

- (void)addToBookmarks:(id)arg1;
- (void)addToReadingList:(id)arg1;
- (void)closeActiveTab:(id)arg1;
- (void)closeOtherTabsKeyPressed;
- (void)editBookmarksKeyPressed;
- (void)emptySelectorForAddLinkToReadingListModifierLinkTap;
- (void)emptySelectorForDownloadModifierLinkTap;
- (void)emptySelectorForOpenInNewTabModifierLinkTap;
- (void)emptySelectorForOpenInNewTabOppositePreferenceModifierLinkTap;
- (void)focusAddressFieldAlternativeKeyPressed;
- (void)focusAddressFieldKeyPressed;
- (void)newTabAlternativeKeyPressed;
- (void)newTabWithAlternativeOrderingKeyPressed;
- (void)nextReadingListItemKeyPressed;
- (void)nextTabKeyPressed:(id)arg1;
- (void)openNewPrivateTab:(id)arg1;
- (void)openNewTab:(id)arg1;
- (void)previousReadingListItemKeyPressed;
- (void)previousTabKeyPressed:(id)arg1;
- (void)printKeyPressed;
- (void)reopenLastClosedTabPressed;
- (void)showBookmarksCollectionKeyPressed;
- (void)showCloudTabsCollectionKeyPressed;
- (void)showHistoryCollectionAlternativeKeyPressed;
- (void)showHistoryCollectionKeyPressed;
- (void)showReadingListCollectionKeyPressed;
- (void)showSharedWithYouCollectionKeyPressed;
- (void)switchToProfileKeyPressed:(UIKeyCommand *)arg1;
- (void)switchToTabKeyPressed:(UIKeyCommand *)arg1;
- (void)toggleBookmarksKeyPressed;
- (void)toggleDownloadsKeyPressed;
- (void)toggleShowingFavoritesBarKeyPressed;
- (void)toggleTabViewKeyPressed;

@optional

- (void)addAllTabsToBookmarks:(id)arg1;
- (void)closeAllTabs:(id)arg1;
- (void)closeAllTabsMatchingSearch:(id)arg1;
- (void)closeTabGroupKeyPressed;
- (void)mergeAllWindows:(id)arg1;
- (void)newTabGroupKeyPressed;
- (void)nextTabGroupKeyPressed;
- (void)openNewPrivateWindow:(id)arg1;
- (void)openNewWindow:(id)arg1;
- (void)openNewWindowInFrontmostProfile:(id)arg1;
- (void)pasteAndGo:(id)arg1;
- (void)pasteAndSearch:(id)arg1;
- (void)previousTabGroupKeyPressed;
- (void)renameTabGroupKeyPressed;
- (void)share:(id)arg1;
- (void)toggleShowWebpageStatusBar;

@end
