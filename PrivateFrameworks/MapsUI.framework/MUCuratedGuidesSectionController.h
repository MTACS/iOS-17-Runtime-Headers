
@interface MUCuratedGuidesSectionController : MUPlaceSectionController <MKCollectionCarouselAnalyticsDelegate, MUPlaceSectionControlling, UIScrollViewDelegate> {
    bool  _active;
    MUCuratedCollectionsPlacecardAnalyticsManager * _analyticsManager;
    MUCuratedGuidesSectionView * _carouselView;
    NSArray * _collectionIds;
    <MKPlaceCollectionsDelegate> * _collectionsDelegate;
    NSArray * _placeCollections;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, retain) MUCuratedCollectionsPlacecardAnalyticsManager *analyticsManager;
@property (nonatomic, retain) MUCuratedGuidesSectionView *carouselView;
@property (nonatomic, retain) NSArray *collectionIds;
@property (nonatomic) <MKPlaceCollectionsDelegate> *collectionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *placeCollections;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_sectionHeaderTitle;
- (void)_seeAllTapped;
- (void)_setupCollectionView;
- (void)_setupViews;
- (id)analyticsManager;
- (int)analyticsModuleType;
- (id)carouselView;
- (id)collectionIds;
- (void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(bool)arg3;
- (void)collectionsCarouselDidScrollBackward;
- (void)collectionsCarouselDidScrollForward;
- (id)collectionsDelegate;
- (id)draggableContent;
- (void)exploreGuidesButtonTapped;
- (id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 exploreGuides:(id)arg6;
- (bool)isActive;
- (bool)isImpressionable;
- (id)placeCollections;
- (void)refreshCollections;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setActive:(bool)arg1;
- (void)setAnalyticsManager:(id)arg1;
- (void)setCarouselView:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setCollectionsDelegate:(id)arg1;
- (void)setPlaceCollections:(id)arg1;
- (bool)shouldShowMoreButton;

@end
