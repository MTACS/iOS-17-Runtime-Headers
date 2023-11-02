
@interface ReadingListLibraryItemController : LibraryItemController <ReadingListViewControllerDelegate> {
    ReadingListViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bookmarksNavigationControllerDelegate;
- (id)accessibilityIdentifier;
- (long long)dropIntentForSession:(id)arg1;
- (unsigned long long)dropOperationForSession:(id)arg1;
- (bool)isSpringLoaded;
- (bool)panelViewControllerShouldUseSearchControllerInNavigationItem:(id)arg1;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;
- (void)readingListViewController:(id)arg1 setBookmark:(id)arg2 asRead:(bool)arg3;
- (void)readingListViewController:(id)arg1 updateUnreadFilterShowingAllBookmarks:(bool)arg2;
- (id)readingListViewControllerCurrentReadingListItem:(id)arg1;
- (bool)selectionFollowsFocus;
- (void)updateListContentConfiguration:(id)arg1;
- (id)viewController;

@end
