
@interface VCPCNNFlattenBlock : VCPCNNBlock {
    int  _chunk;
}

- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)forward;
- (id)initWithParameters:(int)arg1;

@end
