
@interface AddToFavoritesUIActivity : TabDocumentActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController * _bookmarkNavController;
    bool  _isForPerTabGroupFavorites;
    TabDocument * _tabDocument;
}

@property (nonatomic) <AddBookmarkActivityDelegate> *delegate;
@property (nonatomic) bool isForPerTabGroupFavorites;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (id)_systemImageName;
- (void)activityDidFinish:(bool)arg1;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(bool)arg2 bookmark:(id)arg3;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (bool)canPerformWithTabDocument:(id)arg1;
- (bool)isForPerTabGroupFavorites;
- (void)prepareWithTabDocument:(id)arg1;
- (void)setIsForPerTabGroupFavorites:(bool)arg1;

@end
