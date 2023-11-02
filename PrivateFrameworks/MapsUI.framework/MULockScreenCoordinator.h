
@interface MULockScreenCoordinator : NSObject {
    id /* block */  _passcodeProvider;
}

- (void).cxx_destruct;
- (id)initWithPasscodeProvider:(id /* block */)arg1;
- (void)performActionIfSuccessfullyAuthenticated:(id /* block */)arg1;

@end
