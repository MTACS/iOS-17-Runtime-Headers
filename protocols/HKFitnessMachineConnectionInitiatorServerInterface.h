
@protocol HKFitnessMachineConnectionInitiatorServerInterface <NSObject>

@required

- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 activityType:(unsigned long long)arg2;
- (void)remote_registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1;
- (void)remote_simulateAccept;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;

@end
