
@interface SGQuickResponsesRanking : NSObject {
    _PASRng * _rng;
}

- (void).cxx_destruct;
- (id)classResultsForScores:(id)arg1 numResponses:(id)arg2 responseCount:(unsigned long long)arg3 config:(id)arg4;
- (id)indexesForScores:(id)arg1 numResponses:(id)arg2;
- (id)initWithSeed:(unsigned long long)arg1;
- (id)resultsForModelScores:(id)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)semanticClassesForCategory:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 configReplies:(id)arg3;
- (id)semanticClassesForResults:(id)arg1 scores:(id)arg2 numResponses:(id)arg3 config:(id)arg4;

@end
