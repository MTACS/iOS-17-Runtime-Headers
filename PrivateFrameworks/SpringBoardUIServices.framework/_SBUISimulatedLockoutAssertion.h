
@interface _SBUISimulatedLockoutAssertion : BSSimpleAssertion <BSDescriptionProviding> {
    unsigned long long  _lockoutState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lockoutState;
@property (readonly) Class superclass;

- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 queue:(id)arg3 invalidationBlock:(id /* block */)arg4;
- (id)initWithLockoutState:(unsigned long long)arg1 reason:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (unsigned long long)lockoutState;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
