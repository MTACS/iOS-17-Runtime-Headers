
@interface HUBridgeListItemManager : HFItemManager {
    HFBridgeItemProvider * _bridgeItemProvider;
    HMHome * _overrideHome;
    HFResidentDeviceItemProvider * _residentDeviceItemProvider;
}

@property (nonatomic, retain) HFBridgeItemProvider *bridgeItemProvider;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (nonatomic, retain) HFResidentDeviceItemProvider *residentDeviceItemProvider;

+ (id /* block */)residentDeviceItemComparator;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_itemsToHideInSet:(id)arg1;
- (id)bridgeItemForAccessory:(id)arg1;
- (id)bridgeItemProvider;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (bool)isBridgeItem:(id)arg1;
- (bool)isResidentDeviceItem:(id)arg1;
- (id)overrideHome;
- (id)residentDeviceItemProvider;
- (void)setBridgeItemProvider:(id)arg1;
- (void)setResidentDeviceItemProvider:(id)arg1;

@end
