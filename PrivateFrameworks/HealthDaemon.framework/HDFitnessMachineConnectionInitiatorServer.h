
@interface HDFitnessMachineConnectionInitiatorServer : HDStandardTaskServer <HKFitnessMachineConnectionInitiatorServerInterface> {
    <HDFitnessMachineConnectionInitiatorProtocol> * _connectionInitiatorServer;
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
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
- (void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
- (void)remote_registerConnectionInitiatorClient:(id)arg1;
- (void)remote_simulateAccept;
- (void)remote_simulateTapWithFitnessMachineType:(unsigned long long)arg1;

@end
