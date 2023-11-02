
@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
}

+ (id)sharedModel:(id)arg1;

- (void).cxx_destruct;
- (int)computePoseScore:(float*)arg1;
- (void)dealloc;
- (float*)getInputBuffer;
- (id)init;

@end
