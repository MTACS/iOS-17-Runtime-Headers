
@interface HDFitnessMachineManager : NSObject <HDFitnessMachineStateTimersDelegate, HDGymKitPairingManagerDelegate> {
    HDFitnessMachineAnalyticsCollector * _analyticsCollector;
    NSMutableArray * _characteristicDataBuffer;
    HDFitnessMachineDataCollector * _collector;
    NSMutableArray * _connections;
    HDFitnessMachineDataProducer * _fitnessMachineDataProducer;
    HDFitnessMachineSession * _fitnessMachineSession;
    HKSynchronousObserverSet * _fitnessMachineSessionObservers;
    HDFitnessMachineStateTimers * _fitnessMachineStateTimers;
    HDGymKitPairingManager * _pairingManager;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resetInProgress;
    HDHealthServiceManager * _serviceManager;
    bool  _shouldReconnect;
}

@property (nonatomic, readonly) <HDFitnessMachineConnectionInitiatorProtocol> *connectionInitiatorServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDFitnessMachineDataProducer *fitnessMachineDataProducer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *machinePreferredUntilDate;
@property (nonatomic, readonly) <HDMetricsCollector> *metricsCollector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleBeginPairing:(id)arg1;
- (void)_queue_handleReceivedCharacteristic:(id)arg1 device:(id)arg2 error:(id)arg3;
- (void)_queue_registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)_setQueue:(id)arg1;
- (void)addFitnessMachineSessionObserver:(id)arg1;
- (void)clientInvalidatedWithConnectionUUID:(id)arg1;
- (id)connectionInitiatorServer;
- (id)currentSessionRecoveryConfiguration;
- (void)dealloc;
- (void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)endFitnessMachineConnectionWithUUID:(id)arg1;
- (void)endFitnessMachineSessionWithUUID:(id)arg1;
- (void)finishSessionWithConfiguration:(id)arg1;
- (id)fitnessMachineDataProducer;
- (unsigned long long)fitnessMachineTypeForSessionUUID:(id)arg1;
- (void)hktest_setMachinePreferredUntilDate:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)machinePreferredUntilDate;
- (void)markClientReadyWithConnectionUUID:(id)arg1;
- (id)metricsCollector;
- (void)pairingManager:(id)arg1 didChangeNFCEnabledState:(bool)arg2;
- (void)pairingManager:(id)arg1 discoveredHealthService:(id)arg2 machineType:(unsigned long long)arg3;
- (void)pairingManager:(id)arg1 failedPairingWithError:(id)arg2;
- (void)pairingManager:(id)arg1 updatedConnectionStateFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)pairingManagerDidBeginPairing:(id)arg1;
- (void)pairingManagerReadyToConnect:(id)arg1;
- (void)pairingManagerReceivedActivityTypeAndPermission:(id)arg1;
- (id)pairingManagerRequestsOOBData:(id)arg1 error:(id*)arg2;
- (void)pairingManagerUpdatedMachineInformation:(id)arg1;
- (void)pairingManagerWillBeginPairing:(id)arg1 fitnessMachineToken:(id)arg2;
- (void)recoverSessionWithConfiguration:(id)arg1;
- (void)registerClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)removeFitnessMachineSessionObserver:(id)arg1;
- (void)simulateDisconnect;
- (void)stateTimersDisconnectTimeout:(id)arg1;
- (void)stateTimersMfaTimeout:(id)arg1;
- (void)stateTimersPauseTimeout:(id)arg1;
- (void)stateTimersRetryConnectionTimeout:(id)arg1;
- (void)stateTimersWaitForMachineStartTimeout:(id)arg1;
- (id)unitTest_currentFitnessMachineSession;
- (void)unitTest_fakeMachineDiscoveryForType:(unsigned long long)arg1;
- (void)unitTest_fakeSession:(id)arg1;
- (void)unitTest_receiveFakeCharacteristicUpdate:(id)arg1;
- (void)unitTest_tearDownFakeSession;

@end
