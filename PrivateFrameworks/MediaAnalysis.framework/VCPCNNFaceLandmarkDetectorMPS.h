
@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {
    VCPCNNData * _faceInput;
    VCPCNNModel * _modelLandmarks;
}

- (void).cxx_destruct;
- (int)computeLandmarks:(float*)arg1;
- (float*)getInputBuffer;
- (id)init;

@end
