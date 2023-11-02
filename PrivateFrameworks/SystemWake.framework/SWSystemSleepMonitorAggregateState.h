
@interface SWSystemSleepMonitorAggregateState : NSObject {
    unsigned long long  _phase;
    unsigned long long  _phaseTimestamp;
    unsigned long long  _powerManagementPhase;
    unsigned long long  _powerManagementPhaseTimestamp;
    unsigned long long  _sleepMonitorState;
    unsigned long long  _sleepMonitorStateTimestamp;
    unsigned long long  _state;
    unsigned long long  _stateTimestamp;
}

@property (readonly) unsigned long long powerManagementPhase;
@property (readonly) unsigned long long powerManagementPhaseTimestamp;
@property (readonly) unsigned long long sleepMonitorState;
@property (readonly) unsigned long long sleepMonitorStateTimestamp;

- (id)description;
- (id)initWithSleepMonitorState:(unsigned long long)arg1 stateTimestamp:(unsigned long long)arg2 powerManagementPhase:(unsigned long long)arg3 phaseTimestamp:(unsigned long long)arg4;
- (unsigned long long)powerManagementPhase;
- (unsigned long long)powerManagementPhaseTimestamp;
- (unsigned long long)sleepMonitorState;
- (unsigned long long)sleepMonitorStateTimestamp;

@end
