
@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse {
    NSString * _reason;
}

@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithDelay:(double)arg1 validator:(id /* block */)arg2 reason:(id)arg3;
- (id)reason;
- (long long)type;

@end
