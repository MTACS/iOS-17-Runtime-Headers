
@protocol HAP2UnpairedAccessoryServerPairDelegate <NSObject>

@required

- (void)accessoryServer:(void *)arg1 authenticateSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2UnpairedAccessoryServer> *, NSUUID *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)accessoryServer:(void *)arg1 confirmSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2UnpairedAccessoryServer> *, NSUUID *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 didCompleteWithError:(NSError *)arg2;
- (void)accessoryServer:(id <HAP2UnpairedAccessoryServer>)arg1 didFinishAuthWithError:(NSError *)arg2;
- (void)accessoryServer:(void *)arg1 didRejectSetupCodeWithBackoffInterval:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <HAP2UnpairedAccessoryServer> *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)accessoryServer:(void *)arg1 doesRequirePermission:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HAP2UnpairedAccessoryServer> *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)accessoryServer:(void *)arg1 doesRequireSetupCodeWithCompletion:(void *)arg2; // needs 2 arg types, found 8: <HAP2UnpairedAccessoryServer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)accessoryServer:(void *)arg1 validatePairingCert:(void *)arg2 model:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <HAP2UnpairedAccessoryServer> *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)accessoryServer:(void *)arg1 validateSoftwareAuthUUID:(void *)arg2 token:(void *)arg3 model:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <HAP2UnpairedAccessoryServer> *, NSUUID *, NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
