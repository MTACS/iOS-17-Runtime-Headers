
@protocol HAP2UnpairedAccessoryServerPrivate <HAP2AccessoryServerPrivate, HAP2UnpairedAccessoryServer>

@required

- (void)becomePairedWithAccessoryServer:(id <HAP2PairedAccessoryServerPrivate>)arg1;
- (void)mergeWithNewlyDiscoveredUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServerPrivate>)arg1;
- (<HAP2AccessoryServerPairingDriver> *)pairingDriver;

@end
