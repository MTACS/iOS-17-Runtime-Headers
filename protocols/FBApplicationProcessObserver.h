
@protocol FBApplicationProcessObserver <FBProcessObserver>

@optional

- (void)applicationProcessDebuggingStateDidChange:(FBApplicationProcess *)arg1;
- (void)applicationProcessDidExit:(FBApplicationProcess *)arg1 withContext:(FBProcessExitContext *)arg2;
- (void)applicationProcessDidLaunch:(FBApplicationProcess *)arg1;
- (void)applicationProcessWillLaunch:(FBApplicationProcess *)arg1;

@end
