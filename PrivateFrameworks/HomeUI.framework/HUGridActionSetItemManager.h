
@interface HUGridActionSetItemManager : HFItemManager {
    HFActionSetItemProvider * _actionSetItemProvider;
    HFStaticItem * _actionSetPlaceholderItem;
    HFStaticItemProvider * _actionSetPlaceholderItemProvider;
    unsigned long long  _actionSetStyle;
    HFReorderableHomeKitItemList * _clientReorderableActionSetList;
    bool  _hideActionSetPlaceholderItem;
    bool  _onlyShowsFavorites;
    HMRoom * _room;
}

@property (nonatomic, retain) HFActionSetItemProvider *actionSetItemProvider;
@property (nonatomic, retain) HFStaticItem *actionSetPlaceholderItem;
@property (nonatomic, retain) HFStaticItemProvider *actionSetPlaceholderItemProvider;
@property (nonatomic, readonly) unsigned long long actionSetStyle;
@property (nonatomic, retain) HFReorderableHomeKitItemList *clientReorderableActionSetList;
@property (nonatomic) bool hideActionSetPlaceholderItem;
@property (nonatomic) bool onlyShowsFavorites;
@property (nonatomic, retain) HFReorderableHomeKitItemList *reorderableActionSetList;
@property (nonatomic, retain) HMRoom *room;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemForSorting;
- (id)_itemsToHideInSet:(id)arg1;
- (bool)_requiresNotificationsForCharacteristic:(id)arg1;
- (void)_updateFilters;
- (id)actionSetItemAssociatedWithActionSet:(id)arg1;
- (id)actionSetItemProvider;
- (id)actionSetPlaceholderItem;
- (id)actionSetPlaceholderItemProvider;
- (unsigned long long)actionSetStyle;
- (id)clientReorderableActionSetList;
- (bool)hideActionSetPlaceholderItem;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 actionSetStyle:(unsigned long long)arg2 room:(id)arg3;
- (bool)isItemReorderableAtIndex:(id)arg1;
- (bool)onlyShowsFavorites;
- (id)reorderableActionSetList;
- (id)room;
- (void)setActionSetItemProvider:(id)arg1;
- (void)setActionSetPlaceholderItem:(id)arg1;
- (void)setActionSetPlaceholderItemProvider:(id)arg1;
- (void)setClientReorderableActionSetList:(id)arg1;
- (void)setHideActionSetPlaceholderItem:(bool)arg1;
- (void)setOnlyShowsFavorites:(bool)arg1;
- (void)setReorderableActionSetList:(id)arg1;
- (void)setRoom:(id)arg1;
- (bool)shouldPerformInitialLoadOnMainThread;

@end
