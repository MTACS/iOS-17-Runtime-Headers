
@interface SBMedusaHostedKeyboardWindowLevelAssertion : NSObject <BSInvalidatable> {
    id /* block */  _invalidationHandler;
    unsigned long long  _priority;
    double  _windowLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double windowLevel;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMedusaHostedKeyboardWindow:(id)arg1 priority:(unsigned long long)arg2 windowLevel:(double)arg3;
- (void)invalidate;
- (unsigned long long)priority;
- (double)windowLevel;

@end
