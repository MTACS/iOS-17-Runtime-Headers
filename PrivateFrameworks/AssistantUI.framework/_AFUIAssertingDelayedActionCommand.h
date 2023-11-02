
@interface _AFUIAssertingDelayedActionCommand : NSObject {
    BKSProcessAssertion * _assertion;
    SAUIDelayedActionCommand * _command;
}

@property (nonatomic, readonly) BKSProcessAssertion *assertion;
@property (nonatomic, readonly) SAUIDelayedActionCommand *command;

- (void).cxx_destruct;
- (id)assertion;
- (id)command;
- (id)initWithCommand:(id)arg1 assertion:(id)arg2;

@end
