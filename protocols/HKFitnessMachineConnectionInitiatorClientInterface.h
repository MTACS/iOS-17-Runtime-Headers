
@protocol HKFitnessMachineConnectionInitiatorClientInterface <NSObject>

@required

- (void)clientRemote_encounteredError:(NSError *)arg1;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_updatedFitnessMachine:(_HKFitnessMachine *)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(NSUUID *)arg2;
- (void)clientRemote_workoutAppReady;

@end
