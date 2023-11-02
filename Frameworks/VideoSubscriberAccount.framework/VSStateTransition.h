
@interface VSStateTransition : NSObject {
    VSOptional * _nextState;
    VSOptional * _previousState;
    VSOptional * _triggeringEvent;
}

@property (nonatomic, retain) VSOptional *nextState;
@property (nonatomic, retain) VSOptional *previousState;
@property (nonatomic, retain) VSOptional *triggeringEvent;

- (void).cxx_destruct;
- (id)init;
- (id)nextState;
- (id)previousState;
- (void)setNextState:(id)arg1;
- (void)setPreviousState:(id)arg1;
- (void)setTriggeringEvent:(id)arg1;
- (id)triggeringEvent;

@end
