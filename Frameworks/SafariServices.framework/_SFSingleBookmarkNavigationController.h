
@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {
    id /* block */  _addBookmarkAnalyticsHandler;
    bool  _bookmarkCollectionLocked;
    <_SFSingleBookmarkNavigationControllerDelegate> * _bookmarkNavDelegate;
    WebBookmarkCollection * _collection;
    bool  _delegateNotifiedOfResult;
    _SFBookmarkInfoViewController * _infoViewController;
    bool  _needsBookmarksLockOnAppResume;
    <TabGroupProvider> * _tabGroupProvider;
}

@property (nonatomic, copy) id /* block */ addBookmarkAnalyticsHandler;
@property (nonatomic) <_SFSingleBookmarkNavigationControllerDelegate> *bookmarkNavDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <TabGroupProvider> *tabGroupProvider;

- (void).cxx_destruct;
- (void)_didBecomeActive;
- (id)_initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 withSyntheticFolder:(id)arg4 addingBookmark:(bool)arg5 toFavorites:(bool)arg6;
- (id)_lastSelectedFolder;
- (void)_releaseBookmarkLockIfNeeded;
- (void)_willResignActive;
- (id /* block */)addBookmarkAnalyticsHandler;
- (id)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3;
- (void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (bool)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1;
- (bool)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (id)bookmarkNavDelegate;
- (void)dealloc;
- (id)initForAddingToFavoritesInCollection:(id)arg1;
- (id)initForAddingToSyntheticBookmarkFolder:(id)arg1;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2;
- (id)initWithCollection:(id)arg1;
- (id)initWithFolderOfBookmarks:(id)arg1 inCollection:(id)arg2;
- (bool)prepareForPresentationForAddingBookmark:(bool)arg1;
- (void)setAddBookmarkAnalyticsHandler:(id /* block */)arg1;
- (void)setBookmarkNavDelegate:(id)arg1;
- (void)setTabGroupProvider:(id)arg1;
- (id)tabGroupProvider;
- (id)tabGroupProviderForBookmarkInfoViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
