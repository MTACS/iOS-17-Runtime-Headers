
@interface VCPCNNBlurAnalyzerMPS : VCPCNNBlurAnalyzer {
    VCPCNNData * _input;
    VCPCNNModel * _model;
    NSURL * _modelURL;
}

- (void).cxx_destruct;
- (int)computeSharpnessScore:(float*)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(id /* block */)arg5;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)init;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;

@end
