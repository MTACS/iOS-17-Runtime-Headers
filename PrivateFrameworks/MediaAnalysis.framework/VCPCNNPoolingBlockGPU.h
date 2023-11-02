
@interface VCPCNNPoolingBlockGPU : VCPCNNPoolingBlock {
    MPSCNNPoolingMax * _mpsPooling;
}

- (void).cxx_destruct;
- (int)forward;

@end
