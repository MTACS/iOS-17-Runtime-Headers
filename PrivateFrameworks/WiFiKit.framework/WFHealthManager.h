
@interface WFHealthManager : NSObject {
    long long  _completedVelocityTestTimes;
    NSSet * _currentNetworkIssues;
    WFDiagnosticsManager * _diagnosticsManager;
    NSObject<OS_dispatch_queue> * _diagnosticsQueue;
    NWPathEvaluator * _evaluator;
    bool  _failNoInternetDiagnosticsTests;
    NSArray * _failedTestsIDs;
    WFInterface * _interface;
    bool  _isChinaDevice;
    CWFScanResult * _network;
    bool  _shouldFileNewMetrics;
}

@property (nonatomic) long long completedVelocityTestTimes;
@property (nonatomic, readonly) bool currentNetworkHasNoInternetConnection;
@property (nonatomic, retain) NSSet *currentNetworkIssues;
@property (nonatomic, retain) WFDiagnosticsManager *diagnosticsManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *diagnosticsQueue;
@property (nonatomic, retain) NWPathEvaluator *evaluator;
@property (nonatomic) bool failNoInternetDiagnosticsTests;
@property (nonatomic, retain) NSArray *failedTestsIDs;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic) bool isChinaDevice;
@property (nonatomic, retain) CWFScanResult *network;
@property (nonatomic) bool shouldFileNewMetrics;

- (void).cxx_destruct;
- (void)_updateCurrentNetworkIssues;
- (long long)completedVelocityTestTimes;
- (void)currentNetworkDidChange:(id)arg1;
- (bool)currentNetworkHasNoInternetConnection;
- (id)currentNetworkIssues;
- (void)dealloc;
- (id)diagnosticsManager;
- (id)diagnosticsQueue;
- (id)evaluator;
- (bool)failNoInternetDiagnosticsTests;
- (id)failedTestsIDs;
- (void)forceUpdateNetworkIssues;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (bool)isChinaDevice;
- (void)linkQualityDidChange:(id)arg1;
- (id)network;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)runNoInternetDiagnostics;
- (void)runNoInternetDiagnosticsAfter:(long long)arg1;
- (void)setCompletedVelocityTestTimes:(long long)arg1;
- (void)setCurrentNetworkIssues:(id)arg1;
- (void)setDiagnosticsManager:(id)arg1;
- (void)setDiagnosticsQueue:(id)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setFailNoInternetDiagnosticsTests:(bool)arg1;
- (void)setFailedTestsIDs:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setIsChinaDevice:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setShouldFileNewMetrics:(bool)arg1;
- (bool)shouldFileNewMetrics;

@end
