
@interface MUPlacePhotoSliderView : UIView <MUCollectionViewDiffableDataSourceCellProviding, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    <MUScrollAnalyticActionObserving> * _analyticsDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    UICollectionView * _contentCollectionView;
    <MUPlacePhotoSliderDataSource> * _dataSource;
    <MUPlacePhotoSliderDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    bool  _hasHeaderView;
    MUPagingScrollContainerView * _pagingScrollView;
    NSArray * _photoModels;
    struct CGSize { 
        double width; 
        double height; 
    }  _photoTileSize;
}

@property (nonatomic) <MUScrollAnalyticActionObserving> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlacePhotoSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (struct CGSize { double x1; double x2; })_sizeForAttribution;
- (id)analyticsDelegate;
- (id)attributionViewForAttribution:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)displayPhotos;
- (void)displayPhotos:(bool)arg1;
- (void)enumerateImageViewsWithBlock:(id /* block */)arg1;
- (id)imageViewForIndex:(unsigned long long)arg1;
- (id)initWithDataSource:(id)arg1 photoTileSize:(struct CGSize { double x1; double x2; })arg2;
- (void)layoutSubviews;
- (void)scrollToViewAtIndex:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updatePhotoSliderViews:(bool)arg1;
- (void)updateViewsWithAlpha:(double)arg1;

@end
