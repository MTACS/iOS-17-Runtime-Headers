
@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable> {
    <_HKFitnessMachineConnectionInitiatorDelegate> * _delegate;
    HKTaskServerProxyProvider * _proxyProvider;
    _Atomic bool  _requiresRegistration;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HKFitnessMachineConnectionInitiatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (id)UUID;
- (void)_fetchProxyWithHandler:(id /* block */)arg1;
- (void)_simulateAccept;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)clientRemote_encounteredError:(id)arg1;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_workoutAppReady;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)delegate;
- (id)exportedInterface;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
- (void)registerClientIfNeeded;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;

@end
