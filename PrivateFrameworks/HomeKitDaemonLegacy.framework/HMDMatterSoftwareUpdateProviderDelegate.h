
@interface HMDMatterSoftwareUpdateProviderDelegate : HMFObject <HMFLogging, HMMTRSoftwareUpdateProviderDelegate> {
    HMDAccessoryFirmwareUpdateManager * _accessoryFirmwareUpdateManager;
    <HMDMatterSoftwareUpdateProviderDelegateDataSource> * _dataSource;
    HMDHomeManager * _homeManager;
    HMMTRSoftwareUpdateProvider * _softwareUpdateProvider;
}

@property HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) <HMDMatterSoftwareUpdateProviderDelegateDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property HMMTRSoftwareUpdateProvider *softwareUpdateProvider;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessoryWithPairing:(id)arg1;
- (id)_queryImageResponseWithStatus:(id)arg1 delayedActionTime:(id)arg2;
- (id)accessoryFirmwareUpdateManager;
- (void)applyUpdateWithPairing:(id)arg1 requestParams:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)configureWithSoftwareUpdateProvider:(id)arg1;
- (id)dataSource;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 accessoryFirmwareUpdateManager:(id)arg2;
- (id)initWithHomeManager:(id)arg1 accessoryFirmwareUpdateManager:(id)arg2 dataSource:(id)arg3;
- (void)notifyUpdateRequestedForHMDHAPAccessory:(id)arg1 isUserTriggered:(bool)arg2;
- (void)notifyUpdateWithPairing:(id)arg1 params:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)queryImageWithPairing:(id)arg1 requestParams:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)resetOTAProviderStateForHMDHAPAccessory:(id)arg1;
- (void)setAccessoryFirmwareUpdateManager:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setSoftwareUpdateProvider:(id)arg1;
- (id)softwareUpdateProvider;
- (bool)updateUARPFirmwareVersionForAccessory:(id)arg1 version:(id)arg2;

@end
