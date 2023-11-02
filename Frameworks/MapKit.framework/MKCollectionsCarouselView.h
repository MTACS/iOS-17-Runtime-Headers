
@interface MKCollectionsCarouselView : UIView <MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    <MKCollectionCarouselAnalyticsDelegate> * _analyticsDelegate;
    long long  _carouselContext;
    UICollectionView * _collectionView;
    struct { 
        long long displayStyle; 
        long long collectionsPerRow; 
    }  _collectionsConfiguration;
    UIStackView * _contentView;
    GEOExploreGuides * _exploreGuides;
    UICollectionViewFlowLayout * _flowLayout;
    bool  _hasDisplayedCollections;
    MKPlaceCollectionsLogicController * _logicController;
    <MKCollectionCarouselRoutingDelegate> * _routingDelegate;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    <MKCollectionsSizeProvider> * _sizeController;
    NSObject<OS_dispatch_queue> * _utilityQueue;
}

@property (nonatomic) <MKCollectionCarouselAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) long long carouselContext;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOExploreGuides *exploreGuides;
@property (nonatomic, retain) UICollectionViewFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKPlaceCollectionsLogicController *logicController;
@property (nonatomic) <MKCollectionCarouselRoutingDelegate> *routingDelegate;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (nonatomic, retain) <MKCollectionsSizeProvider> *sizeController;
@property (readonly) Class superclass;

+ (double)horizontalLayoutHeightInContext:(long long)arg1 includeExploreGuidesHeight:(bool)arg2 isSingleCollection:(bool)arg3;
+ (double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)arg1 maxWidth:(double)arg2 usingTraitEnvironment:(id)arg3 inContext:(long long)arg4;

- (void).cxx_destruct;
- (id)analyticsDelegate;
- (long long)carouselContext;
- (id)collectionView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCarouselCollectionView;
- (void)configureCarouselMetadata:(long long)arg1;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentView;
- (void)dismissedCollections;
- (void)displayCollections;
- (void)displayCollectionsUsingBatchIds:(id)arg1 usingGuideFetcher:(id)arg2;
- (id)exploreGuides;
- (void)fetchCollections;
- (id)flowLayout;
- (id)initCollectionsCarouselViewWithContext:(long long)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 withRoutingDelegate:(id)arg4 withScrollViewDelegate:(id)arg5 withAnalyticsDelegate:(id)arg6 exploreGuides:(id)arg7;
- (bool)isDisplayingCollections;
- (bool)isShowingExploreGuides;
- (id)logicController;
- (void)refreshCollections;
- (void)resetCollectionsLayout;
- (void)resetScrollOffset;
- (id)routingDelegate;
- (id)scrollViewDelegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setCarouselContext:(long long)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setExploreGuides:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setLogicController:(id)arg1;
- (void)setRoutingDelegate:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setSizeController:(id)arg1;
- (id)sizeController;
- (void)updateCollections:(id)arg1;

@end
