
@protocol HAP2AccessoryServerBrowserPrivate <HAP2AccessoryServerBrowser>

@required

- (void)accessoryServerDidUpdateConnectionState:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryWithDeviceIDIsPaired:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (HAP2SerializedOperationQueue *)operationQueueForDeviceID:(HAPDeviceID *)arg1;
- (void)removePublicKeyForAccessoryWithID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retrieveLocalPairingIdentityForDeviceID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPPairingIdentity *, NSError *, void*
- (void)savePublicKey:(void *)arg1 forAccessoryWithID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSData *, HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<HAP2Storage> *)storage;

@end
