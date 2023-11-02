
@interface MUCuratedGuidesSectionView : UIView {
    MKCollectionsCarouselView * _carouselView;
    <MKPlaceCollectionsDelegate> * _collectionsDelegate;
    bool  _isSingleCollection;
    MUPagingScrollContainerView * _pagingContainerView;
}

@property (nonatomic, readonly) long long carouselContext;
@property (nonatomic, retain) MKCollectionsCarouselView *carouselView;
@property (nonatomic) <MKPlaceCollectionsDelegate> *collectionsDelegate;
@property (getter=isShowingExploreGuides, nonatomic, readonly) bool showingExploreGuides;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (long long)carouselContext;
- (id)carouselView;
- (id)collectionsDelegate;
- (void)displayCollectionsIfNeeded;
- (id)initCollectionsCarouselViewWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 withRoutingDelegate:(id)arg3 withScrollViewDelegate:(id)arg4 withAnalyticsDelegate:(id)arg5 exploreGuides:(id)arg6;
- (bool)isShowingExploreGuides;
- (void)refreshCollections;
- (void)setCarouselView:(id)arg1;
- (void)setCollectionsDelegate:(id)arg1;

@end
