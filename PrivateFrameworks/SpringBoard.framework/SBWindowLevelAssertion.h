
@interface SBWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    id /* block */  _invalidationHandler;
    long long  _priority;
    NSString * _reason;
    double  _windowLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double windowLevel;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3 invalidationHandler:(id /* block */)arg4;
- (void)invalidate;
- (long long)priority;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (double)windowLevel;

@end
