
@interface PPStreamingNamedEntityScorer : NSObject {
    PPScoreDict * _aggregationScoreInputs;
    PPScoreInterpreter * _aggregationScorer;
    PPScoreDict * _currentAggResult;
    PPScoreInterpreter * _finalScorer;
}

@property (nonatomic, retain) PPScoreDict *currentAggResult;

+ (id)scoreInterpreterAggregationBytecode;
+ (id)scoreInterpreterFinalBytecode;
+ (unsigned long long)sourceStatsNeededForBytecode:(id)arg1;

- (void).cxx_destruct;
- (void)addRecord:(id)arg1;
- (id)currentAggResult;
- (float)getFinalScore;
- (float)getFinalScoreWithAggregationResultOut:(id*)arg1 finalResultOut:(id*)arg2;
- (id)initWithScoringDate:(id)arg1 perRecordDecayRate:(double)arg2 sourceStats:(id)arg3;
- (void)setCurrentAggResult:(id)arg1;
- (void)startNewClusterWithDecayedFeedbackCounts:(id)arg1 mostRelevantRecord:(id)arg2 dominantEntityName:(id)arg3;

@end
