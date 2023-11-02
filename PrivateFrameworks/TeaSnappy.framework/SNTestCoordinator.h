
@interface SNTestCoordinator : NSObject <SNTestCoordinating> {
    UIApplication * _application;
}

@property (nonatomic, readonly) UIApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *launchTestName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)application;
- (unsigned long long)axisForDirection:(unsigned long long)arg1;
- (void)failedTestWithTestName:(id)arg1 failureMessage:(id)arg2;
- (void)finishedTestWithTestName:(id)arg1 waitForCommit:(bool)arg2;
- (id)initWithApplication:(id)arg1;
- (id)launchTestName;
- (long long)lengthForNumberOfScreens:(long long)arg1 direction:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (void)recapScrollTestWithTestName:(id)arg1 scrollView:(id)arg2;
- (bool)requiresRotationForOrientation:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1 beforeRotation:(id /* block */)arg2 afterRotation:(id /* block */)arg3;
- (void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 direction:(unsigned long long)arg5;
- (void)scrollTestWithTestName:(id)arg1 scrollView:(id)arg2 iterations:(long long)arg3 offset:(long long)arg4 numberOfScreens:(long long)arg5 direction:(unsigned long long)arg6;
- (void)startedTestWithTestName:(id)arg1;

@end
