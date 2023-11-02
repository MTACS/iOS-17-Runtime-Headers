
@interface MUTransitFooterActionsSectionController : MUTransitLineItemSectionController <MUPlaceSectionControlling> {
    MUFooterActionsSectionController * _underlyingSectionController;
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
- (id)analyticsDelegate;
- (id)analyticsModule;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })impressionsFrame;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTransitLineItem:(id)arg1 actionManager:(id)arg2;
- (void)reloadData;
- (id)revealedAnalyticsModule;
- (id)sectionView;
- (void)setAnalyticsDelegate:(id)arg1;

@end
