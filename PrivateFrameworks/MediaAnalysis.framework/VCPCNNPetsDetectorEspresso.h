
@interface VCPCNNPetsDetectorEspresso : VCPCNNPetsDetector {
    float * _inputData;
    int  _maxNumRegions;
    VCPCNNModelEspresso * _modelEspresso;
    NSString * _resConfig;
    int  _srcHeight;
    int  _srcWidth;
}

+ (id)sharedModel:(id)arg1;

- (void).cxx_destruct;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (void)dealloc;
- (int)generatePetsBoxes:(id)arg1 faceBoxes:(id)arg2 cancel:(id /* block */)arg3;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end
