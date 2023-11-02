
@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
}

+ (id)sharedModel:(id)arg1;

- (void).cxx_destruct;
- (int)computeSmileScore:(float*)arg1;
- (void)dealloc;
- (float*)getInputBuffer;
- (id)init;

@end
