
@interface MUTransitDeparturesSectionController : MUPlaceSectionController <MUPlaceSectionControlling, MUTransitDeparturesDataSourceDelegate, MUTransitDeparturesSectionViewProviderUserInteractionDelegate, _MKInfoCardAnalyticsDelegate> {
    bool  _active;
    MUTransitDeparturesDataSource * _dataSource;
    <MUTransitDeparturesSectionControllerDelegate> * _departuresDelegate;
    MUTransitDeparturesSectionViewProvider * _viewProvider;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) <MUInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUTransitDeparturesSectionControllerDelegate> *departuresDelegate;
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
- (void)_setupSections;
- (int)analyticsModuleType;
- (id)departuresDelegate;
- (id)draggableContent;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 moduleMetadata:(id)arg6 feedbackDelegateSelector:(int)arg7 actionRichProviderId:(id)arg8;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 moduleMetadata:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(bool)arg2 departuresDelegate:(id)arg3;
- (bool)isActive;
- (bool)isImpressionable;
- (bool)sectionViewProvider:(id)arg1 canSelect:(id)arg2 using:(id)arg3;
- (void)sectionViewProvider:(id)arg1 didSelect:(id)arg2 using:(id)arg3;
- (void)sectionViewProvider:(id)arg1 didSelectAttribution:(id)arg2;
- (void)sectionViewProvider:(id)arg1 didSelectConnectionInfo:(id)arg2;
- (void)sectionViewProvider:(id)arg1 didSelectDepartureSequence:(id)arg2 using:(id)arg3;
- (void)sectionViewProvider:(id)arg1 didSelectIncidents:(id)arg2;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setDeparturesDelegate:(id)arg1;
- (id)traitsForDeparturesDataSource:(id)arg1;
- (void)transitDeparturesDataSourceWantsReload:(id)arg1;

@end
