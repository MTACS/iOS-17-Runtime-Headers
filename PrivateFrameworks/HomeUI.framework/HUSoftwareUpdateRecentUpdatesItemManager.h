
@interface HUSoftwareUpdateRecentUpdatesItemManager : HFItemManager {
    HMHome * _overrideHome;
    HUSoftwareUpdateItemModule * _softwareUpdateModule;
}

@property (nonatomic, retain) HMHome *overrideHome;
@property (nonatomic, retain) HUSoftwareUpdateItemModule *softwareUpdateModule;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithDelegate:(id)arg1 home:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)overrideHome;
- (void)setOverrideHome:(id)arg1;
- (void)setSoftwareUpdateModule:(id)arg1;
- (id)softwareUpdateModule;

@end
