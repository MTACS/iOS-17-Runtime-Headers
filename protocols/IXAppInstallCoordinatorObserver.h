
@protocol IXAppInstallCoordinatorObserver <NSObject>

@optional

- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 canceledWithReason:(NSError *)arg2 client:(unsigned long long)arg3;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 configuredPromisePromiseDidBeginFulfillment:(unsigned long long)arg2;
- (void)coordinator:(IXAppInstallCoordinator *)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1 forAppAtURL:(NSURL *)arg2;
- (void)coordinatorDidCompleteSuccessfully:(IXAppInstallCoordinator *)arg1 forApplicationRecord:(LSApplicationRecord *)arg2;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1 atURL:(NSURL *)arg2;
- (void)coordinatorDidInstallPlaceholder:(IXAppInstallCoordinator *)arg1 forApplicationRecord:(LSApplicationRecord *)arg2;
- (void)coordinatorDidRegisterForObservation:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldBeginPostProcessing:(IXAppInstallCoordinator *)arg1 forApplicationRecord:(LSApplicationRecord *)arg2;
- (void)coordinatorShouldBeginRestoringUserData:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPause:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldPrioritize:(IXAppInstallCoordinator *)arg1;
- (void)coordinatorShouldResume:(IXAppInstallCoordinator *)arg1;
- (void)promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;

@end
