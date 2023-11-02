
@interface WBSCyclerService : NSObject <NSXPCListenerDelegate, WBSCyclerServiceProtocol> {
    NSString * _identifier;
    NSError * _lastError;
    NSDate * _lastTestEnd;
    NSDate * _lastTestStart;
    unsigned long long  _maximumIterationCount;
    WBSCyclerTestRunner * _testRunner;
    <WBSCyclerTestSuite> * _testSuite;
    Class  _testSuiteClass;
    WBSCyclerTestTargetProxyController * _testTargetProxyController;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (void)_finishedWithResult:(long long)arg1 error:(id)arg2;
- (void)_postFinishNotificationWithError:(id)arg1;
- (void)_setMaximumIterationCount:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)_setSeed:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)_setTestSuiteName:(id)arg1 reply:(id /* block */)arg2;
- (id)_startCyclingFromBeginning:(bool)arg1;
- (void)fetchLastErrorWithReply:(id /* block */)arg1;
- (void)fetchLogsWithReply:(id /* block */)arg1;
- (void)fetchStatusWithReply:(id /* block */)arg1;
- (id)identifier;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sendRequestToTestSuite:(id)arg1 reply:(id /* block */)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setTestTargetEndpoint:(id)arg1 reply:(id /* block */)arg2;
- (void)setValue:(id)arg1 forConfigurationKey:(id)arg2 reply:(id /* block */)arg3;
- (void)startCyclingFromBeginning:(bool)arg1 reply:(id /* block */)arg2;
- (void)stopCyclingWithReply:(id /* block */)arg1;

@end
