
@interface SBSLockScreenRemoteContentAssertion : SBSLockScreenContentAssertion

+ (id)acquireRemoteContentAssertionWithDefinition:(id)arg1 errorHandler:(id /* block */)arg2;
+ (id)acquireWakeToRemoteAlertAssertionWithRemoteDefinition:(id)arg1 errorHandler:(id /* block */)arg2;

- (bool)_supportsReacquisition;

@end
