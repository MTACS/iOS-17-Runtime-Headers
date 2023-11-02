
@interface PXPeopleDetailSettingsSuggestionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    NSArray * _detailSettingsDataSources;
    UIImage * _image;
    PHPerson * _person;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *detailSettingsDataSources;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultOptionsForPhotoLibrary:(id)arg1 sortKey:(id)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)detailSettingsDataSources;
- (id)image;
- (id)initWithPerson:(id)arg1;
- (void)loadDataSource;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)person;
- (void)setCollectionView:(id)arg1;
- (void)setDetailSettingsDataSources:(id)arg1;
- (void)setImage:(id)arg1;
- (void)viewDidLoad;

@end
