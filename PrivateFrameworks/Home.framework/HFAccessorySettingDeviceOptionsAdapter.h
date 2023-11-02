
@interface HFAccessorySettingDeviceOptionsAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterButtonHandling, HFAccessorySettingAdapterDisplayArbitrating, HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> {
    HFAccessorySettingDeviceOptionsAdapterUtility * _adapterUtility;
    NAFuture * _inProgressSysdiagnoseCollectionFuture;
    bool  _isAccessoryReachableOverRapport;
}

@property (nonatomic, retain) HFAccessorySettingDeviceOptionsAdapterUtility *adapterUtility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (nonatomic) bool isAccessoryReachableOverRapport;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_handleButtonPress;
- (id)_home;
- (void)accessoryReachableOverRapport:(bool)arg1;
- (id)adapterUtility;
- (id)airDropSysdiagnose:(id)arg1;
- (id)extractWiFiInfo;
- (id)handleButtonPressForEntity:(id)arg1;
- (id)identifyAccessory;
- (id)inProgressButtonPressFutureForEntity:(id)arg1;
- (id)inProgressButtonPressFutureForKeyPath:(id)arg1;
- (id)inProgressSysdiagnoseCollectionFuture;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2;
- (bool)isAccessoryReachableOverRapport;
- (id)restartAccessories;
- (id)restartAccessory;
- (void)setAdapterUtility:(id)arg1;
- (void)setInProgressSysdiagnoseCollectionFuture:(id)arg1;
- (void)setIsAccessoryReachableOverRapport:(bool)arg1;
- (bool)shouldShowSettingsEntity:(id)arg1;
- (bool)supportButtonPressForEntity:(id)arg1;

@end
