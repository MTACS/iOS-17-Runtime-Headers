
@interface HDSPSleepWidgetDisabledState : HDSPSleepWidgetStateMachineState

- (bool)reloadsWidgetOnModelChange;
- (bool)reloadsWidgetOnTimeChange;
- (id)stateName;
- (long long)widgetState;
- (bool)widgetStateHasTimeComponent;

@end
