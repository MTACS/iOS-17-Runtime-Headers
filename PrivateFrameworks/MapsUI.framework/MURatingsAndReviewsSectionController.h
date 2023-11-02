
@interface MURatingsAndReviewsSectionController : MUPlaceSectionController <MUPlaceCollectionPullQuotePlatterViewDelegate, MUPlaceSectionControlling> {
    <MURatingsAndReviewsSectionControllerDelegate> * _actionDelegate;
    MUPlaceReviewAvatarGenerator * _avatarGenerator;
    MUScrollableStackView * _contentStackView;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    MUPlaceRatingReviewTitleBuilder * _titleBuilder;
}

@property (nonatomic) <MURatingsAndReviewsSectionControllerDelegate> *actionDelegate;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAppleRatingsCategoryTileIfNeeded:(id)arg1;
- (void)_addHorizontalTileToContentStackView:(id)arg1 items:(id)arg2;
- (void)_addPlaceCollectionPullQuotesIfNeeded:(id)arg1;
- (void)_addRatingSnippets:(id)arg1 withCellItems:(id)arg2;
- (void)_addUserReviewCategoryTilesIfNeeded:(id)arg1;
- (void)_sectionHeaderAccessoryTapped;
- (void)_setupRatingRows;
- (id)actionDelegate;
- (int)analyticsModuleType;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1;
- (bool)isImpressionable;
- (void)pullQuoteViewDidTapMore:(id)arg1;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setActionDelegate:(id)arg1;

@end
