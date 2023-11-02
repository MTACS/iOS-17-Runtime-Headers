
@protocol ReadingListViewControllerDelegate <BookmarksPanelViewControllerDelegate>

@required

- (void)readingListViewController:(ReadingListViewController *)arg1 setBookmark:(WebBookmark *)arg2 asRead:(bool)arg3;
- (ContinuousReadingItem *)readingListViewControllerCurrentReadingListItem:(ReadingListViewController *)arg1;

@optional

- (void)readingListViewController:(ReadingListViewController *)arg1 updateUnreadFilterShowingAllBookmarks:(bool)arg2;

@end
