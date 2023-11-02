
@interface BLSHEnvironmentPerformEventData : NSObject {
    long long  _eventNewBacklightState;
    long long  _eventPreviousBacklightState;
    unsigned long long  _startedTime;
    long long  _stateMachineOldBacklightState;
}

@property (nonatomic, readonly) long long eventNewBacklightState;
@property (nonatomic, readonly) long long eventPreviousBacklightState;
@property (nonatomic, readonly) unsigned long long startedTime;
@property (nonatomic, readonly) long long stateMachineOldBacklightState;

- (id)description;
- (long long)eventNewBacklightState;
- (long long)eventPreviousBacklightState;
- (id)initWithStateMachineOldBacklightState:(long long)arg1 eventPreviousBacklightState:(long long)arg2 eventNewBacklightState:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)startedTime;
- (long long)stateMachineOldBacklightState;

@end
