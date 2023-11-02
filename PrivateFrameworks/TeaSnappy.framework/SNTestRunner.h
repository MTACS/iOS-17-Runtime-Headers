
@interface SNTestRunner : NSObject <SNTestRunner> {
    UIApplication * _application;
    <SNTestCoordinating> * _testCoordinator;
    SNTestStore * _testStore;
}

@property (nonatomic, readonly) UIApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SNTestCoordinating> *testCoordinator;
@property (nonatomic, readonly) SNTestStore *testStore;

- (void).cxx_destruct;
- (id)application;
- (id)initWithApplication:(id)arg1 testCoordinator:(id)arg2 testStore:(id)arg3;
- (bool)runExtendedLaunchTest;
- (bool)runTest:(id)arg1 options:(id)arg2;
- (bool)runTest:(id)arg1 options:(id)arg2 fallingBackWith:(id /* block */)arg3;
- (bool)runTestRun:(id)arg1 testName:(id)arg2 options:(id)arg3 fallingBackWith:(id /* block */)arg4;
- (id)testCoordinator;
- (id)testStore;

@end
