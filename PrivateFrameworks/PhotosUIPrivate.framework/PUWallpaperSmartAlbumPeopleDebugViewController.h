
@interface PUWallpaperSmartAlbumPeopleDebugViewController : UICollectionViewController <PXPassiveContentPeoplePickerDataSourceChangeObserver> {
    short  _contentMode;
    PXPassiveContentPeoplePickerDataSourceBase * _dataSource;
    NSArray * _dataSourceEntries;
    PUWallpaperDebugViewSpec * _spec;
}

@property (nonatomic) short contentMode;
@property (nonatomic, retain) PXPassiveContentPeoplePickerDataSourceBase *dataSource;
@property (nonatomic, retain) NSArray *dataSourceEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUWallpaperDebugViewSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDisplayDataSource;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (short)contentMode;
- (id)dataSource;
- (id)dataSourceEntries;
- (id)initWithSpec:(id)arg1 contentMode:(short)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)passiveContentPeoplePickerDataSourceChanged:(id)arg1;
- (void)setContentMode:(short)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceEntries:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
