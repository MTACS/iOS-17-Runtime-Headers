
@protocol SNTestRunFactory <NSObject>

@required

- (SNTestRun *)extendedLaunchTestRun;
- (SNTestRun *)testRunForTestName:(NSString *)arg1;

@end
