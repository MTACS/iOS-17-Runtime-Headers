
@interface MyMPSCNNConvolutionGradientState : MPSCNNConvolutionGradientState {
    unsigned long long  _sourceHeight;
    unsigned long long  _sourceWidth;
}

- (unsigned long long)sourceHeight;
- (unsigned long long)sourceWidth;

@end
