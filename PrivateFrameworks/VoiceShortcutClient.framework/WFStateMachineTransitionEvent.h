
@interface WFStateMachineTransitionEvent : NSObject {
    NSString * _reason;
    <WFState> * _state;
    bool  _valid;
}

@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly) <WFState> *state;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)transitionEventWithState:(id)arg1 reason:(id)arg2 valid:(bool)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithState:(id)arg1 reason:(id)arg2 valid:(bool)arg3;
- (bool)isValid;
- (id)reason;
- (id)state;

@end
