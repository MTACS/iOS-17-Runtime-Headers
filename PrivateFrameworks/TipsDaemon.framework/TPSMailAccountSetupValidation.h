
@interface TPSMailAccountSetupValidation : TPSTargetingValidation

- (bool)getCurrentState;
- (void)getCurrentStateWithCompletion:(id /* block */)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
