
@protocol HKFitnessMachineConnectionServerInterface <NSObject>

@required

- (void)remote_endFitnessMachineConnection;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1;
- (void)remote_markClientReady;
- (void)remote_registerClient:(id <HKFitnessMachineConnectionClientInterface>)arg1;
- (void)remote_simulateDisconnect;

@end
