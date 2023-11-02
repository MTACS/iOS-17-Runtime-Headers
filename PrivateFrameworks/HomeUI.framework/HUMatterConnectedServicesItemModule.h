
@interface HUMatterConnectedServicesItemModule : HFItemModule {
    HMAccessory * _accessory;
    HUMatterConnectedEcosystemItemProvider * _connectedServicesItemProvider;
    HFItem * _connectedServicesListItem;
    HMHome * _home;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider;
@property (nonatomic, readonly) HFItem *connectedServicesListItem;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)accessory;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)connectedServicesItemProvider;
- (id)connectedServicesListItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 accessory:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 accessory:(id)arg2 home:(id)arg3 itemProvider:(id)arg4;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;

@end
