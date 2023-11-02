
@protocol SNTestCoordinating <NSObject>

@required

- (void)failedTestWithTestName:(NSString *)arg1 failureMessage:(NSString *)arg2;
- (void)finishedTestWithTestName:(NSString *)arg1 waitForCommit:(bool)arg2;
- (NSString *)launchTestName;
- (void)recapScrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2;
- (bool)requiresRotationForOrientation:(long long)arg1;
- (void)rotateToOrientation:(void *)arg1 beforeRotation:(void *)arg2 afterRotation:(void *)arg3; // needs 3 arg types, found 13: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)scrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
- (void)scrollTestWithTestName:(NSString *)arg1 scrollView:(UIScrollView *)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
- (void)startedTestWithTestName:(NSString *)arg1;

@end
