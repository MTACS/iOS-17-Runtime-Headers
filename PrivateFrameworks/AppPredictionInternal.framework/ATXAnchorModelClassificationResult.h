
@interface ATXAnchorModelClassificationResult : NSObject {
    double  _score;
    bool  _shouldPredictCandidate;
}

@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) bool shouldPredictCandidate;

- (id)initWithShouldPredictCandidate:(bool)arg1 score:(double)arg2;
- (double)score;
- (bool)shouldPredictCandidate;

@end
