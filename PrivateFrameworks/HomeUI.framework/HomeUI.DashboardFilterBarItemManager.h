
@interface HomeUI.DashboardFilterBarItemManager : HFItemManager <HFExecutionEnvironmentObserver> {
    void actionSetItemProvider;
    void categoryItemProvider;
    void energyHelper;
}

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (void)dealloc;
- (void)executionEnvironmentDidBecomeActive:(id)arg1;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(id)arg1;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
