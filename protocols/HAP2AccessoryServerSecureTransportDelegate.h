
@protocol HAP2AccessoryServerSecureTransportDelegate <NSObject>

@required

- (void)secureTransport:(id <HAP2AccessoryServerSecureTransport>)arg1 didChangeState:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)secureTransport:(id <HAP2AccessoryServerSecureTransport>)arg1 didReceiveEvent:(NSData *)arg2;
- (void)secureTransport:(void *)arg1 needsLocalPairingIdentityWithCompletion:(void *)arg2; // needs 2 arg types, found 8: <HAP2AccessoryServerSecureTransport> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPPairingIdentity *, NSError *, void*
- (void)secureTransport:(void *)arg1 needsRemotePairingIdentityForDeviceID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <HAP2AccessoryServerSecureTransport> *, HAPDeviceID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HAPPairingIdentity *, NSError *, void*

@end
