
@interface ATXCandidateRelevanceModelDataPoint : NSObject {
    ATXCandidate * _candidate;
    ATXPredictionContext * _context;
    NSUUID * _contextDefinedSessionId;
    bool  _engaged;
}

@property (nonatomic, retain) ATXCandidate *candidate;
@property (nonatomic, readonly) ATXPredictionContext *context;
@property (nonatomic, readonly) NSUUID *contextDefinedSessionId;
@property (nonatomic) bool engaged;

- (void).cxx_destruct;
- (id)candidate;
- (id)context;
- (id)contextDefinedSessionId;
- (bool)engaged;
- (id)initWithContext:(id)arg1 candidate:(id)arg2 engaged:(bool)arg3 contextDefinedSessionId:(id)arg4;
- (void)setCandidate:(id)arg1;
- (void)setEngaged:(bool)arg1;

@end
