
@interface PGMemoryMomentNodesWithBlockedFeatureCache : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodesWithBlockedFeature;
    PHUserFeedbackCalculator * _userFeedbackCalculator;
}

@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodesWithBlockedFeature;

- (void).cxx_destruct;
- (id)initWithUserFeedbackCalculator:(id)arg1;
- (id)initWithUserFeedbackCalculator:(id)arg1 loggingConnection:(id)arg2;
- (id)momentNodesWithBlockedFeature;
- (id)momentNodesWithBlockedFeatureInGraph:(id)arg1 progressReporter:(id)arg2;
- (void)prefetchMomentNodesWithBlockedFeatureIfNeededInGraph:(id)arg1 progressReporter:(id)arg2;

@end
