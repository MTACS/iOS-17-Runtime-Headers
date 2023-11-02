
@interface CSListItemDiscoveryProvider : NSObject <ATXUserEducationSuggestionObserver, CSDiscoveryItemExplorePostersPlatterViewDelegate, CSListItemProviding, DNDStateUpdateListener, FCUIOnboardingPlatterDiscoveryViewDelegate> {
    NSMutableDictionary * _discoveryTypeToDiscoverySuggestionAndListItems;
    <CSListItemManaging> * _itemManager;
    bool  _listHasAdditionalContent;
    DNDStateService * _stateService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveryTypeToDiscoverySuggestionAndListItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic, retain) <CSListItemManaging> *itemManager;
@property (nonatomic, readonly) id /* block */ itemsGroupSortComparator;
@property (nonatomic, readonly) id /* block */ itemsViewControllerSortComparator;
@property (nonatomic) bool listHasAdditionalContent;
@property (nonatomic, readonly, copy) CSListItemSection *section;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customizeFocusDiscoveryViewWithDNDSemanticType:(long long)arg1;
- (id)_discoveryTypeForSuggestion:(id)arg1;
- (id)_explorePostersDiscoveryItemViewControllerForPlatter:(id)arg1 firstDidAppearCompletion:(id /* block */)arg2;
- (id)_explorePostersDiscoveryView;
- (void)_handleDismissSuggestion:(id)arg1 type:(id)arg2;
- (void)_handleShowSuggestion:(id)arg1 type:(id)arg2 isPrototyping:(bool)arg3;
- (void)_presentPlatterDiscoveryView:(id)arg1 discoveryItemViewController:(id)arg2 withSuggestion:(id)arg3 type:(id)arg4;
- (void)_prototypeTest_addItem;
- (void)_prototypeTest_registerRecipe;
- (void)_prototypeTest_removeItem;
- (void)_removeDiscoveryOfType:(id)arg1;
- (id)_sleepMigrationDiscoveryView;
- (void)didReceiveUserEducationSuggestionEvent:(id)arg1;
- (id)discoveryTypeToDiscoverySuggestionAndListItems;
- (void)explorePostersPlatterViewWasTapped:(id)arg1;
- (void)handleRemovedItems:(id)arg1;
- (id)init;
- (unsigned long long)itemCount;
- (id)itemManager;
- (bool)listHasAdditionalContent;
- (void)onboardingPlatter:(id)arg1 requestsModalPresentationOfViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)onboardingPlatterRequestsDismissal:(id)arg1;
- (id)section;
- (void)setDiscoveryTypeToDiscoverySuggestionAndListItems:(id)arg1;
- (void)setItemManager:(id)arg1;
- (void)setListHasAdditionalContent:(bool)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)willPresentPosterSwitcher;

@end
