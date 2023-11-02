
@interface MUPlaceUnifiedActionRowSectionController : MUPlaceSectionController <MUActionRowItemViewModelObserver, MUExternalActionAnalyticsHandling, MUPlaceCardActionsRowViewDelegate, MUPlaceCardActionsRowViewMenuProvider> {
    <MUPlaceUnifiedActionRowSectionControllerDelegate> * _actionDelegate;
    NSArray * _actionItemViewModels;
    MUGroupedActionsRowView * _actionsRowView;
    MUPlaceUnifiedActionRowSectionControllerConfiguration * _configuration;
    bool  _hasContent;
    MUFeatureDiscoveryAnnotationView * _offlineFeatureDiscoveryView;
    <MUOfflineMapProvider> * _offlineMapProvider;
    MUDownloadOfflineActionRowItemViewModel * _offlineViewModel;
    MUTimeExpirableLRUCache * _partnerIconsByURLs;
    MUPlaceholderGridCache * _placeholderGridCache;
    MUPlaceSectionView * _sectionView;
}

@property (nonatomic) <MUPlaceUnifiedActionRowSectionControllerDelegate> *actionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MUFeatureDiscoveryAnnotationView *offlineFeatureDiscoveryView;
@property (nonatomic) <MUOfflineMapProvider> *offlineMapProvider;
@property (nonatomic, retain) _MKPlaceActionButtonController *secondaryActionButtonController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionItemViewModelWithPlaceActionItem:(id)arg1;
- (void)_buildButtonLayout;
- (id)_buildSARLayout;
- (id)_buildServerControlledLayoutWithConfiguration:(id)arg1;
- (id)_buildStaticLayout;
- (id)_contactActionRowViewModel;
- (void)_createSectionView;
- (id)_directionsViewModel;
- (id)_downloadOfflineViewModel;
- (id)_moreActionsViewModelWithGroupedButton:(id)arg1 excludedSystemActionsTypes:(id)arg2;
- (id)_moreActionsViewModelWithPartnerActions:(id)arg1 promotedSystemActionTypes:(id)arg2 excludedSystemActionTypes:(id)arg3;
- (id)_partnerActionViewModelWithPartnerActionIndex:(unsigned long long)arg1;
- (void)_populateRevealedAnalyticsModule:(id)arg1;
- (void)_updateActions:(id)arg1;
- (void)_updateHasContent;
- (id)actionDelegate;
- (void)actionRowItemViewModelDidUpdate:(id)arg1;
- (void)actionsRowView:(id)arg1 didPresentMenuForViewModel:(id)arg2;
- (void)actionsRowView:(id)arg1 didSelectViewModel:(id)arg2 presentationOptions:(id)arg3;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (void)didUpdateFeatureDiscoveryStatus:(id)arg1;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;
- (void)instrumentExternalActionUsingAnalyticsAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 sharedStateButtonList:(id)arg4;
- (bool)isImpressionable;
- (id)menuElementForActionItem:(id)arg1;
- (id)menuForActionItem:(id)arg1;
- (id)offlineFeatureDiscoveryView;
- (id)offlineMapProvider;
- (id)secondaryActionButtonController;
- (id)sectionView;
- (void)setActionDelegate:(id)arg1;
- (void)setOfflineFeatureDiscoveryView:(id)arg1;
- (void)setOfflineMapProvider:(id)arg1;
- (void)setSecondaryActionButtonController:(id)arg1;

@end
