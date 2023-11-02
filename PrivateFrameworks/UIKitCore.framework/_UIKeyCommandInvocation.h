
@interface _UIKeyCommandInvocation : NSObject {
    UIKeyCommand * _keyCommand;
    id  _target;
    UIPhysicalKeyboardEvent * _triggeringEvent;
}

@property (nonatomic, readonly) UIKeyCommand *keyCommand;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) UIPhysicalKeyboardEvent *triggeringEvent;

- (void).cxx_destruct;
- (id)initWithKeyCommand:(id)arg1 triggeringEvent:(id)arg2 target:(id)arg3;
- (id)keyCommand;
- (id)target;
- (id)triggeringEvent;

@end
