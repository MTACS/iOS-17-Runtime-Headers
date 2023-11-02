
@interface MUTransitLineItemSectionController : NSObject <MUPlaceSectionControlling> {
    bool  _active;
    <MUInfoCardAnalyticsDelegate> * _analyticsDelegate;
    <GEOTransitLineItem> * _lineItem;
    UIView * _sectionView;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitLineItem> *lineItem;
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
- (id)draggableContent;
- (bool)hasContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithTransitLineItem:(id)arg1;
- (bool)isActive;
- (id)lineItem;
- (id)revealedAnalyticsModule;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViewController;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;

@end
