
@interface HUTriggerActionSetsItemModule : HFItemModule <HFItemHiding> {
    HFStaticItem * _actionSetsGridItem;
    HUTriggerActionFlow * _flow;
    NSSet * _itemProviders;
    NSSet * _prioritizedAccessories;
    HFStaticItem * _prioritizedServiceActionsGridItem;
    HFStaticItem * _serviceActionsGridItem;
    HUShortcutItem * _shortcutItem;
    HFTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) HFStaticItem *actionSetsGridItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HUTriggerActionFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *prioritizedAccessories;
@property (nonatomic, retain) HFStaticItem *prioritizedServiceActionsGridItem;
@property (nonatomic, retain) HFStaticItem *serviceActionsGridItem;
@property (nonatomic, retain) HUShortcutItem *shortcutItem;
@property (nonatomic, readonly) bool shouldShowPrioritizedActions;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_buildItemProviders;
- (id)_itemsToHideForStandardTriggerInSet:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_staticItems;
- (id)actionSetsGridItem;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)flow;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 itemUpdater:(id)arg3;
- (id)itemProviders;
- (id)prioritizedAccessories;
- (bool)prioritizedAccessoriesContainsMediaProfiles:(id)arg1;
- (bool)prioritizedAccessoriesContainsServices:(id)arg1;
- (id)prioritizedServiceActionsGridItem;
- (id)serviceActionsGridItem;
- (void)setActionSetsGridItem:(id)arg1;
- (void)setPrioritizedAccessories:(id)arg1;
- (void)setPrioritizedServiceActionsGridItem:(id)arg1;
- (void)setServiceActionsGridItem:(id)arg1;
- (void)setShortcutItem:(id)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (id)shortcutItem;
- (bool)shouldShowPrioritizedActions;
- (id)triggerBuilder;

@end
