
@protocol HAP2PairedAccessoryServer <HAP2AccessoryServer>

@required

- (NSArray *)accessories;
- (<HAP2Cancelable> *)addPairing:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HAPPairingIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)closeSession;
- (<HAP2Cancelable> *)getPairingsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handleNetworkChanged;
- (bool)isConfirming;
- (bool)isPaired;
- (<HAP2Accessory> *)primaryAccessory;
- (NSString *)productData;
- (<HAP2Cancelable> *)removePairing:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HAPPairingIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)startConfirming;
- (void)stopConfirming;
- (<HAP2Cancelable> *)unpairWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HAP2Cancelable> *)updateAccessoriesWithReason:(NSString *)arg1;

@end
