
@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
}

+ (id)sharedModel:(id)arg1;

- (void).cxx_destruct;
- (int)computeLandmarks:(float*)arg1;
- (void)dealloc;
- (float*)getInputBuffer;
- (id)init;

@end
