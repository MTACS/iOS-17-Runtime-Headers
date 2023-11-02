
@interface MUPlaceRibbonSectionController : MUPlaceSectionController <MUPlaceRibbonViewDelegate, MUPlaceSectionControlling, MUScrollAnalyticActionObserving> {
    bool  _active;
    MUPlaceCallToActionRibbonViewModel * _arpViewModel;
    MUPlaceRatingAndSubmissionStatusRibbonViewModel * _arpViewModelSydney;
    MUPlaceRibbonSectionControllerConfiguration * _configuration;
    MUPlaceDistanceRibbonViewModel * _distanceViewModel;
    MUPlaceRibbonEVChargingViewModel * _evChargingViewModel;
    bool  _isAllowedToShowRatingScoreRibbonItem;
    MUPlaceRatingAndSubmissionStatusRibbonViewModel * _ratingViewModel;
    <MUPlaceRibbonSectionControllerDelegate> * _ribbonDelegate;
    MUPlaceRibbonView * _ribbonView;
    MUPlaceSectionView * _sectionView;
    bool  _shouldShowARPCallToAction;
    MUPlaceCallToActionAppearance * _submissionStatus;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllowedToShowRatingScoreRibbonItem;
@property (nonatomic, readonly) GEOPlaceRibbonConfiguration *ribbonConfig;
@property (nonatomic) <MUPlaceRibbonSectionControllerDelegate> *ribbonDelegate;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, readonly) bool shouldShowARPCallToAction;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupRibbonView;
- (bool)_shouldShowCallToActionRibbonItem;
- (bool)_shouldShowRatingsRibbonItem;
- (id)_submissionStatusForCallToAction;
- (id)_submissionStatusForRatings;
- (bool)_supportsAddRatingsCallToAction;
- (void)_updateAppearanceForSubmissionStatus;
- (void)_updateWithPreviousState:(bool)arg1;
- (int)analyticsModuleType;
- (void)buildContent;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;
- (bool)isActive;
- (bool)isAllowedToShowRatingScoreRibbonItem;
- (bool)isImpressionable;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (id)ribbonConfig;
- (id)ribbonDelegate;
- (void)ribbonView:(id)arg1 didTapItemWithViewModel:(id)arg2 withPresentationOptions:(id)arg3;
- (bool)ribbonView:(id)arg1 shouldShowRibbonItem:(id)arg2;
- (id)sectionView;
- (void)setActive:(bool)arg1;
- (void)setRibbonDelegate:(id)arg1;
- (void)setSubmissionStatus:(id)arg1;
- (bool)shouldShowARPCallToAction;
- (id)submissionStatus;

@end
