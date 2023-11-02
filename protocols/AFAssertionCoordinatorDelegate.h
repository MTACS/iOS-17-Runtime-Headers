
@protocol AFAssertionCoordinatorDelegate <NSObject>

@required

- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didActivateAssertion:(id <AFAssertion>)arg2 isFirstAssertion:(bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didAddAssertion:(id <AFAssertion>)arg2 isFirstAssertion:(bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didDeactivateAssertion:(id <AFAssertion>)arg2 isLastAssertion:(bool)arg3;
- (void)assertionCoordinator:(AFAssertionCoordinator *)arg1 didRemoveAssertion:(id <AFAssertion>)arg2 isLastAssertion:(bool)arg3;

@end
