
@interface WBSCyclerExtensionsTestSuite : NSObject <WBSCyclerOperationalTestSuite> {
    WBSCyclerIterationCounter * _iterationCounter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSCyclerIterationCounter *iterationCounter;
@property (nonatomic, readonly, copy) NSArray *operations;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)iterationCounter;
- (id)operations;
- (id)relativeProbabilitiesForOperationsWithTopLevelItem:(id)arg1;
- (void)runWithTarget:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setIterationCounter:(id)arg1;

@end
