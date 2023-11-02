
@interface VCPCNNConvBlock : VCPCNNBlock {
    bool  _batchNorm;
    VCPCNNData * _bias;
    int  _chunk;
    VCPCNNData * _filter;
    int  _filterNum;
    int  _filterSize;
    int  _groups;
    int  _padSize;
    int  _padding;
    bool  _reLU;
    int  _stride;
}

+ (Class)convBlockClass:(int)arg1;
+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(bool)arg4 padding:(bool)arg5;
+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(bool)arg4 padding:(bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(bool)arg8;

- (void).cxx_destruct;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(bool)arg4 padding:(bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(bool)arg8;
- (bool)supportGPU;
- (bool)useGPU;

@end
