
@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver> {
    HFItem * _autoUpdateItem;
    HFItem * _autoUpdateThirdPartyItem;
    HFItem * _betaUpdatesItem;
    HFItem * _carrySettingsItem;
    NSSet * _devices;
    HUSoftwareUpdateFetchItem * _fetchItem;
    HUFirmwareUpdateItemModule * _firmwareUpdateModule;
    HFItem * _homeUpdateBannerItem;
    HMHome * _overrideHome;
    NAFuture * _softwareUpdateFetchFuture;
    HUSoftwareUpdateItemModule * _softwareUpdateModule;
    HUSoftwareUpdateAllItem * _updateAllItem;
    HFItem * _updatedRecentlyItem;
}

@property (nonatomic, retain) HFItem *autoUpdateItem;
@property (nonatomic, retain) HFItem *autoUpdateThirdPartyItem;
@property (nonatomic, retain) HFItem *betaUpdatesItem;
@property (nonatomic, retain) HFItem *carrySettingsItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *devices;
@property (nonatomic, retain) HUSoftwareUpdateFetchItem *fetchItem;
@property (nonatomic, retain) HUFirmwareUpdateItemModule *firmwareUpdateModule;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *homeUpdateBannerItem;
@property (nonatomic, retain) HMHome *overrideHome;
@property (nonatomic, retain) NAFuture *softwareUpdateFetchFuture;
@property (nonatomic, retain) HUSoftwareUpdateItemModule *softwareUpdateModule;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUSoftwareUpdateAllItem *updateAllItem;
@property (nonatomic, retain) HFItem *updatedRecentlyItem;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_transformedUpdateOutcomeForItem:(id)arg1 proposedOutcome:(id)arg2;
- (void)addHomeSetupSuccessBlock:(id /* block */)arg1;
- (id)autoUpdateItem;
- (id)autoUpdateThirdPartyItem;
- (id)betaUpdatesItem;
- (id)carrySettingsItem;
- (void)dealloc;
- (id)devices;
- (id)fetchItem;
- (id)firmwareUpdateModule;
- (void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(bool)arg2;
- (void)home:(id)arg1 didUpdateAutomaticThirdPartyAccessorySoftwareUpdateEnabled:(bool)arg2;
- (void)homeManager:(id)arg1 didUpdateHH2State:(bool)arg2;
- (id)homeUpdateBannerItem;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)overrideHome;
- (void)setAutoUpdateItem:(id)arg1;
- (void)setAutoUpdateThirdPartyItem:(id)arg1;
- (void)setBetaUpdatesItem:(id)arg1;
- (void)setCarrySettingsItem:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setFetchItem:(id)arg1;
- (void)setFirmwareUpdateModule:(id)arg1;
- (void)setHomeUpdateBannerItem:(id)arg1;
- (void)setOverrideHome:(id)arg1;
- (void)setSoftwareUpdateFetchFuture:(id)arg1;
- (void)setSoftwareUpdateModule:(id)arg1;
- (void)setUpdateAllItem:(id)arg1;
- (void)setUpdatedRecentlyItem:(id)arg1;
- (id)softwareUpdateFetchFuture;
- (id)softwareUpdateModule;
- (id)triggerSoftwareUpdateFetch;
- (id)updateAllItem;
- (id)updatedRecentlyItem;

@end
