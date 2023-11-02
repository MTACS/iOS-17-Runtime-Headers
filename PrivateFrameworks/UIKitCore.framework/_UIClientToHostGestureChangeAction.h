
@interface _UIClientToHostGestureChangeAction : BSAction

@property (nonatomic, readonly) NSString *hostGestureIdentifier;
@property (nonatomic, readonly) long long state;

- (long long)UIActionType;
- (void)dispatchToHostGestureRecognizer;
- (id)hostGestureIdentifier;
- (id)initWithHostGestureIdentifier:(id)arg1 changeToState:(long long)arg2;
- (long long)state;

@end
