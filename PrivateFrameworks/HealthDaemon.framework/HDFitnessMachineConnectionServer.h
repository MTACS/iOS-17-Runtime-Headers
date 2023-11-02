
@interface HDFitnessMachineConnectionServer : HDStandardTaskServer <HKFitnessMachineConnectionServerInterface> {
    HDFitnessMachineManager * _fitnessMachineManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_endFitnessMachineConnection;
- (void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1;
- (void)remote_markClientReady;
- (void)remote_registerClient:(id)arg1;
- (void)remote_simulateDisconnect;

@end
