
@interface HUMatterConnectedServicesListItem : HFItem {
    HMAccessory * _accessory;
    HMHome * _home;
    HFItemProvider * _itemProvider;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItemProvider *itemProvider;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)home;
- (id)initWithAccessory:(id)arg1 home:(id)arg2 itemProvider:(id)arg3;
- (id)itemProvider;

@end
