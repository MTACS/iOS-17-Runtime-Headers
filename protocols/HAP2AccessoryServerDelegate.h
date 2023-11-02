
@protocol HAP2AccessoryServerDelegate <NSObject>

@required

- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(NSString *)arg1;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(NSData *)arg1;
- (HAPPairingIdentity *)currentIdentity;
- (void)initializeKeyBagIfNecessary;
- (bool)onDemandConnectionsAreEnabled;
- (HAPAccessoryPairingRequest *)pairingRequest;
- (bool)shouldRetryPVDueToAuthenticationError:(NSError *)arg1;

@optional

- (void)accessoryServerConnectedWithSecureSession;
- (void)accessoryServerConnectionFailureReportWithError:(NSError *)arg1;
- (void)accessoryServerDidUpdateCategory:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerDidUpdateConnectionState:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerDidUpdateHasPairings:(id <HAP2AccessoryServer>)arg1;
- (void)accessoryServerDidUpdateName:(id <HAP2AccessoryServer>)arg1;
- (void)setSessionInfoWithNumIPsResolved:(unsigned long long)arg1 numIPsTried:(unsigned long long)arg2 numBonjourNames:(unsigned long long)arg3;

@end
