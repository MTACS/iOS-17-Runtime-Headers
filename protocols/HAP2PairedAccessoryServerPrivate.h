
@protocol HAP2PairedAccessoryServerPrivate <HAP2AccessoryServerPrivate, HAP2PairedAccessoryServer>

@required

- (void)becomeUnpairedWithAccessoryServer:(id <HAP2UnpairedAccessoryServerPrivate>)arg1;
- (void)clearAccessories;
- (<HAP2Cancelable> *)disableNotificationsForCharacteristics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)enableNotificationsForCharacteristics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handleEvents:(NSArray *)arg1;
- (void)handleLostDiscoveryAdvertisement;
- (void)handleLostDiscoveryAdvertisementWithWillSleep:(bool)arg1;
- (void)handleReestablishedSession;
- (void)handleUpdatedCharacteristicValues:(NSArray *)arg1;
- (void)mergeWithNewlyDiscoveredPairedAccessoryServer:(id <HAP2PairedAccessoryServerPrivate>)arg1;
- (void)pollAccessory;
- (<HAP2Cancelable> *)readValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)verifyConnection;
- (<HAP2Cancelable> *)writeValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
