
@interface PXForYouGadgetViewController : PXGadgetUIViewController <PXNavigableSharedAlbumActivityFeedHostViewController, PXPreferencesObserver, PXSettingsKeyObserver> {
    PXForYouBadgeManager * _badgeManager;
    bool  _featuredContentAllowed;
    PXLibraryFilterState * _libraryFilterState;
    PHPhotoLibrary * _photoLibrary;
    bool  _rootGadgetControllerHasAppearedOnce;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    bool  _sharedLibrarySuggestionsAllowed;
}

@property (nonatomic, readonly) PXForYouBadgeManager *badgeManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool featuredContentAllowed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic) bool rootGadgetControllerHasAppearedOnce;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic) bool sharedLibrarySuggestionsAllowed;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (unsigned long long)_gadgetTypeForDestinationType:(long long)arg1;
- (void)_handleTapToRadar;
- (void)_reloadContentDueToSettingsChangeWithDelay;
- (id)_suggestionDumpURL;
- (void)_updateNavigationBarItems;
- (void)_userDidViewForYouContent;
- (id)badgeManager;
- (bool)canBecomeFirstResponder;
- (void)configureSectionHeader:(id)arg1;
- (bool)featuredContentAllowed;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 libraryFilterState:(id)arg2 badgeManager:(id)arg3;
- (id)libraryFilterState;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)navigateToSharedAlbumActivityFeedAnimated:(bool)arg1 configuration:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)navigationHelperDidNotFindValidGadget:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (void)ppt_navigateToContentSyndicationGridViewControllerWithCompleteHandler:(id /* block */)arg1;
- (void)ppt_navigateToFirstInvitationCMM:(bool)arg1 withCompleteHandler:(id /* block */)arg2;
- (void)ppt_navigateToLatestMemoryWithWillPresentHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)preferencesDidChange;
- (id)px_navigationDestination;
- (void)reloadContent;
- (void)rootGadgetControllerDidDisappear;
- (bool)rootGadgetControllerHasAppearedOnce;
- (void)rootGadgetControllerWillAppear;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (void)setFeaturedContentAllowed:(bool)arg1;
- (void)setRootGadgetControllerHasAppearedOnce:(bool)arg1;
- (void)setSharedLibrarySuggestionsAllowed:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedLibraryStatusProvider;
- (bool)sharedLibrarySuggestionsAllowed;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)px_sharedAlbumFeedViewControllerWithTraitCollection:(id)arg1;

@end
