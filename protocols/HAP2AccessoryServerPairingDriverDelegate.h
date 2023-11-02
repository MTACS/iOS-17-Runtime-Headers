
@protocol HAP2AccessoryServerPairingDriverDelegate <NSObject>

@required

- (void)pairingDriver:(void *)arg1 authenticateSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2AccessoryServerPairingDriver> *, NSUUID *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)pairingDriver:(void *)arg1 confirmSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2AccessoryServerPairingDriver> *, NSUUID *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pairingDriver:(id <HAP2AccessoryServerPairingDriver>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)pairingDriver:(id <HAP2AccessoryServerPairingDriver>)arg1 didFinishAuthWithError:(NSError *)arg2;
- (void)pairingDriver:(void *)arg1 didRejectSetupCodeForAccessory:(void *)arg2 backoffInterval:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <HAP2AccessoryServerPairingDriver> *, <HAP2UnpairedAccessoryServer> *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pairingDriver:(void *)arg1 didRequestLocalPairingIdentityWithCompletion:(void *)arg2; // needs 2 arg types, found 8: <HAP2AccessoryServerPairingDriver> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPPairingIdentity *, NSError *, void*
- (void)pairingDriver:(void *)arg1 didSaveRemotePairingIdentity:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HAP2AccessoryServerPairingDriver> *, HAPPairingIdentity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pairingDriver:(void *)arg1 doesRequirePermission:(void *)arg2 accessory:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2AccessoryServerPairingDriver> *, unsigned long long, <HAP2UnpairedAccessoryServer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pairingDriver:(void *)arg1 doesRequireSetupCodeForAccessory:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <HAP2AccessoryServerPairingDriver> *, <HAP2UnpairedAccessoryServer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pairingDriver:(void *)arg1 validatePairingCert:(void *)arg2 model:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2AccessoryServerPairingDriver> *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)pairingDriver:(void *)arg1 validateSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 model:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <HAP2AccessoryServerPairingDriver> *, NSUUID *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
