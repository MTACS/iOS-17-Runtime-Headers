
@interface MUTransitLineIncidentsSectionController : MUTransitLineItemSectionController <MUPlaceSectionControlling, MUTransitLineIncidentsViewControllerDelegate> {
    MUFixedHeightAwareViewController * _fixedHeightAwareVC;
    <MUTransitLineIncidentsSectionControllerDelegate> * _incidentsDelegate;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUTransitLineIncidentsSectionControllerDelegate> *incidentsDelegate;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupSection;
- (bool)hasContent;
- (id)incidentsDelegate;
- (id)initWithTransitLineItem:(id)arg1;
- (id)sectionView;
- (id)sectionViewController;
- (void)setIncidentsDelegate:(id)arg1;
- (void)transitLineIncidentsViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;

@end
