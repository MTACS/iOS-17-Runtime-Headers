
@interface HUSideBarItemManager : HFItemManager <HFHomeManagerObserver> {
    HUSideBarStaticItem * _automationItem;
    HFAccessoryCategoryStatusItemProvider * _categoryItemProvider;
    NSDictionary * _discoverContentAvailabilityDictionary;
    HUSideBarStaticItem * _discoverItem;
    HUSideBarStaticItem * _homeItem;
    HFReorderableHomeKitItemList * _reorderableRoomList;
    HFRoomItemProvider * _roomItemProvider;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HUSideBarStaticItem *automationItem;
@property (nonatomic, retain) HFAccessoryCategoryStatusItemProvider *categoryItemProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *discoverContentAvailabilityDictionary;
@property (nonatomic, retain) HUSideBarStaticItem *discoverItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUSideBarStaticItem *homeItem;
@property (nonatomic, retain) HFReorderableHomeKitItemList *reorderableRoomList;
@property (nonatomic, retain) HFRoomItemProvider *roomItemProvider;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)allItems;
- (id)automationItem;
- (id)categoryItemForCategory:(id)arg1;
- (id)categoryItemProvider;
- (id)discoverContentAvailabilityDictionary;
- (id)discoverItem;
- (id)getLearnItemAvailabilityDictionary;
- (id)homeItem;
- (id)initWithDelegate:(id)arg1;
- (id)reorderableRoomList;
- (id)roomItemForRoom:(id)arg1;
- (id)roomItemProvider;
- (id)roomItems;
- (void)setAutomationItem:(id)arg1;
- (void)setCategoryItemProvider:(id)arg1;
- (void)setDiscoverContentAvailabilityDictionary:(id)arg1;
- (void)setDiscoverItem:(id)arg1;
- (void)setHomeItem:(id)arg1;
- (void)setReorderableRoomList:(id)arg1;
- (void)setRoomItemProvider:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)sortedCategoryItems;
- (id)sortedRoomItems;
- (id)staticItemProvider;

@end
