
@interface PUAlbumsGadgetViewController : PXGadgetUIViewController <PXChangeObserver, PXNavigableCollectionContainer> {
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    PXProgrammaticNavigationDestination * _px_navigationDestination;
    PUSessionInfo * _sessionInfo;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) PXProgrammaticNavigationDestination *px_navigationDestination;
@property (nonatomic, retain) PUSessionInfo *sessionInfo;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canNavigateToCollection:(id)arg1 skipGadgets:(bool)arg2;
- (id)_createPlusButton;
- (void)_handleDoneButton:(id)arg1;
- (id)_navigableGadgetForCollection:(id)arg1;
- (void)_navigateToCollection:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updateNavigationBar;
- (bool)allowsBarManagement;
- (bool)canBecomeFirstResponder;
- (bool)canNavigateToCollection:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureSectionHeader:(id)arg1;
- (id)initWithLayout:(id)arg1 dataSourceManager:(id)arg2;
- (id)libraryFilterState;
- (void)navigateToCollection:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)navigationHelperCanCurrentlyNavigate:(id)arg1;
- (void)newAlbum:(id)arg1;
- (void)newFolder:(id)arg1;
- (void)newSharedAlbum:(id)arg1;
- (void)newSmartAlbum:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (void)provideViewControllersForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)px_gridPresentation;
- (id)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (id)sessionInfo;
- (void)setPx_navigationDestination:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
