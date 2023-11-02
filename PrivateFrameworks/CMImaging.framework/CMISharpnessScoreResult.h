
@interface CMISharpnessScoreResult : NSObject {
    NSArray * _facesScores;
    float  _fullImageScore;
}

@property (nonatomic, readonly) NSArray *facesScores;
@property (nonatomic, readonly) float fullImageScore;

- (void).cxx_destruct;
- (id)facesScores;
- (float)fullImageScore;
- (id)initWithFullImageScore:(float)arg1 facesScore:(id)arg2;

@end
