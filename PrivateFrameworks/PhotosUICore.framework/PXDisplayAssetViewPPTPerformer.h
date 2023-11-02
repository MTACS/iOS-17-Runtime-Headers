
@interface PXDisplayAssetViewPPTPerformer : NSObject {
    NSObject<PXAnonymousView> * _containerView;
    <PXPPTDelegate> * _delegate;
    long long  _testIterations;
    NSString * _testName;
    NSDictionary * _testOptions;
}

@property (nonatomic, readonly) NSObject<PXAnonymousView> *containerView;
@property (nonatomic, readonly) <PXPPTDelegate> *delegate;
@property (nonatomic, readonly) long long testIterations;
@property (nonatomic, readonly) NSString *testName;
@property (nonatomic, readonly) NSDictionary *testOptions;

- (void).cxx_destruct;
- (void)_createAssetViewWithConfiguration:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_runScrubbingSubtestWithAssetView:(id)arg1 configuration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_runSubtestWithName:(id)arg1 metrics:(id)arg2 configuration:(id)arg3 usingBlock:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)_runTestUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)_tearDownAssetView:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)containerView;
- (id)delegate;
- (id)init;
- (id)initWithContainerView:(id)arg1 delegate:(id)arg2 testOptions:(id)arg3;
- (void)runLocalizedTitleTestWithConfigurations:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runScrubbingTestWithConfigurations:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)testIterations;
- (id)testName;
- (id)testOptions;

@end
