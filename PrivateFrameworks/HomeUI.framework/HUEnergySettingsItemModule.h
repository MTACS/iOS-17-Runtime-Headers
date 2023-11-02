
@interface HUEnergySettingsItemModule : HFItemModule {
    HFItem * _gridForecastItem;
    HMHome * _home;
    HFItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HFItem *gridForecastItem;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItemProvider *staticItemProvider;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)gridForecastItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (void)setGridForecastItem:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;

@end
