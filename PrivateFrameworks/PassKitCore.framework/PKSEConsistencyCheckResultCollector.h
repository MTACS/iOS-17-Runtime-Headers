
@interface PKSEConsistencyCheckResultCollector : NSObject {
    bool  _addCleanupActionsToResultsSummary;
    long long  _cleanupActions;
    NSMutableArray * _requestedActions;
    NSMutableDictionary * _resultSummary;
    bool  _sendCleanupReasons;
}

@property (nonatomic) bool addCleanupActionsToResultsSummary;
@property (nonatomic, readonly) long long cleanupActions;
@property (nonatomic, readonly) NSArray *requestedActions;
@property (nonatomic, readonly) NSDictionary *resultsSummary;

- (void).cxx_destruct;
- (void)addCleanupActions:(long long)arg1;
- (void)addCleanupActions:(long long)arg1 cleanupReason:(id)arg2 forDeviceCredential:(id)arg3 passCredential:(id)arg4;
- (bool)addCleanupActionsToResultsSummary;
- (long long)cleanupActions;
- (id)init;
- (id)requestedActions;
- (id)resultsSummary;
- (void)setAddCleanupActionsToResultsSummary:(bool)arg1;

@end
