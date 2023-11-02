
@interface SLASRFeatures : NSObject {
    NSArray * _latticePathMaxScores;
    NSArray * _latticePathMeanScores;
    NSArray * _latticePathMinScores;
    NSArray * _latticePathVarScores;
    float  _snr;
    NSArray * _topLatticePathScores;
    unsigned long long  _topLatticePathTokenCount;
    float  _trailingSilence;
}

@property (nonatomic, retain) NSArray *latticePathMaxScores;
@property (nonatomic, retain) NSArray *latticePathMeanScores;
@property (nonatomic, retain) NSArray *latticePathMinScores;
@property (nonatomic, retain) NSArray *latticePathVarScores;
@property (nonatomic) float snr;
@property (nonatomic, retain) NSArray *topLatticePathScores;
@property (nonatomic) unsigned long long topLatticePathTokenCount;
@property (nonatomic) float trailingSilence;

- (void).cxx_destruct;
- (id)latticePathMaxScores;
- (id)latticePathMeanScores;
- (id)latticePathMinScores;
- (id)latticePathVarScores;
- (void)setLatticePathMaxScores:(id)arg1;
- (void)setLatticePathMeanScores:(id)arg1;
- (void)setLatticePathMinScores:(id)arg1;
- (void)setLatticePathVarScores:(id)arg1;
- (void)setSnr:(float)arg1;
- (void)setTopLatticePathScores:(id)arg1;
- (void)setTopLatticePathTokenCount:(unsigned long long)arg1;
- (void)setTrailingSilence:(float)arg1;
- (float)snr;
- (id)topLatticePathScores;
- (unsigned long long)topLatticePathTokenCount;
- (float)trailingSilence;

@end
