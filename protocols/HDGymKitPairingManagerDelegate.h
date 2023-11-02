
@protocol HDGymKitPairingManagerDelegate

@required

- (void)pairingManager:(HDGymKitPairingManager *)arg1 didChangeNFCEnabledState:(bool)arg2;
- (void)pairingManager:(HDGymKitPairingManager *)arg1 discoveredHealthService:(HKHealthService *)arg2 machineType:(unsigned long long)arg3;
- (void)pairingManager:(HDGymKitPairingManager *)arg1 failedPairingWithError:(NSError *)arg2;
- (void)pairingManager:(HDGymKitPairingManager *)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)pairingManagerDidBeginPairing:(HDGymKitPairingManager *)arg1;
- (void)pairingManagerReadyToConnect:(HDGymKitPairingManager *)arg1;
- (void)pairingManagerReceivedActivityTypeAndPermission:(HDGymKitPairingManager *)arg1;
- (HDHealthServiceOOBInfo *)pairingManagerRequestsOOBData:(HDGymKitPairingManager *)arg1 error:(id*)arg2;
- (void)pairingManagerUpdatedMachineInformation:(HDGymKitPairingManager *)arg1;
- (void)pairingManagerWillBeginPairing:(HDGymKitPairingManager *)arg1 fitnessMachineToken:(HDFitnessMachineSession *)arg2;

@end
