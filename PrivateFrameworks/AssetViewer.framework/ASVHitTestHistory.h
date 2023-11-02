
@interface ASVHitTestHistory : NSObject {
    unsigned long long  _decisionCapacity;
    NSMutableArray * _decisions;
    unsigned long long  _resultCapacity;
    NSMutableArray * _results;
}

@property (nonatomic, readonly) unsigned long long decisionCapacity;
@property (nonatomic, readonly) NSMutableArray *decisions;
@property (nonatomic, readonly) unsigned long long resultCapacity;
@property (nonatomic, readonly) NSMutableArray *results;

- (void).cxx_destruct;
- (void)addDecision:(id)arg1;
- (void)addResult:(id)arg1;
- (void)clearHistory;
- (unsigned long long)decisionCapacity;
- (id)decisions;
- (id)initWithResultCapacity:(unsigned long long)arg1 decisionCapacity:(unsigned long long)arg2;
- (id)recentDecisionsForCount:(unsigned long long)arg1;
- (id)recentResultsForCount:(unsigned long long)arg1;
- (void)reinitializeDecisionHistoryWithDecision:(id)arg1;
- (unsigned long long)resultCapacity;
- (id)results;

@end
