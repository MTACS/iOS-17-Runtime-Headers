
@interface _RPTTestRunnerResultsDelegate : NSObject <RPTTestRunnerDelegate> {
    id /* block */  resultsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)resultsHandler;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)testRunner:(id)arg1 didFailRunningParameters:(id)arg2 withError:(id)arg3;
- (void)testRunner:(id)arg1 didFinishRunningParameters:(id)arg2;
- (bool)testRunner:(id)arg1 shouldManagePPTLifetimeEvent:(long long)arg2 forParamaters:(id)arg3;

@end
