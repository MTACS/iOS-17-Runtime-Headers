
@interface PKIdleTimerAssertion : NSObject {
    <BSInvalidatable> * _idleTimerAssertion;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalidated;
    NSString * _reason;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithReason:(id)arg1;
- (void)invalidate;

@end
