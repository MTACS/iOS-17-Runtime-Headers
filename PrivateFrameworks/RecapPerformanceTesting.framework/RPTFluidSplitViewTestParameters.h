
@interface RPTFluidSplitViewTestParameters : NSObject <RPTTestParameters, _RPTCoordinateSpaces> {
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    UIViewController * _primaryController;
    UISplitViewController * _splitViewController;
    UIViewController * _supplementalController;
    NSString * _testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ composerBlock;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (id)initWithTestName:(id)arg1 splitViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)prepareWithComposer:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
