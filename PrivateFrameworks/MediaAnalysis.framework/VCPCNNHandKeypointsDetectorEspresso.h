
@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector {
    bool  _forceCPU;
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)generateHandKeypoints:(struct CGPoint { double x1; double x2; }*)arg1 keypointConfidence:(float*)arg2 offset:(float)arg3;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4 offset:(float*)arg5;
- (id)init:(bool)arg1 sharedModel:(bool)arg2 modelName:(id)arg3;

@end
