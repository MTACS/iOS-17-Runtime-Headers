
@interface PSUICoreTelephonyCapabilitiesCache : NSObject <CoreTelephonyClientCapabilitiesDelegate> {
    CoreTelephonyClient * _client;
    CTCapability * _networkSlicingCapability;
    PSSimStatusCache * _simStatusCache;
    CTCapability * _turnOffCellularCapability;
    CTCapability * _volteCapability;
    CTCapability * _vonrCapability;
}

@property (nonatomic, retain) CoreTelephonyClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CTCapability *networkSlicingCapability;
@property (nonatomic, retain) PSSimStatusCache *simStatusCache;
@property (readonly) Class superclass;
@property (retain) CTCapability *turnOffCellularCapability;
@property (retain) CTCapability *volteCapability;
@property (retain) CTCapability *vonrCapability;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canSetCapabilityForContext:(id)arg1 cache:(id)arg2;
- (bool)canSetCapabilityVoLTE:(id)arg1;
- (bool)canSetCapabilityVoNR:(id)arg1;
- (bool)canSetNetworkSlicing:(id)arg1;
- (bool)canSetTurnOffCellular:(id)arg1;
- (bool)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (bool)capabilityEnabledForContext:(id)arg1 cache:(id)arg2;
- (bool)capabilityEnabledVoLTE:(id)arg1;
- (bool)capabilityEnabledVoNR:(id)arg1;
- (void)clearCache;
- (id)client;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (void)fetchCanSetCapabilityWithCache:(id)arg1;
- (void)fetchCapabilityEnabledWithCache:(id)arg1;
- (bool)fetchDeviceAndPlan5GSupport:(id)arg1;
- (bool)getCapabilityInfo:(id)arg1 forContext:(id)arg2 cache:(id)arg3;
- (id)getLogger;
- (bool)getNetworkSlicing:(id)arg1;
- (bool)getTurnOffCellular:(id)arg1;
- (id)init;
- (id)initPrivate;
- (bool)isNetworkSlicingManagedForContext:(id)arg1;
- (bool)isVoLTEStillProvisioningForContext:(id)arg1;
- (id)networkSlicingCapability;
- (void)setCapabilityEnabledForContext:(id)arg1 cache:(id)arg2 enabled:(bool)arg3;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(bool)arg2;
- (void)setCapabilityVoNR:(id)arg1 enabled:(bool)arg2;
- (void)setClient:(id)arg1;
- (void)setNetworkSlicing:(id)arg1 enabled:(bool)arg2;
- (void)setNetworkSlicingCapability:(id)arg1;
- (void)setSimStatusCache:(id)arg1;
- (void)setTurnOffCellular:(id)arg1 enabled:(bool)arg2;
- (void)setTurnOffCellularCapability:(id)arg1;
- (void)setVolteCapability:(id)arg1;
- (void)setVonrCapability:(id)arg1;
- (id)simStatusCache;
- (id)turnOffCellularCapability;
- (id)volteCapability;
- (id)vonrCapability;
- (void)willEnterForeground;

@end
