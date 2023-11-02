
@interface CKSyndicationSharedWithYouViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    UICollectionView * _collectionView;
    NSArray * _constraints;
    NSArray * _defaultAppBundleIDs;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxContentSize;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultAppBundleIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } maxContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_appIconNameForBundleID:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)constraints;
- (id)defaultAppBundleIDs;
- (void)loadView;
- (struct CGSize { double x1; double x2; })maxContentSize;
- (void)setCollectionView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDefaultAppBundleIDs:(id)arg1;
- (void)setMaxContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateViewConstraints;

@end
