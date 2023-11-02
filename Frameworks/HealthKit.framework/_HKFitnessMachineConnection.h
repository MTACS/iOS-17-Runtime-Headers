
@interface _HKFitnessMachineConnection : NSObject <HKFitnessMachineConnectionClientInterface, _HKXPCExportable> {
    unsigned long long  _connectionState;
    NSUUID * _currentSessionUUID;
    <_HKFitnessMachineConnectionDelegate> * _delegate;
    HKDevice * _deviceForFinalWorkout;
    _HKFitnessMachine * _fitnessMachine;
    NSLock * _lock;
    unsigned long long  _machineState;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (nonatomic, readonly) unsigned long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HKFitnessMachineConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *deviceForFinalWorkout;
@property (readonly, copy) _HKFitnessMachine *fitnessMachine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long machineState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_clientQueue_deliverFailedWithError:(id)arg1;
- (void)_connectionInterruptedWithError:(id)arg1;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)_init;
- (void)_registerClient;
- (void)_simulateDisconnect;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4;
- (void)clientRemote_deliverDetectedNFC:(id)arg1;
- (void)clientRemote_deliverFailedWithError:(id)arg1;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4;
- (void)clientRemote_deliverMachineInformationUpdated:(id)arg1;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (unsigned long long)connectionState;
- (id)currentSessionConfiguration;
- (id)delegate;
- (id)description;
- (id)deviceForFinalWorkout;
- (void)end;
- (void)endWithFitnessMachineSessionUUID:(id)arg1;
- (id)exportedInterface;
- (id)fitnessMachine;
- (unsigned long long)hash;
- (id)initWithHealthStore:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machineState;
- (void)markClientReady;
- (id)remoteInterface;
- (void)setDelegate:(id)arg1;
- (id)uuid;

@end
