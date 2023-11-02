
@interface MUNearestStationSectionController : MUTransitLineItemSectionController <MKETAProviderObserver, MUPlaceSectionControlling, MUPlaceVerticalCardContainerViewDelegate> {
    MUPlaceVerticalCardContainerView * _containerView;
    MKETAProvider * _etaProvider;
    MUPlaceFooterAtributionViewModel * _footerViewModel;
    MKMapItem * _nearestStation;
    <MUNearestStationSectionControllerDelegate> * _nearestStationDelegate;
    MUNearestStationRowView * _nearestStationRowView;
    MUPlaceSectionView * _sectionView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MUNearestStationSectionControllerDelegate> *nearestStationDelegate;
@property (nonatomic, readonly) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (nonatomic, readonly) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (nonatomic, readonly) UIView *sectionView;
@property (nonatomic, readonly) UIViewController *sectionViewController;
@property (nonatomic, readonly) NSArray *sectionViews;
@property (nonatomic, retain) MUPlaceCallToActionAppearance *submissionStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ETAProviderUpdated:(id)arg1;
- (void)_createNearestStationSection;
- (void)_handleAttributionTap;
- (id)initWithTransitLineItem:(id)arg1 etaProvider:(id)arg2;
- (id)nearestStationDelegate;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setNearestStationDelegate:(id)arg1;
- (void)updateWithMapItem:(id)arg1 isLoading:(bool)arg2;
- (void)verticalCardContainerView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;

@end
