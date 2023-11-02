
@interface _SBUIPresentableGestureRecognizerPriorityAssertion : NSObject <SBUIPresentableGestureRecognizerPriorityAssertion> {
    id /* block */  _invalidationHandler;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)reason;

@end
