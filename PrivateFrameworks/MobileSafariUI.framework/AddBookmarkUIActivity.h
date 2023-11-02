
@interface AddBookmarkUIActivity : _SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController * _bookmarkNavController;
    TabDocument * _tabDocument;
}

@property (nonatomic) <AddBookmarkActivityDelegate> *delegate;

- (void).cxx_destruct;
- (id)_embeddedActivityViewController;
- (void)activityDidFinish:(bool)arg1;
- (id)activityViewController;
- (void)addBookmarkNavController:(id)arg1 didFinishWithResult:(bool)arg2 bookmark:(id)arg3;
- (bool)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;

@end
