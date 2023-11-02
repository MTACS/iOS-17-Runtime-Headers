
@protocol BookmarksNavigationControllerDelegate <NSObject>

@optional

- (void)bookmarksNavigationController:(BookmarksNavigationController *)arg1 editFavoritesGridViewBookmark:(WebBookmark *)arg2;
- (void)bookmarksNavigationController:(void *)arg1 provideContextResponseWithBlock:(void *)arg2; // needs 2 arg types, found 7: BookmarksNavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKContextResponse *, void*
- (void)bookmarksNavigationController:(BookmarksNavigationController *)arg1 setBookmark:(WebBookmark *)arg2 asRead:(bool)arg3;
- (bool)bookmarksNavigationController:(BookmarksNavigationController *)arg1 tabItem:(NSObject<WBSTabItemSearchSupport> *)arg2 matchesSearchText:(NSString *)arg3;
- (void)bookmarksNavigationController:(BookmarksNavigationController *)arg1 updateReadingListUnreadFilterShowingAllBookmarks:(bool)arg2;
- (void)bookmarksNavigationControllerContentDidBecomeDirty:(BookmarksNavigationController *)arg1;
- (ContinuousReadingItem *)bookmarksNavigationControllerCurrentContinuousReadingItem:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerDidPressDoneButton:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerDidReload:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerDidTapOutsideFavorites:(BookmarksNavigationController *)arg1;
- (bool)bookmarksNavigationControllerIsPresentedInsideBlankTab:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerReloadDidFail:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerViewDidAppear:(BookmarksNavigationController *)arg1;
- (void)bookmarksNavigationControllerViewDidDisappear:(BookmarksNavigationController *)arg1;
- (WebBookmark *)containingBookmarkForNavigationController:(BookmarksNavigationController *)arg1;
- (<TabGroupProvider> *)tabGroupProvider;

@end
