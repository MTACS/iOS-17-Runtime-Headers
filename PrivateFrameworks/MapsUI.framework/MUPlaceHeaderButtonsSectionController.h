
@interface MUPlaceHeaderButtonsSectionController : MUPlaceSectionController <MKETAProviderObserver, MUHeaderButtonsSectionControllerDelegate, MUPlaceSectionControlling> {
    MUPlaceHeaderButtonsSectionControllerConfiguration * _configuration;
    <MUPlaceHeaderButtonsSectionControllerDelegate> * _headerDelegate;
    MUHeaderButtonsSectionController * _headerSectionController;
    <_MKPlaceItem> * _placeItem;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUPlaceHeaderButtonsSectionControllerDelegate> *headerDelegate;
@property (nonatomic, retain) <_MKPlaceItem> *placeItem;
@property (nonatomic) unsigned long long primaryButtonType;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryButtonController;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alternatePrimaryButtonController;
- (id)analyticsDelegate;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (bool)hasContent;
- (void)headerButtonsSectionController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withPresentationOptions:(id)arg3;
- (void)headerButtonsSectionControllerDidUpdateContent:(id)arg1;
- (void)headerButtonsSectionControllerWillPresentMenu:(id)arg1;
- (id)headerDelegate;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)initWithPlaceItem:(id)arg1 configuration:(id)arg2;
- (bool)isActive;
- (bool)isImpressionable;
- (id)placeItem;
- (unsigned long long)primaryButtonType;
- (id)revealedAnalyticsModule;
- (id)secondaryButtonController;
- (id)sectionView;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setAlternatePrimaryButtonController:(id)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setHeaderDelegate:(id)arg1;
- (void)setPlaceItem:(id)arg1;
- (void)setPrimaryButtonType:(unsigned long long)arg1;
- (void)setSecondaryButtonController:(id)arg1;

@end
