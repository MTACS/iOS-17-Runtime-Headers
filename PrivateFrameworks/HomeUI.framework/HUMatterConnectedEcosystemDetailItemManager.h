
@interface HUMatterConnectedEcosystemDetailItemManager : HFItemManager {
    HMCHIPEcosystem * _connectedEcosystem;
    HFTransformItemProvider * _connectedEcosystemAccessoryItemProvider;
    HUMatterHomeConnectedEcosystemItemProvider * _connectedEcosystemItemProvider;
    HFItem * _instructionsItem;
}

@property (nonatomic, readonly) HMCHIPEcosystem *connectedEcosystem;
@property (nonatomic, retain) HFTransformItemProvider *connectedEcosystemAccessoryItemProvider;
@property (nonatomic, readonly) HUMatterHomeConnectedEcosystemItemProvider *connectedEcosystemItemProvider;
@property (nonatomic, retain) HFItem *instructionsItem;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_roomForItem:(id)arg1;
- (id)connectedEcosystem;
- (id)connectedEcosystemAccessoryItemProvider;
- (id)connectedEcosystemItemProvider;
- (id)initWithConnectedEcosystem:(id)arg1 connectedEcosystemItemProvider:(id)arg2 delegate:(id)arg3;
- (id)instructionsItem;
- (void)setConnectedEcosystemAccessoryItemProvider:(id)arg1;
- (void)setInstructionsItem:(id)arg1;

@end
