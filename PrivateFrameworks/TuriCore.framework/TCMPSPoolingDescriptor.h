
@interface TCMPSPoolingDescriptor : NSObject {
    unsigned long long  _kernelSize;
    unsigned long long  _strideSize;
}

@property (nonatomic) unsigned long long kernelSize;
@property (nonatomic) unsigned long long strideSize;

- (unsigned long long)kernelSize;
- (void)setKernelSize:(unsigned long long)arg1;
- (void)setStrideSize:(unsigned long long)arg1;
- (unsigned long long)strideSize;

@end
