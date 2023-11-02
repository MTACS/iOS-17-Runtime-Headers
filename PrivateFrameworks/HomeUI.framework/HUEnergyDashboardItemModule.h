
@interface HUEnergyDashboardItemModule : HFItemModule {
    void dashboardContext;
    void home;
}

- (void).cxx_destruct;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 dashboardContext:(id)arg2 home:(id)arg3;

@end
