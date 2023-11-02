
@interface PXPeopleDonationSettingsSuggestionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    PHFetchResult * _faceCrops;
    UIImage * _image;
    PHPerson * _person;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PHFetchResult *faceCrops;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)faceCrops;
- (id)image;
- (id)initWithPerson:(id)arg1;
- (void)loadDataSource;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)person;
- (void)setCollectionView:(id)arg1;
- (void)setFaceCrops:(id)arg1;
- (void)setImage:(id)arg1;
- (void)viewDidLoad;

@end
