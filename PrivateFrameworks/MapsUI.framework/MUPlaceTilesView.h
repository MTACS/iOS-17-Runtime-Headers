
@interface MUPlaceTilesView : UIView <MUCollectionViewDiffableDataSourceCellProviding, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    MUPunchoutViewModel * _accessoryViewModel;
    <MUScrollAnalyticActionObserving> * _analyticsDelegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginAnalyticsScrollingPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    MUPlaceTilesViewConfiguration * _configuration;
    UICollectionView * _contentCollectionView;
    <MUPlaceTilesViewDelegate> * _delegate;
    UICollectionViewDiffableDataSource * _diffableDataSource;
    UICollectionViewFlowLayout * _flowLayout;
    NSLayoutConstraint * _heightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    NSArray * _viewModels;
}

@property (nonatomic, retain) MUPunchoutViewModel *accessoryViewModel;
@property (nonatomic) <MUScrollAnalyticActionObserving> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceTilesViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldCalculateTileSizeAccordingToBounds;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewModels;

- (void).cxx_destruct;
- (double)_calculatedTileWidthFromBounds;
- (void)_contentSizeDidChange;
- (void)_setupStackView;
- (void)_updateContent;
- (void)_updateTileMetrics;
- (id)accessoryView;
- (id)accessoryViewModel;
- (id)analyticsDelegate;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)displayPlaceTiles;
- (void)enumerateImageViewsWithBlock:(id /* block */)arg1;
- (double)heightForTileSize:(struct CGSize { double x1; double x2; })arg1;
- (id)imageViewForIndex:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)scrollToViewAtIndex:(unsigned long long)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAccessoryViewModel:(id)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setViewModels:(id)arg1;
- (bool)shouldCalculateTileSizeAccordingToBounds;
- (void)updateViewsWithAlpha:(double)arg1;
- (id)viewModels;

@end
