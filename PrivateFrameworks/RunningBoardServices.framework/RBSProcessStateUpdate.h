
@interface RBSProcessStateUpdate : NSObject {
    RBSProcessExitEvent * _exitEvent;
    RBSProcessState * _previousState;
    RBSProcessHandle * _process;
    RBSProcessState * _state;
}

@property (nonatomic, readonly) RBSProcessExitEvent *exitEvent;
@property (nonatomic, readonly) RBSProcessState *previousState;
@property (nonatomic, readonly) RBSProcessHandle *process;
@property (nonatomic, readonly) RBSProcessState *state;

+ (id)updateWithState:(id)arg1 previousState:(id)arg2 exitEvent:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)exitEvent;
- (id)previousState;
- (id)process;
- (id)state;

@end
