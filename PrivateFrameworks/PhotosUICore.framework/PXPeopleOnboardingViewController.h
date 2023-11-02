
@interface PXPeopleOnboardingViewController : UIViewController <PXChangeObserver> {
    PXLibraryFilterState * _libraryFilterState;
    PXPeopleSectionedDataSource * _peopleDataSource;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressManager;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXPeopleProgressManager *progressManager;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_emptyPlaceholderTextAttributesFromTextProperties:(id)arg1;
- (void)_progressChanged:(id)arg1;
- (void)_pushToPeopleHome;
- (id)_sharedLibraryEmptyPeopleAlbumMessage;
- (id)_sharedLibraryEmptyPeopleAlbumTitle;
- (id)_textAttachmentImageForSystemImageNamed:(id)arg1;
- (void)_updateNavigationBar;
- (void)_updateStatusViewForStatus:(long long)arg1;
- (void)_updateStatusViewSharedLibrary;
- (id)initWithDataSource:(id)arg1 progressManager:(id)arg2 libraryFilterState:(id)arg3;
- (id)libraryFilterState;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleDataSource;
- (id)photoLibrary;
- (id)progressManager;
- (id)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
