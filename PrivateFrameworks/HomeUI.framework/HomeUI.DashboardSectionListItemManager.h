
@interface HomeUI.DashboardSectionListItemManager : HFItemManager {
    void cameraSectionItem;
    void categoryItemProvider;
    void favoriteSectionItem;
    void reorderableSectionList;
    void room;
    void roomItemProvider;
    void sceneSectionItem;
    void staticItemProvider;
}

@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)home;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setHome:(id)arg1;

@end
