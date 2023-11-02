
@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    SBFloatingDockController * _floatingDockController;
    double  _level;
    unsigned long long  _priority;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBFloatingDockController *floatingDockController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)floatingDockController;
- (id)initWithFloatingDockController:(id)arg1 priority:(unsigned long long)arg2 level:(double)arg3 reason:(id)arg4;
- (void)invalidate;
- (double)level;
- (unsigned long long)priority;
- (id)reason;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
