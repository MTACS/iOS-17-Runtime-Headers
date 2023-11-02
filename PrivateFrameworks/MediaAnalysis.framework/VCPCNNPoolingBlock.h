
@interface VCPCNNPoolingBlock : VCPCNNBlock {
    int  _chunk;
    int  _px;
    int  _py;
}

+ (id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;

- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)forward;
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;
- (bool)supportGPU;
- (bool)useGPU;

@end
