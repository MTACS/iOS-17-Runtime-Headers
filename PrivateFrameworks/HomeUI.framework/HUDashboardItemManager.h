
@interface HUDashboardItemManager : HFItemManager {
    HFAccessoryLikeItemProvider * _accessoryLikeItemProvider;
    HUDashboardAccessoryTransformItemProvider * _accessoryTransformItemProvider;
    HUDashboardActionSetItemModule * _actionSetItemModule;
    HUBannerItemModule * _bannerItemModule;
    HUDashboardCameraItemModule * _cameraItemModule;
    HFReorderableHomeKitItemList * _clientReorderableFavoritesList;
    NSMutableDictionary * _clientReorderableServiceByTypeList;
    NSMutableDictionary * _clientReorderableServiceListByRoom;
    HUDashboardContext * _context;
    <HUDashboardItemManagerDelegate> * _dashboardDelegate;
    HUEnergyDashboardItemModule * _energyDashboardItemModule;
    HFFakeMediaAccessoryItemProvider * _fakeSpeakersAndTVsItemProvider;
    HFAccessoryLikeItemProvider * _favoritesItemProvider;
    HFProgrammableSwitchItemProvider * _programmableSwitchItemProvider;
    HUServicePlaceholderItemModule * _servicePlaceholderItemModule;
    HFAccessoryLikeItemProvider * _speakersAndTVsItemProvider;
    HUStatusItemModule * _statusItemModule;
    HUDashboardTipModule * _tipItemModule;
}

@property (nonatomic, retain) HFAccessoryLikeItemProvider *accessoryLikeItemProvider;
@property (nonatomic, retain) HUDashboardAccessoryTransformItemProvider *accessoryTransformItemProvider;
@property (nonatomic, retain) HUDashboardActionSetItemModule *actionSetItemModule;
@property (nonatomic, retain) HUBannerItemModule *bannerItemModule;
@property (nonatomic, retain) HUDashboardCameraItemModule *cameraItemModule;
@property (nonatomic, retain) HFReorderableHomeKitItemList *clientReorderableFavoritesList;
@property (nonatomic, retain) NSMutableDictionary *clientReorderableServiceByTypeList;
@property (nonatomic, retain) NSMutableDictionary *clientReorderableServiceListByRoom;
@property (nonatomic, readonly) HUDashboardContext *context;
@property (nonatomic) <HUDashboardItemManagerDelegate> *dashboardDelegate;
@property (nonatomic, retain) HUEnergyDashboardItemModule *energyDashboardItemModule;
@property (nonatomic, retain) HFFakeMediaAccessoryItemProvider *fakeSpeakersAndTVsItemProvider;
@property (nonatomic, retain) HFAccessoryLikeItemProvider *favoritesItemProvider;
@property (nonatomic, readonly) NSSet *homeMenuStatusItems;
@property (nonatomic, readonly) bool isEmptyDashboard;
@property (nonatomic, retain) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider;
@property (nonatomic, retain) HUServicePlaceholderItemModule *servicePlaceholderItemModule;
@property (nonatomic, retain) HFAccessoryLikeItemProvider *speakersAndTVsItemProvider;
@property (nonatomic, retain) HUStatusItemModule *statusItemModule;
@property (nonatomic, retain) HUDashboardTipModule *tipItemModule;

- (void).cxx_destruct;
- (id)_buildAccessoryCategorySectionsWithItems:(id)arg1;
- (id)_buildFavoritesSectionWithFavoriteItems:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildNowPlayingSectionWithItems:(id)arg1 forRouteIdentifier:(id)arg2;
- (id)_buildRoomSectionsWithItems:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildStaticItemsForHome:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (id)_itemForSorting;
- (id)_itemSectionForRoom:(id)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_itemsToUpdateWhenApplicationDidBecomeActive;
- (void)_registerForExternalUpdates;
- (id)_sortedAccessoryTypeGroups;
- (void)_unregisterForExternalUpdates;
- (id)accessoryLikeItemProvider;
- (id)accessoryTransformItemProvider;
- (id)actionSetItemModule;
- (id)bannerItemModule;
- (id)buildItemForHomeKitObject:(id)arg1;
- (id)cameraItemModule;
- (id)clientReorderableFavoritesList;
- (id)clientReorderableServiceByTypeList;
- (id)clientReorderableServiceListByRoom;
- (id)context;
- (id)createRoomSectionsWithItems:(id)arg1 sectionIdentifierBlock:(id /* block */)arg2;
- (id)dashboardDelegate;
- (id)energyDashboardItemModule;
- (id)fakeSpeakersAndTVsItemProvider;
- (id)favoritesItemProvider;
- (void)home:(id)arg1 didAddRoom:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (id)homeMenuStatusItems;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (bool)isEmptyDashboard;
- (bool)isHomeMenuStatusItem:(id)arg1;
- (id)itemModuleForSectionIdentifier:(id)arg1;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (id)programmableSwitchItemProvider;
- (id)reorderableFavoritesList;
- (id)reorderableServiceListForRoom:(id)arg1;
- (id)reorderableServiceListForType:(id)arg1;
- (id)servicePlaceholderItemModule;
- (void)setAccessoryLikeItemProvider:(id)arg1;
- (void)setAccessoryTransformItemProvider:(id)arg1;
- (void)setActionSetItemModule:(id)arg1;
- (void)setBannerItemModule:(id)arg1;
- (void)setCameraItemModule:(id)arg1;
- (void)setClientReorderableFavoritesList:(id)arg1;
- (void)setClientReorderableServiceByTypeList:(id)arg1;
- (void)setClientReorderableServiceListByRoom:(id)arg1;
- (void)setDashboardDelegate:(id)arg1;
- (void)setEnergyDashboardItemModule:(id)arg1;
- (void)setFakeSpeakersAndTVsItemProvider:(id)arg1;
- (void)setFavoritesItemProvider:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setProgrammableSwitchItemProvider:(id)arg1;
- (void)setReorderableFavoritesList:(id)arg1;
- (void)setReorderableServiceList:(id)arg1 forRoom:(id)arg2;
- (void)setReorderableServiceList:(id)arg1 forType:(id)arg2;
- (void)setServicePlaceholderItemModule:(id)arg1;
- (void)setSpeakersAndTVsItemProvider:(id)arg1;
- (void)setStatusItemModule:(id)arg1;
- (void)setTipItemModule:(id)arg1;
- (id)speakersAndTVsItemProvider;
- (id)statusItemModule;
- (id)tipItemModule;
- (void)updateItemSectionHeaderTitleForRoom:(id)arg1;

@end