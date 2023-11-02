
@interface RPTInteractionTestParameters : NSObject <RPTTestParameters> {
    id /* block */  _completionHandler;
    NSArray * _delays;
    NSArray * _durations;
    NSArray * _interactions;
    NSString * _testName;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *delays;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *durations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *interactions;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

+ (id)interactionTestParametersWithTestName:(id)arg1 interaction:(id)arg2 duration:(double)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)delays;
- (id)durations;
- (id)initWithTestName:(id)arg1 interactions:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)interactions;
- (void)prepareWithComposer:(id)arg1;
- (void)setDelays:(id)arg1;
- (void)setDurations:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
