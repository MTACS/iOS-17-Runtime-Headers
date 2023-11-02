
@protocol BookmarksTableViewControllerDelegate <BookmarksPanelViewControllerDelegate>

@required

- (bool)bookmarksTableViewIsReadOnly:(BookmarksTableViewController *)arg1;
- (bool)bookmarksTableViewShouldDispatchNavigationIntent:(BookmarksTableViewController *)arg1 forSelectedBookmark:(WebBookmark *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetForBookmarksTableViewController:(BookmarksTableViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInsetForBookmarksTableViewController:(BookmarksTableViewController *)arg1;

@optional

- (void)bookmarksTableViewControllerWillDisappear:(BookmarksTableViewController *)arg1;
- (<TabGroupProvider> *)tabGroupProvider;

@end
