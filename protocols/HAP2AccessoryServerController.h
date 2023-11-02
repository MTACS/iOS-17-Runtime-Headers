
@protocol HAP2AccessoryServerController <NSObject>

@required

- (<HAP2Cancelable> *)addPairing:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HAPPairingIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HAP2Cancelable> *)disableNotificationsForCharacteristics:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)enableNotificationsForCharacteristics:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)handleUpdatedMetadataWithOldMetadata:(id <HAP2AccessoryServerMetadata>)arg1;
- (<HAP2Cancelable> *)listPairingsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)readAttributeDatabaseWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)readValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (<HAP2Cancelable> *)removePairing:(void *)arg1 cleanupLocalData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HAPPairingIdentity *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HAP2Cancelable> *)unpairedIdentifyWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateMaxRequestTimeout:(double)arg1;
- (<HAP2Cancelable> *)writeValuesForCharacteristics:(void *)arg1 timeout:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
