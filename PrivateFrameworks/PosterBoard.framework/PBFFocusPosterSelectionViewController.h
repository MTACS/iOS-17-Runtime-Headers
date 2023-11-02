
@interface PBFFocusPosterSelectionViewController : UICollectionViewController <PBFPosterEditingIngestionManagerDelegate, PBFPosterExtensionDataStoreObserver, PBFPosterGalleryPreviewViewControllerDelegate, PBFPosterRackCollectionViewControllerDelegate, PREditingSceneViewControllerDelegate, PREditingSceneViewControllerObserver, UIViewControllerTransitioningDelegate> {
    NSString * _activityIdentifier;
    UIColor * _activitySymbolColor;
    NSString * _activitySymbolImageName;
    NSUUID * _activityUUID;
    NSArray * _configurations;
    NSMapTable * _configurationsToMetadata;
    NSAttributedString * _createLockScreensFromSuggestionsHeaderDescription;
    NSAttributedString * _createLockScreensHeaderDescription;
    UICollectionViewDiffableDataSource * _dataSource;
    PBFPosterExtensionDataStore * _dataStore;
    <PBFFocusPosterSelectionViewControllerDelegate> * _delegate;
    <BSInvalidatable> * _editingSessionInProgressAssertion;
    PBFPosterGalleryDataProvider * _galleryDataProvider;
    long long  _initialLayoutOrientation;
    NSMutableArray * _nonFocusAssociatedConfigurations;
    bool  _receivedSuggestionsResponse;
    PBFFocusPosterSuggestionData * _suggestionData;
    PRSwitcherConfiguration * _switcherConfiguration;
    NSDictionary * _uuidsToConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBFFocusPosterSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySnapshotForCurrentStateWithAnimation:(bool)arg1;
- (void)_cancel:(id)arg1;
- (id)_cancelBarButtonItem;
- (id)_cellForItemAtIndexPath:(id)arg1 identifier:(id)arg2;
- (void)_commitCheckedStates;
- (id)_createLockScreenFromSuggestionsHeaderDescription;
- (id)_createLockScreenHeaderDescription;
- (void)_done:(id)arg1;
- (id)_doneBarButtonItem;
- (void)_logEditWithEditingViewController:(id)arg1 posterUUID:(id)arg2 lastModifiedDate:(id)arg3;
- (void)_populateActivityMetadata;
- (id)_posterLimitExceededAlert;
- (void)_reloadDataWithAnimation:(bool)arg1;
- (void)_showEditingForPoster:(id)arg1 fromFocusPosterCell:(id)arg2;
- (void)_showGallery;
- (id)_supplementaryViewAtIndexPath:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)compositionalLayout;
- (void)dealloc;
- (id)delegate;
- (void)editingIngestionManager:(id)arg1 didAccept:(id)arg2 userChoice:(long long)arg3;
- (void)editingSceneViewController:(id)arg1 userDidDismissWithAction:(long long)arg2 updatedConfiguration:(id)arg3 updatedConfiguredProperties:(id)arg4 completion:(id /* block */)arg5;
- (void)editingSceneViewControllerDidFinalize:(id)arg1;
- (void)galleryViewController:(id)arg1 didSelectPreview:(id)arg2 fromPreviewView:(id)arg3;
- (void)galleryViewController:(id)arg1 willDisplayPreview:(id)arg2;
- (id)galleryViewController:(id)arg1 willUseAnimationController:(id)arg2 forDismissingEditingViewControllerWithAction:(long long)arg3;
- (id)initWithActivityUUID:(id)arg1 activityIdentifier:(id)arg2 galleryDataProvider:(id)arg3 dataStore:(id)arg4;
- (id)mastheadSectionWithEnvironment:(id)arg1;
- (long long)pbf_layoutOrientation;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg1;
- (void)posterRackCollectionViewControllerDidPressCancel:(id)arg1;
- (bool)posterRackCollectionViewControllerDidPressDone:(id)arg1;
- (id)sectionWithEnvironment:(id)arg1 section:(id)arg2;
- (void)setDelegate:(id)arg1;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })topButtonLayoutForEditingSceneViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
