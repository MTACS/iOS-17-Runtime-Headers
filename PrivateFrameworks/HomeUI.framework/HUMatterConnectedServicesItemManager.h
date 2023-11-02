
@interface HUMatterConnectedServicesItemManager : HFItemManager {
    NSString * _accessorySystemCommisionerUUID;
    HUMatterConnectedEcosystemItemProvider * _connectedServicesItemProvider;
    HFItem * _instructionsItem;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, retain) NSString *accessorySystemCommisionerUUID;
@property (nonatomic, readonly) HUMatterHomeConnectedEcosystemItemProvider *connectedHomeEcosystemItemProvider;
@property (nonatomic, retain) HUMatterConnectedEcosystemItemProvider *connectedServicesItemProvider;
@property (nonatomic, retain) HFItem *instructionsItem;

+ (id /* block */)connectedServicesItemComparator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)accessory;
- (id)accessorySystemCommisionerUUID;
- (id)connectedAccessoryEcosystemItemProvider;
- (id)connectedHomeEcosystemItemProvider;
- (id)connectedServicesItemProvider;
- (void)connectedServicesSectionFooterLink:(id)arg1 isForAccessory:(bool)arg2;
- (id)fetchSystemCommissionerPairingUUID;
- (id)initWithConnectedServicesItemProvider:(id)arg1 delegate:(id)arg2;
- (id)instructionsItem;
- (void)setAccessorySystemCommisionerUUID:(id)arg1;
- (void)setConnectedServicesItemProvider:(id)arg1;
- (void)setInstructionsItem:(id)arg1;

@end
