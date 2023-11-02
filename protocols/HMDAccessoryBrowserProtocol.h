
@protocol HMDAccessoryBrowserProtocol <NSObject>

@required

- (<HMDAccessoryBrowserHapProtocol> *)accessoryBrowserHapProtocol;
- (void)activate:(bool)arg1;
- (bool)active;
- (void)addUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1 forDeviceSetup:(bool)arg2;
- (void)addUnpairedAccessoryServer:(HAPAccessoryServer *)arg1 identifier:(NSString *)arg2;
- (<NSObject> *)beginActiveAssertionWithReason:(NSString *)arg1;
- (void)btleAccessoryReachabilityProbeTimer:(bool)arg1;
- (void)cancelPairingWithAccessory:(HMDUnpairedHAPAccessory *)arg1 error:(NSError *)arg2;
- (void)cancelPairingWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1 error:(NSError *)arg2;
- (HMMTRAccessoryServerBrowser *)chipAccessoryServerBrowser;
- (void)currentlyFoundHAPAccessoryServerWithIdentifier:(void *)arg1 linkType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPAccessoryServer *, void*
- (void)deregisterPairedAccessory:(NSString *)arg1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDetail:(HMSetupAccessoryDescription *)arg1 consent:(bool)arg2;
- (void)discoverAccessories:(HAPAccessoryServer *)arg1;
- (void)discoverAccessoryServer:(void *)arg1 linkType:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSSet *)discoveredAccessoryServers;
- (NSString *)dumpBrowsingConnections;
- (NSString *)dumpRegisteredPairedAccessories;
- (NSDictionary *)dumpUnassociatedAccessories;
- (void)endActiveAssertion:(id <NSObject>)arg1;
- (void)evaluateAccessoryDiscoveryState;
- (void)handleNewlyPairedAccessory:(NSString *)arg1 linkType:(long long)arg2;
- (void)handleSetupCodeAvailable:(HMDUnpairedHAPAccessory *)arg1;
- (bool)hasActiveWACPairing;
- (bool)isBrowsingAllowed;
- (bool)isDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (HMDMediaBrowser *)mediaBrowser;
- (void)pairAccessory:(void *)arg1 configuration:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 13: HMDUnpairedHAPAccessory *, HMDUnpairedHAPAccessoryConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPAccessoryServer *, NSUUID *, long long, bool, bool, NSError *, void*
- (void)pairAccessoryWithDescription:(void *)arg1 configuration:(void *)arg2 progressHandler:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 20: HMSetupAccessoryDescription *, HMDUnpairedHAPAccessoryConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, HMDAddAccessoryProgressState *, void*, id /* block */, void*, void, id /* block */, HAPAccessoryServer *, NSUUID *, long long, bool, bool, NSError *, void*
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(void *)arg1 forceScan:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)registerPairedAccessory:(NSString *)arg1 transports:(unsigned long long)arg2 setupHash:(NSData *)arg3 delegate:(id <HMDAccessoryBrowserDelegate>)arg4;
- (void)registerProgressHandler:(void *)arg1 unpairedAccessoryUUID:(void *)arg2; // needs 2 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, HMDAddAccessoryProgressState *, void*, NSUUID *
- (void)removePairingInformationForAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)removeUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1;
- (void)removeUnassociatedAccessoryWithIdentifier:(NSString *)arg1;
- (void)reprovisionAccessoryWithIdentifier:(void *)arg1 wiFiPSK:(void *)arg2 countryCode:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetConfiguration;
- (void)restartBrowsers;
- (void)resurrectAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)setBrowseableLinkTypes:(NSArray *)arg1;
- (void)setQOS:(long long)arg1;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)startDiscoveringPairedAccessories;
- (void)startDiscoveringPairedAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringAccessories;
- (void)stopDiscoveringAccessoriesWithLinkType:(long long)arg1;
- (void)stopDiscoveringForUnpairedAccessoriesWithLinkType:(long long)arg1;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(NSArray *)arg1;
- (void)tombstoneAccessoryServer:(HAPAccessoryServer *)arg1;
- (NSArray *)unassociatedAccessories;
- (HMDUnpairedHAPAccessory *)unpairedAccessoryWithUUID:(NSUUID *)arg1;
- (HMDUnpairedHAPAccessory *)unpairedHAPAccessoryWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1;
- (void)updatePairingWithProgress:(long long)arg1 accessoryServer:(HAPAccessoryServer *)arg2;

@end
