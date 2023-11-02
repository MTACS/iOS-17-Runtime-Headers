
@interface HDGymKitPairingManager : NSObject <HDCurrentWorkoutObserver, HDFitnessMachineConnectionInitiatorProtocol, HDFitnessMachineStateTimersDelegate, HDGymKitSettingsDelegate, HDNearFieldInterfaceDelegate, HDWatchAppStateMonitorDelegate> {
    unsigned long long  _bluetoothState;
    NSMutableDictionary * _connectionInitiatorClients;
    unsigned long long  _currentDiscovery;
    <HDGymKitPairingManagerDelegate> * _delegate;
    bool  _expressModeAssertionTaken;
    HDFitnessMachineSession * _fitnessMachineSession;
    HDFitnessMachineStateTimers * _fitnessMachineStateTimers;
    HDGymKitSettings * _gymKitSettings;
    HDNearFieldInterface * _nearFieldInterface;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDFitnessMachineSimulatorSupport * _simulatorSupport;
    HDPowerAssertion * _tagReadPowerAssertion;
    HDWatchAppStateMonitor * _workoutAppStateMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDGymKitPairingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_newNearFieldInterface;
- (id)_newWatchAppStateMonitor;
- (void)dealloc;
- (id)delegate;
- (void)deliverError:(id)arg1;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)gymKitSettings:(id)arg1 didChangeFromNFCPermission:(unsigned long long)arg2 toNFCPermission:(unsigned long long)arg3;
- (void)handleBLEConnectionCompletedSuccessfully:(bool)arg1;
- (id)initWithProfile:(id)arg1;
- (void)monitorDidDetectAppActivate:(id)arg1;
- (void)monitorDidDetectAppDeactivate:(id)arg1;
- (void)nearFieldInterfaceDidEnterField:(id)arg1;
- (void)nearFieldInterfaceDidReadTag:(id)arg1;
- (void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(id)arg1;
- (void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(id)arg1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
- (void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)simulateAccept;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)stateTimersFieldDetectTimeout:(id)arg1;
- (void)stateTimersTagReadTimeout:(id)arg1;
- (void)stateTimersUserAcceptanceTimeout:(id)arg1;
- (void)updatedConnectionStateWithError:(id)arg1;
- (void)updatedFitnessMachine;
- (void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)workoutAppIsReady;
- (void)workoutManager:(id)arg1 currentWorkout:(id)arg2 didChangeToState:(long long)arg3;
- (void)workoutManager:(id)arg1 didUpdateCurrentWorkout:(id)arg2;

@end
