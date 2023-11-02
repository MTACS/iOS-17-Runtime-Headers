
@interface AFUINetworkAvailabilityStateMachine : NSObject <RadiosPreferencesDelegate, SRUIFStateMachineDelegate> {
    <AFUINetworkAvailabilityStateMachineDelegate> * _delegate;
    RadiosPreferences * _radioPreferences;
    SRUIFStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUINetworkAvailabilityStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RadiosPreferences *radioPreferences;
@property (nonatomic, retain) SRUIFStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performTransitionForEvent:(long long)arg1;
- (void)_siriNetworkAvailabilityDidChange:(unsigned long long)arg1;
- (long long)_state;
- (id)_stateMachine;
- (void)airplaneModeChanged;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)radioPreferences;
- (void)setDelegate:(id)arg1;
- (void)setRadioPreferences:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)siriNetworkAvailabilityDidChange;
- (id)stateMachine;
- (id)stateMachine:(id)arg1 descriptionForEvent:(long long)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(long long)arg2 forEvent:(long long)arg3;

@end
