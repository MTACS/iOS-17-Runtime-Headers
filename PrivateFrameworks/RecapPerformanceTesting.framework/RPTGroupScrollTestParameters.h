
@interface RPTGroupScrollTestParameters : NSObject <RPTBlockBasedScrollTestParameters, RPTTestParameters> {
    id /* block */  _completionHandler;
    NSArray * _parameters;
    NSString * testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic, copy) NSArray *parameters;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

+ (id)newWithTestName:(id)arg1 parameters:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)parameters;
- (void)prepareWithComposer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setParameters:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
