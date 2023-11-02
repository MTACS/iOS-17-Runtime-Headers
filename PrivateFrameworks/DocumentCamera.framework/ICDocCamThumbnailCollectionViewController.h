
@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <ICDocCamThumbnailViewLayoutDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    <ICDocCamThumbnailViewDelegate> * _delegate;
    NSMutableArray * _documentInfoArray;
    ICDocCamImageCache * _imageCache;
    bool  _isPerformingBatchUpdates;
    ICDocCamThumbnailCollectionViewLayout * _layout;
    bool  _needReloadAfterBatchUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICDocCamThumbnailViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *documentInfoArray;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;
@property (nonatomic) bool isPerformingBatchUpdates;
@property (nonatomic, retain) ICDocCamThumbnailCollectionViewLayout *layout;
@property (nonatomic) bool needReloadAfterBatchUpdates;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)addNewDocument:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)animateLayoutChange;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)didReceiveMemoryWarning;
- (id)documentInfoArray;
- (id)imageCache;
- (id)initWithDelegate:(id)arg1;
- (bool)isPerformingBatchUpdates;
- (id)layout;
- (bool)needReloadAfterBatchUpdates;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadDataForCollectionView;
- (id)rootView;
- (void)setDelegate:(id)arg1;
- (void)setDocumentInfoArray:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(bool)arg3;
- (void)setIsPerformingBatchUpdates:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setNeedReloadAfterBatchUpdates:(bool)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetViewRect;
- (void)update;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
