
@interface PPStreamingTopicScorer : NSObject {
    PPScoreDict * _aggregationScoreInputs;
    PPScoreInterpreter * _aggregationScorer;
    PPScoreDict * _currentAggResult;
    PPScoreInterpreter * _finalScorer;
}

- (void).cxx_destruct;

@end
