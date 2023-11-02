
@interface HUPersonalRequestsDescriptionFooterItem : HFItem {
    bool  _hasSiriEndpointAccessories;
    HULocationDeviceManager * _locationDeviceManager;
}

@property (nonatomic) bool hasSiriEndpointAccessories;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;

- (void).cxx_destruct;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_locationDeviceTextForDeviceNameString:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)hasSiriEndpointAccessories;
- (id)init;
- (id)locationDeviceManager;
- (void)setHasSiriEndpointAccessories:(bool)arg1;

@end
