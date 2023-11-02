
@interface VIAFeedbackSubmitter : NSObject {
    PARSession * _parSession;
    <VIAnalyticsTestingDelegate> * _testingDelegate;
}

@property (nonatomic, readonly) PARSession *parSession;
@property (nonatomic) <VIAnalyticsTestingDelegate> *testingDelegate;

- (void).cxx_destruct;
- (void)didHitCacheForQueryId:(unsigned long long)arg1;
- (id)initWithPARSession:(id)arg1;
- (id)parSession;
- (void)reportFeedback:(id)arg1 queryId:(long long)arg2;
- (void)setTestingDelegate:(id)arg1;
- (id)testingDelegate;

@end
