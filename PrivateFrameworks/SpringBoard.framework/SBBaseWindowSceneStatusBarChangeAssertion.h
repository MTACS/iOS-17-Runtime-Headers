
@interface SBBaseWindowSceneStatusBarChangeAssertion : NSObject <SBWindowSceneStatusBarAssertion> {
    SBWindowSceneStatusBarAssertionManager * _assertionManager;
    NSString * _reason;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)arg1 reason:(id)arg2;
- (id)description;
- (id)init;
- (void)invalidate;
- (id)reason;

@end
