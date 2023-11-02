
@interface RPTWaitTestParameters : NSObject <RPTTestParameters> {
    id /* block */  _completionHandler;
    NSString * _testName;
    double  _waitDuration;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic, readonly) double waitDuration;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)init;
- (id)initWithTestName:(id)arg1 wait:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithWait:(double)arg1;
- (void)prepareWithComposer:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;
- (double)waitDuration;

@end
