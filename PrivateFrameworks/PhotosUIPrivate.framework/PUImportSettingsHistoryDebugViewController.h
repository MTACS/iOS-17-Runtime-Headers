
@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <PHPhotoLibraryChangeObserver, UICollectionViewDataSource, UICollectionViewDelegate> {
    PHFetchResult * _importSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *importSessions;
@property (readonly) Class superclass;

+ (void)_updateFlowLayout:(id)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (id)_assetForIndexPath:(id)arg1;
- (id)_assetsForSection:(long long)arg1;
- (void)_reloadData;
- (void)_scrollToBottom:(id)arg1;
- (void)_updateTitle;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)importSessions;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setImportSessions:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
