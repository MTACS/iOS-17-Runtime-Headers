
@interface MUPlaceHeaderSectionController : MUPlaceSectionController <MUPlaceHeaderViewDelegate> {
    MUPlaceHeaderSectionControllerConfiguration * _configuration;
    <MUPlaceHeaderSectionControllerDelegate> * _headerDelegate;
    MUPlaceHeaderView * _headerView;
    <_MKPlaceItem> * _placeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUPlaceHeaderSectionControllerDelegate> *headerDelegate;
@property (nonatomic, readonly) UILayoutGuide *headerViewTitleLabelToTopLayoutGuide;
@property (nonatomic, readonly) bool shouldBlurChromeHeaderButtons;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *viewForContainmentString;

+ (double)minimalModeHeight;

- (void).cxx_destruct;
- (void)_notifyDidTapParentMapItem:(id)arg1;
- (void)_populateRevealedAnalyticsModule:(id)arg1;
- (void)_setupHeaderView;
- (int)analyticsModuleType;
- (id)draggableContent;
- (id)headerDelegate;
- (void)headerView:(id)arg1 didSelectEnclosingMapItem:(id)arg2;
- (void)headerView:(id)arg1 didSelectEnclosingMapItemIdentifier:(id)arg2;
- (void)headerView:(id)arg1 didSelectShareWithPresentationOptions:(id)arg2;
- (id)headerViewTitleLabelToTopLayoutGuide;
- (void)hideTitle:(bool)arg1;
- (id)initWithPlaceItem:(id)arg1 configuration:(id)arg2;
- (bool)isImpressionable;
- (void)reloadTrailingConstraint;
- (id)sectionView;
- (void)setCardExpansionProgress:(double)arg1;
- (void)setHeaderDelegate:(id)arg1;
- (bool)shouldBlurChromeHeaderButtons;
- (double)verifiedBusinessHeaderHeight;
- (void)verifiedBusinessHeaderScrollPositionChanged:(double)arg1;
- (id)viewForContainmentString;

@end
