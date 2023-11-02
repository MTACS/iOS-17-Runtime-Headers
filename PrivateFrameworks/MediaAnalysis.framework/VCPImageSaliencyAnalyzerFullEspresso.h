
@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
    NSString * _resConfig;
    int  _srcHeight;
    int  _srcWidth;
}

+ (id)sharedModel:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (int)getSalientRegions:(id /* block */)arg1;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;

@end
