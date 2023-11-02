
@interface MUPlaceListItemSectionController : MUPlaceSectionController <MUPlaceSectionControlling> {
    <GEOAnnotatedItemList> * _annotatedList;
    MUPlaceSectionHeaderViewModel * _sectionHeaderViewModel;
    MUPlaceSectionView * _sectionView;
    MUTextPairVerticalCardView * _textVerticalCardView;
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
- (void)_captureUserAction:(int)arg1;
- (void)_performPunchout;
- (void)_setupSubviews;
- (int)analyticsModuleType;
- (id)initWithMapItem:(id)arg1 annotatedList:(id)arg2;
- (bool)isImpressionable;
- (id)sectionHeaderViewModel;
- (id)sectionView;

@end
