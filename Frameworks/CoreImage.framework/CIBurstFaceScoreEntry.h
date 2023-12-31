
@interface CIBurstFaceScoreEntry : NSObject {
    float  maxScore;
    float  minScore;
    int  numScores;
    float  sumScores;
    float  sumSqScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (void)addScore:(float)arg1;
- (float)computeAverage;
- (float)computeStandardDeviation;
- (id)initWithScore:(float)arg1;
- (float)maxScore;
- (float)minScore;
- (int)numScores;
- (void)setMaxScore:(float)arg1;
- (void)setMinScore:(float)arg1;
- (void)setNumScores:(int)arg1;

@end
