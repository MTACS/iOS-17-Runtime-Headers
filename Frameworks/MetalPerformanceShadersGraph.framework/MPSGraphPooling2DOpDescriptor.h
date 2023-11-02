
@interface MPSGraphPooling2DOpDescriptor : MPSGraphObject <NSCopying> {
    bool  _ceilMode;
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    bool  _includeZeroPadToAverage;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingStyle;
    unsigned long long  _paddingTop;
    unsigned int  _returnIndicesDataType;
    unsigned long long  _returnIndicesMode;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
}

@property (nonatomic) bool ceilMode;
@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) bool includeZeroPadToAverage;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned int returnIndicesDataType;
@property (nonatomic) unsigned long long returnIndicesMode;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;

+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 dilationRateInX:(unsigned long long)arg5 dilationRateInY:(unsigned long long)arg6 paddingLeft:(unsigned long long)arg7 paddingRight:(unsigned long long)arg8 paddingTop:(unsigned long long)arg9 paddingBottom:(unsigned long long)arg10 paddingStyle:(unsigned long long)arg11 dataLayout:(unsigned long long)arg12;
+ (id)descriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 strideInX:(unsigned long long)arg3 strideInY:(unsigned long long)arg4 paddingStyle:(unsigned long long)arg5 dataLayout:(unsigned long long)arg6;

- (bool)ceilMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataLayout;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (bool)includeZeroPadToAverage;
- (id)init;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingStyle;
- (unsigned long long)paddingTop;
- (unsigned int)returnIndicesDataType;
- (unsigned long long)returnIndicesMode;
- (void)setCeilMode:(bool)arg1;
- (void)setDataLayout:(unsigned long long)arg1;
- (void)setDilationRateInX:(unsigned long long)arg1;
- (void)setDilationRateInY:(unsigned long long)arg1;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4;
- (void)setIncludeZeroPadToAverage:(bool)arg1;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setReturnIndicesDataType:(unsigned int)arg1;
- (void)setReturnIndicesMode:(unsigned long long)arg1;
- (void)setStrideInX:(unsigned long long)arg1;
- (void)setStrideInY:(unsigned long long)arg1;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;

@end
