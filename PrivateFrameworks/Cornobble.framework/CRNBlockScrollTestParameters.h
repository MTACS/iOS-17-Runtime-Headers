
@interface CRNBlockScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters> {
    id /* block */  _completionHandler;
    id /* block */  _composerBlock;
    NSString * _testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ composerBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RCPSyntheticEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)eventStream;
- (id)initWithTestName:(id)arg1 withComposerBlock:(id /* block */)arg2;
- (id)initWithTestName:(id)arg1 withComposerBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setComposerBlock:(id /* block */)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
