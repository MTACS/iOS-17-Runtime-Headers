
@interface MLPConvolutionBase : MLPImageLayer {
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelStride;
    unsigned long long  _kernelWidth;
}

@property unsigned long long kernelHeight;
@property unsigned long long kernelStride;
@property unsigned long long kernelWidth;

- (unsigned long long)computeOutputLengthWithInputLength:(long long)arg1 kernelWidth:(long long)arg2 kernelStride:(long long)arg3;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelStride;
- (unsigned long long)kernelWidth;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setKernelStride:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1;

@end
