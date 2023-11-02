
@interface MUPlaceSectionController : NSObject <MUPlaceSectionControlling> {
    bool  _active;
    <MUInfoCardAnalyticsDelegate> * _analyticsDelegate;
    <MUPlaceSectionControllerDelegate> * _delegate;
    MUImpressionElement * _impressionElement;
    MKMapItem * _mapItem;
    UIView * _sectionView;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) GEOAPPlaceCardModule *analyticsModule;
@property (nonatomic, readonly) int analyticsModuleType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceSectionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MUImpressionElement *impressionElement;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } impressionsFrame;
@property (nonatomic, readonly) bool isImpressionable;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) GEORevealedPlaceCardModule *revealedAnalyticsModule;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_placeCardImpressionsMetadata;
- (void)_populateAnalyticsModule:(id)arg1;
- (void)_populateRevealedAnalyticsModule:(id)arg1;
- (id)analyticsDelegate;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (void)captureInfoCardAction:(int)arg1 eventValue:(id)arg2;
- (void)captureInfoCardAction:(int)arg1 eventValue:(id)arg2 feedbackType:(int)arg3;
- (void)captureInfoCardAction:(int)arg1 eventValue:(id)arg2 feedbackType:(int)arg3 actionRichProviderId:(id)arg4;
- (void)captureInfoCardAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3;
- (void)captureInfoCardPartnerAction:(int)arg1 eventValue:(id)arg2 sharedStateButtonList:(id)arg3;
- (void)captureInfoCardPartnerAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 sharedStateButtonList:(id)arg4;
- (id)delegate;
- (id)draggableContent;
- (bool)hasContent;
- (id)impressionElement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })impressionsFrame;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithMapItem:(id)arg1;
- (bool)isActive;
- (bool)isImpressionable;
- (id)mapItem;
- (id)revealedAnalyticsModule;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (id)submissionStatus;

@end
