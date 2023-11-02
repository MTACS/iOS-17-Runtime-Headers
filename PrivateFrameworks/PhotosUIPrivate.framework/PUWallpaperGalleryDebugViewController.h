
@interface PUWallpaperGalleryDebugViewController : UICollectionViewController {
    NSDictionary * _keyAssetBySuggestionUUID;
    PUWallpaperDebugViewSpec * _spec;
    NSArray * _suggestions;
}

@property (nonatomic, retain) NSDictionary *keyAssetBySuggestionUUID;
@property (nonatomic, retain) PUWallpaperDebugViewSpec *spec;
@property (nonatomic, retain) NSArray *suggestions;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithSpec:(id)arg1;
- (id)keyAssetBySuggestionUUID;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setKeyAssetBySuggestionUUID:(id)arg1;
- (void)setSpec:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (id)spec;
- (id)suggestions;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
