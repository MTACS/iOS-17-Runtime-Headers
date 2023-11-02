
@protocol RPTTestRunnerDelegate <NSObject>

@optional

- (void)testRunner:(RPTTestRunner *)arg1 didFailRunningParameters:(id <RPTTestParameters>)arg2 withError:(NSError *)arg3;
- (void)testRunner:(RPTTestRunner *)arg1 didFinishRunningParameters:(id <RPTTestParameters>)arg2;
- (bool)testRunner:(RPTTestRunner *)arg1 isReadyForRunningParameters:(id <RPTTestParameters>)arg2;
- (bool)testRunner:(RPTTestRunner *)arg1 shouldManagePPTLifetimeEvent:(long long)arg2 forParamaters:(id <RPTTestParameters>)arg3;

@end
