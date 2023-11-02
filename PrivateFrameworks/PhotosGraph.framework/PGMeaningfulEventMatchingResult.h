
@interface PGMeaningfulEventMatchingResult : NSObject {
    bool  _isMatching;
    bool  _isReliable;
    PGMeaningfulEventRequiredCriteria * _requiredCriteria;
    double  _score;
}

@property (nonatomic, readonly) bool isMatching;
@property (nonatomic, readonly) bool isReliable;
@property (nonatomic, readonly) PGMeaningfulEventRequiredCriteria *requiredCriteria;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIsMatching:(bool)arg1 score:(double)arg2 isReliable:(bool)arg3 requiredCriteria:(id)arg4;
- (bool)isMatching;
- (bool)isReliable;
- (id)requiredCriteria;
- (double)score;

@end
