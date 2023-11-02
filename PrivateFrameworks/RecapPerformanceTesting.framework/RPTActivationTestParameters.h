
@interface RPTActivationTestParameters : NSObject <RPTTestParameters> {
    id /* block */  _completionHandler;
    NSString * _testName;
    UIWindow * _window;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic, retain) UIWindow *window;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)initWithTestName:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareWithComposer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setTestName:(id)arg1;
- (void)setWindow:(id)arg1;
- (id)testName;
- (id)window;

@end
