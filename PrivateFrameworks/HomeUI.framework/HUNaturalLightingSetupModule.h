
@interface HUNaturalLightingSetupModule : HFItemModule {
    HFAccessoryItemProvider * _accessoryItemProvider;
    NSNumber * _defaultSelectedValue;
    <HUNaturalLightingSetupModuleDelegate> * _delegate;
    id /* block */  _filter;
    HMHome * _home;
    NSSet * _itemProviders;
    HFServiceGroupItemProvider * _serviceGroupItemProvider;
    HFServiceItemProvider * _serviceItemProvider;
}

@property (nonatomic, retain) HFAccessoryItemProvider *accessoryItemProvider;
@property (nonatomic, retain) NSNumber *defaultSelectedValue;
@property (nonatomic) <HUNaturalLightingSetupModuleDelegate> *delegate;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFServiceGroupItemProvider *serviceGroupItemProvider;
@property (nonatomic, retain) HFServiceItemProvider *serviceItemProvider;

+ (bool)showNaturalLightingContainingHomeKitObject:(id)arg1;

- (void).cxx_destruct;
- (id)_buildItemProviders;
- (id)accessoryItemProvider;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)commitSelectedItems;
- (id)defaultSelectedValue;
- (id)delegate;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1 itemUpdater:(id)arg2;
- (id)itemProviders;
- (id)selectedItems;
- (id)serviceGroupItemProvider;
- (id)serviceItemProvider;
- (void)setAccessoryItemProvider:(id)arg1;
- (void)setDefaultSelectedValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHome:(id)arg1;
- (void)setServiceGroupItemProvider:(id)arg1;
- (void)setServiceItemProvider:(id)arg1;
- (void)toggleSelectedForItem:(id)arg1;

@end
