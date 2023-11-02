
@interface MUInlineRatingsSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    UIViewController * _inlineRatingsViewController;
    MUPlaceSectionView * _sectionView;
    <MUInlineRatingsSectionControllerViewProvider> * _viewProvider;
}

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
- (void)_setupSectionView;
- (int)analyticsModuleType;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 inlineRatingsViewProvider:(id)arg2;
- (bool)isImpressionable;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViewController;

@end
