
@interface MPSGraphImToColOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingTop;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
}

@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;

+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 dilationRateInX:(unsigned long long)arg5 dilationRateInY:(unsigned long long)arg6 dataLayout:(unsigned long long)arg7;
+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 dilationRateInX:(unsigned long long)arg5 dilationRateInY:(unsigned long long)arg6 paddingLeft:(unsigned long long)arg7 paddingRight:(unsigned long long)arg8 paddingTop:(unsigned long long)arg9 paddingBottom:(unsigned long long)arg10 dataLayout:(unsigned long long)arg11;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataLayout;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingTop;
- (void)setDataLayout:(unsigned long long)arg1;
- (void)setDilationRateInX:(unsigned long long)arg1;
- (void)setDilationRateInY:(unsigned long long)arg1;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setStrideInX:(unsigned long long)arg1;
- (void)setStrideInY:(unsigned long long)arg1;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;

@end
