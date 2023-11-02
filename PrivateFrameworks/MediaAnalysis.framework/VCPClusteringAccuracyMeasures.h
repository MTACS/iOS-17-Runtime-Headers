
@interface VCPClusteringAccuracyMeasures : NSObject {
    float  _numSingletons;
    float  _numValidSingletons;
    NSMutableArray * _precisionPerCluster;
    NSMutableArray * _recallPerPersonExcludeMissDetection;
    NSMutableArray * _recallPerPersonToGroundTruth;
    float  _weightedAveragePrecision;
    float  _weightedAverageRecall;
}

@property float numSingletons;
@property float numValidSingletons;
@property (retain) NSMutableArray *precisionPerCluster;
@property (retain) NSMutableArray *recallPerPersonExcludeMissDetection;
@property (retain) NSMutableArray *recallPerPersonToGroundTruth;
@property float weightedAveragePrecision;
@property float weightedAverageRecall;

- (void).cxx_destruct;
- (void)addClusterPrecision:(float)arg1 forPersonID:(id)arg2 personFaceCount:(unsigned long long)arg3 validFaceCount:(unsigned long long)arg4 identitySize:(unsigned long long)arg5;
- (void)addIdentityRecallExcludeMissDetection:(float)arg1 forPersonID:(id)arg2 personFaceCount:(unsigned long long)arg3 identitySize:(unsigned long long)arg4;
- (void)addIdentityRecallToGroundTruth:(float)arg1 forPersonID:(id)arg2 personFaceCount:(unsigned long long)arg3 identitySize:(unsigned long long)arg4;
- (id)init;
- (float)numSingletons;
- (float)numValidSingletons;
- (id)precisionPerCluster;
- (id)recallPerPersonExcludeMissDetection;
- (id)recallPerPersonToGroundTruth;
- (void)setNumSingletons:(float)arg1;
- (void)setNumValidSingletons:(float)arg1;
- (void)setPrecisionPerCluster:(id)arg1;
- (void)setRecallPerPersonExcludeMissDetection:(id)arg1;
- (void)setRecallPerPersonToGroundTruth:(id)arg1;
- (void)setWeightedAveragePrecision:(float)arg1;
- (void)setWeightedAverageRecall:(float)arg1;
- (float)weightedAveragePrecision;
- (float)weightedAverageRecall;

@end
