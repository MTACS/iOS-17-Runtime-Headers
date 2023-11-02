
@interface MUBrowseCategorySectionController : MUPlaceSectionController <MUBrowseCategoryViewControllerDelegate, MUPlaceSectionControlling> {
    <MUBrowseCategorySectionControllerDelegate> * _browseCategoryDelegate;
    MUBrowseCategoryViewController * _browseCategoryVC;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) <MUBrowseCategorySectionControllerDelegate> *browseCategoryDelegate;
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
- (id)browseCategoryDelegate;
- (void)categoryBrowseViewController:(id)arg1 didTapOnSearchCategory:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (bool)isImpressionable;
- (id)sectionView;
- (id)sectionViewController;
- (void)setBrowseCategoryDelegate:(id)arg1;

@end
