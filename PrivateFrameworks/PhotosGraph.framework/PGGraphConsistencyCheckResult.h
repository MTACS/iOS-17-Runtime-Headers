
@interface PGGraphConsistencyCheckResult : NSObject {
    double  _overallSimilarityScore;
    NSDictionary * _similarityScoreByDomain;
}

@property (nonatomic) double overallSimilarityScore;
@property (nonatomic, retain) NSDictionary *similarityScoreByDomain;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (double)overallSimilarityScore;
- (void)setOverallSimilarityScore:(double)arg1;
- (void)setSimilarityScoreByDomain:(id)arg1;
- (id)similarityScoreByDomain;

@end
