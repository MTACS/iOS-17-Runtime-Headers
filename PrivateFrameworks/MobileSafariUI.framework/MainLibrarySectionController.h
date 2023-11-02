
@interface MainLibrarySectionController : LibrarySectionController {
    BookmarkFolderLibraryItemController * _bookmarksItemController;
    HistoryLibraryItemController * _historyController;
    ReadingListLibraryItemController * _readingListController;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (id)itemControllers;
- (void)registerItemsWithRegistration:(id)arg1;
- (id)title;
- (void)updateToolbarIfNeeded;

@end
