
@interface CRNGroupScrollTestParameters : NSObject <CRNBlockBasedScrollTestParameters, CRNScrollTestParameters> {
    id /* block */  _completionHandler;
    NSArray * _parameters;
    NSString * testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RCPSyntheticEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *parameters;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

+ (id)parametersByCombining:(id)arg1 testName:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)eventStream;
- (id)initWithTestName:(id)arg1 withParameters:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)parameters;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setParameters:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
