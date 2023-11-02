
@interface PUStorageTipListViewController : UIViewController <PSController, PXDataSectionManagerChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    UICollectionView * _collectionView;
    PUStorageTipCollectionViewDataSection * _currentDataSection;
    PUStorageTipCollectionViewDataSectionManager * _dataSectionManager;
    NSArray * _displayedItems;
    UIViewController<PSController> * _parentController;
    PHPhotoLibrary * _photoLibrary;
    id  _preferenceValue;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
    long long  _storageRecovered;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) PUStorageTipCollectionViewDataSection *currentDataSection;
@property (nonatomic, retain) PUStorageTipCollectionViewDataSectionManager *dataSectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *displayedItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic) long long storageRecovered;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDisplayedItems;
- (bool)canBeShownFromSuspendedState;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentDataSection;
- (id)dataSectionManager;
- (void)dismiss;
- (id)displayedItems;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)parentController;
- (id)photoLibrary;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setCollectionView:(id)arg1;
- (void)setCurrentDataSection:(id)arg1;
- (void)setDataSectionManager:(id)arg1;
- (void)setDisplayedItems:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setStorageRecovered:(long long)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (long long)storageRecovered;
- (id)storageViewForTipType:(unsigned long long)arg1;
- (void)viewDidLoad;

@end
