
@interface _CDPPredictionResult : NSObject {
    NSArray * _rankedMembers;
    NSMutableDictionary * _scoresForMembers;
    double  _weight;
}

@property (retain) NSMutableDictionary *scoresForMembers;
@property double weight;

- (void).cxx_destruct;
- (void)commonInit;
- (id)initByMergingPredictionResults:(id)arg1;
- (id)initWithMembers:(id)arg1 andScores:(id)arg2;
- (id)rankedCandidates:(id)arg1;
- (id)rankedMembers;
- (id)rankedMembers:(id)arg1;
- (id)rankedMembersPassingThreshold:(double)arg1;
- (id)scoresForMembers;
- (void)setScoresForMembers:(id)arg1;
- (void)setWeight:(double)arg1;
- (double)weight;

@end
