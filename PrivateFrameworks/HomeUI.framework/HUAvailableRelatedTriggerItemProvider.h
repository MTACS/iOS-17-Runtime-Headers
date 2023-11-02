
@interface HUAvailableRelatedTriggerItemProvider : HFItemProvider {
    <HUAvailableRelatedTriggerItemModuleContextProviding> * _context;
    HMHome * _home;
    HRERecommendationItemProvider * _recommendationItemProvider;
    HUTriggerItemProvider * _relatedActiveTriggerItemProvider;
    NSArray * _relatedItems;
    id /* block */  _triggerFilter;
    NSMutableSet * _triggerItems;
    NSMutableSet * _updatesDisabledReasons;
}

@property (nonatomic, readonly) <HUAvailableRelatedTriggerItemModuleContextProviding> *context;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSSet *itemProviders;
@property (nonatomic, retain) HRERecommendationItemProvider *recommendationItemProvider;
@property (nonatomic, copy) id /* block */ recommendationsFilter;
@property (nonatomic, retain) HUTriggerItemProvider *relatedActiveTriggerItemProvider;
@property (nonatomic, readonly) NSArray *relatedItems;
@property (nonatomic, copy) id /* block */ triggerFilter;
@property (nonatomic, retain) NSMutableSet *triggerItems;
@property (nonatomic, retain) NSMutableSet *updatesDisabledReasons;

- (void).cxx_destruct;
- (void)_buildProviders;
- (id)context;
- (void)disableUpdatesWithReason:(id)arg1;
- (void)endDisableUpdatesWithReason:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 relatedItems:(id)arg2 context:(id)arg3;
- (id)invalidationReasons;
- (id)itemProviders;
- (id)items;
- (id)itemsToHideInSet:(id)arg1;
- (id)recommendationItemProvider;
- (id /* block */)recommendationsFilter;
- (id)relatedActiveTriggerItemProvider;
- (id)relatedItems;
- (bool)relatedItemsAffectedByTrigger:(id)arg1;
- (id)reloadAvailableTriggerItemsWithObjects:(id)arg1;
- (id)reloadItems;
- (void)setRecommendationItemProvider:(id)arg1;
- (void)setRecommendationsFilter:(id /* block */)arg1;
- (void)setRelatedActiveTriggerItemProvider:(id)arg1;
- (void)setTriggerFilter:(id /* block */)arg1;
- (void)setTriggerItems:(id)arg1;
- (void)setUpdatesDisabledReasons:(id)arg1;
- (id /* block */)triggerFilter;
- (id)triggerItems;
- (id)updatesDisabledReasons;

@end
