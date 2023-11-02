
@interface PBFPosterSelectionViewController : UICollectionViewController <PBFPosterExtensionDataStoreObserver> {
    NSSet * _allowedConfigurationUUIDs;
    NSArray * _configurations;
    NSMapTable * _configurationsToMetadata;
    UICollectionViewDiffableDataSource * _dataSource;
    PBFPosterExtensionDataStore * _dataStore;
    <PBFPosterSelectionViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButtonItem;
    PBFPosterGalleryDataProvider * _galleryDataProvider;
    long long  _layoutOrientation;
    NSUUID * _selectedConfigurationUUID;
    PRSwitcherConfiguration * _switcherConfiguration;
    NSDictionary * _uuidsToConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBFPosterSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySnapshotForCurrentStateWithAnimation:(bool)arg1;
- (void)_cancel:(id)arg1;
- (id)_cancelBarButtonItem;
- (id)_cellForItemAtIndexPath:(id)arg1 identifier:(id)arg2;
- (void)_done:(id)arg1;
- (id)_doneBarButtonItem;
- (void)_orientationDidChange;
- (void)_reloadDataWithAnimation:(bool)arg1;
- (void)_validateDoneButton;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)compositionalLayout;
- (id)delegate;
- (id)initWithAllowedConfigurationUUIDs:(id)arg1 selectedConfigurationUUID:(id)arg2 galleryDataProvider:(id)arg3 dataStore:(id)arg4;
- (long long)layoutOrientation;
- (void)posterExtensionDataStoreDidUpdateConfigurations:(id)arg1;
- (id)sectionWithEnvironment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
