
@interface IRCandidateWrapper : NSObject {
    NSNumber * _bleRange;
    IRCandidateDO * _candidate;
    IRCandidateResult * _candidateResult;
    bool  _enableOrderOfExecutionLogging;
    NSMutableDictionary * _internalOrderOfExecution;
    long long  _nominatedClassification;
    NSString * _nominatedClassificationDesc;
    NSMutableDictionary * _ruleInspections;
    bool  _sameSpaceBasedOnBLE;
    bool  _sameSpaceBasedOnMiLo;
    bool  _sameSpaceBasedOnUWB;
    NSNumber * _uwbRange;
}

@property (nonatomic, retain) NSNumber *bleRange;
@property (nonatomic, retain) IRCandidateDO *candidate;
@property (nonatomic, retain) IRCandidateResult *candidateResult;
@property (nonatomic) bool enableOrderOfExecutionLogging;
@property (nonatomic, retain) NSMutableDictionary *internalOrderOfExecution;
@property (nonatomic) long long nominatedClassification;
@property (nonatomic, retain) NSString *nominatedClassificationDesc;
@property (nonatomic, readonly) IRInspectionOrderOfExectionForCandidate *orderOfExecution;
@property (nonatomic, retain) NSMutableDictionary *ruleInspections;
@property (nonatomic) bool sameSpaceBasedOnBLE;
@property (nonatomic) bool sameSpaceBasedOnMiLo;
@property (nonatomic) bool sameSpaceBasedOnUWB;
@property (nonatomic, retain) NSNumber *uwbRange;

- (void).cxx_destruct;
- (id)bleRange;
- (id)candidate;
- (id)candidateResult;
- (bool)enableOrderOfExecutionLogging;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCandidate:(id)arg1 andDefaultClassification:(long long)arg2 logOrderOfExecution:(bool)arg3;
- (id)internalOrderOfExecution;
- (void)logOrderOfExecution:(long long)arg1 withRuleKey:(id)arg2 ruleType:(id)arg3;
- (bool)logOrderOfExecution:(long long)arg1 withRuleKey:(id)arg2 ruleType:(id)arg3 andReturn:(bool)arg4;
- (long long)nominatedClassification;
- (id)nominatedClassificationDesc;
- (id)orderOfExecution;
- (id)ruleInspections;
- (bool)sameSpaceBasedOnBLE;
- (bool)sameSpaceBasedOnMiLo;
- (bool)sameSpaceBasedOnUWB;
- (void)setBleRange:(id)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidateResult:(id)arg1;
- (void)setClassification:(long long)arg1 withDescription:(id)arg2;
- (void)setEnableOrderOfExecutionLogging:(bool)arg1;
- (void)setEvaluation:(id)arg1 forRuleKey:(id)arg2;
- (void)setInternalOrderOfExecution:(id)arg1;
- (void)setNominatedClassification:(long long)arg1;
- (void)setNominatedClassificationDesc:(id)arg1;
- (void)setRuleInspections:(id)arg1;
- (void)setSameSpaceBasedOnBLE:(bool)arg1;
- (void)setSameSpaceBasedOnMiLo:(bool)arg1;
- (void)setSameSpaceBasedOnUWB:(bool)arg1;
- (void)setUwbRange:(id)arg1;
- (id)uwbRange;

@end
