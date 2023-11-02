
@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject {
    <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> * _delegate;
    RPCompanionLinkClient * _discoveryLink;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    unsigned long long  _rapportClientActivationFailCount;
}

@property (nonatomic) <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> *delegate;
@property (nonatomic, retain) RPCompanionLinkClient *discoveryLink;
@property (nonatomic, retain) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic) unsigned long long rapportClientActivationFailCount;

- (void).cxx_destruct;
- (id)_reachableDevices:(id)arg1;
- (void)_resetRapportClientWithInvalidation:(bool)arg1;
- (id)_sendRapportMessageToAccessoriesWithRequestID:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)_sendRapportMessageToAccessoryWithRequestID:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)_sendRapportMessageToDevice:(id)arg1 requestID:(id)arg2 request:(id)arg3 options:(id)arg4;
- (void)_setupRapportClient;
- (void)_updateRapportReachable;
- (id)delegate;
- (id)discoveryLink;
- (id)extractWiFiInfo;
- (id)identifyAccessory;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 groupedAccessory:(bool)arg3 delegate:(id)arg4;
- (id)mediaProfileContainer;
- (unsigned long long)rapportClientActivationFailCount;
- (id)requestAirDrop:(id)arg1;
- (id)requestSysdiagnose:(id)arg1 options:(id)arg2;
- (id)restartAccessories;
- (id)restartAccessory;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryLink:(id)arg1;
- (void)setMediaProfileContainer:(id)arg1;
- (void)setRapportClientActivationFailCount:(unsigned long long)arg1;

@end
