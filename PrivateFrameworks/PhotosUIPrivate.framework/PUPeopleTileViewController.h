
@interface PUPeopleTileViewController : PUTileViewController <PHPhotoLibraryChangeObserver, PUPeopleTileDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    PHAsset * _asset;
    UICollectionViewCellRegistration * _cellRegistration;
    UICollectionView * _collectionView;
    CAGradientLayer * _fadeLayer;
    <PUPeopleTileDelegate> * _peopleDelegate;
    NSArray * _sortedPeople;
    PHFetchResult * _unsortedFetchResult;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, retain) UICollectionViewCellRegistration *cellRegistration;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAGradientLayer *fadeLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUPeopleTileDelegate> *peopleDelegate;
@property (nonatomic, retain) NSArray *sortedPeople;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHFetchResult *unsortedFetchResult;

+ (id)_fetchUnsortedPeopleForAsset:(id)arg1;
+ (double)_interItemSpacingForTraitCollection:(id)arg1;
+ (id)_sortedPersonsForFetchResult:(id)arg1;
+ (struct CGSize { double x1; double x2; })tileSizeForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (bool)_compare:(id)arg1 to:(id)arg2 ignoringIndices:(id)arg3;
- (void)_peopleDidChange:(id)arg1;
- (void)_reloadEverythingForAsset:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)asset;
- (void)becomeReusable;
- (id)cellRegistration;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)fadeLayer;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)peopleDelegate;
- (void)photoLibraryDidChange:(id)arg1;
- (void)presentPeopleViewController:(id)arg1;
- (void)pushPeopleViewController:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setCellRegistration:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDisplayAsset:(id)arg1;
- (void)setFadeLayer:(id)arg1;
- (void)setPeopleDelegate:(id)arg1;
- (void)setSortedPeople:(id)arg1;
- (void)setUnsortedFetchResult:(id)arg1;
- (id)sortedPeople;
- (id)unsortedFetchResult;
- (void)viewDidLoad;

@end
