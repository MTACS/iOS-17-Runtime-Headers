
@interface HUPresenceLocationDeviceFooterItem : HFItem {
    HMHome * _home;
    HULocationDeviceManager * _locationDeviceManager;
    HUPresenceCurrentUserLocationDevice * _selectedLocationDevice;
    bool  _useSingleUserStyle;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HULocationDeviceManager *locationDeviceManager;
@property (nonatomic, retain) HUPresenceCurrentUserLocationDevice *selectedLocationDevice;
@property (nonatomic) bool useSingleUserStyle;

+ (id)_locationDeviceTextForDeviceNameString:(id)arg1;

- (void).cxx_destruct;
- (id)_homeHubNeedsUpdateWarningText;
- (id)_itemUpdateOutcomeForLocationDeviceText:(id)arg1;
- (id)_someUsersNeedSoftwareUpdateWarningText;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 selectedLocationDevice:(id)arg2 locationDeviceManager:(id)arg3 useSingleUserStyle:(bool)arg4;
- (id)locationDeviceManager;
- (id)selectedLocationDevice;
- (void)setSelectedLocationDevice:(id)arg1;
- (void)setUseSingleUserStyle:(bool)arg1;
- (bool)useSingleUserStyle;

@end
