
@interface HDSPSleepWidgetStateMachineState : HKSPPersistentStateMachineState <HDSPSleepWidgetStateMachineEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool reloadsWidgetOnModelChange;
@property (nonatomic, readonly) bool reloadsWidgetOnTimeChange;
@property (nonatomic, readonly) HDSPSleepWidgetStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long widgetState;
@property (nonatomic, readonly) bool widgetStateHasTimeComponent;

- (void)didEnter;
- (bool)reloadsWidgetOnModelChange;
- (bool)reloadsWidgetOnTimeChange;
- (bool)shouldGoIntoUpcomingState;
- (void)significantTimeChangeOccurred;
- (void)sleepModeDidChange:(long long)arg1 isUserRequested:(bool)arg2;
- (void)sleepScheduleModelDidChange:(id)arg1;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1;
- (id)stateName;
- (void)updateState;
- (long long)widgetState;
- (bool)widgetStateHasTimeComponent;

@end
