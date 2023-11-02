
@interface VCPCNNBlurAnalyzerEspresso : VCPCNNBlurAnalyzer {
    float * _inputData;
    VCPLoaned * _modelEspresso;
    NSString * _resConfig;
    int  _srcHeight;
    int  _srcWidth;
}

+ (id)sharedModel:(id)arg1;
+ (id)sharedModelPoolWithRevision:(unsigned long long)arg1;

- (void).cxx_destruct;
- (float)calculateScoreFromNetworkOutputV2:(float*)arg1;
- (int)computeSharpnessScore:(float*)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(id /* block */)arg5;
- (void)copyBufferFrom:(char *)arg1 fromStride:(long long)arg2 toPtr:(float*)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6;
- (void)dealloc;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)init;
- (id)initWithRevision:(unsigned long long)arg1;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;

@end
