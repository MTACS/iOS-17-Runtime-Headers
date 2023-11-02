
@interface VideosExtrasStackTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    VideosExtrasBannerController * _bannerViewController;
    UICollectionView * _collectionView;
    UICollectionViewFlowLayout * _collectionViewLayout;
    NSMutableDictionary * _sizes;
    NSMutableDictionary * _viewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dynamicTypeDidChange;
- (void)_prepareLayout;
- (id)_viewControllerForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionStyle;
- (bool)showsPlaceholder;
- (id)templateElement;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end