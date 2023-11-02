
@interface MPSGraphPooling4DOpDescriptor : MPSGraphObject <NSCopying> {
    bool  _ceilMode;
    NSArray * _dilationRates;
    bool  _includeZeroPadToAverage;
    NSArray * _kernelSizes;
    unsigned long long  _paddingStyle;
    NSArray * _paddingValues;
    unsigned int  _returnIndicesDataType;
    unsigned long long  _returnIndicesMode;
    NSArray * _strides;
}

@property (nonatomic) bool ceilMode;
@property (nonatomic, copy) NSArray *dilationRates;
@property (nonatomic) bool includeZeroPadToAverage;
@property (nonatomic, copy) NSArray *kernelSizes;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic, copy) NSArray *paddingValues;
@property (nonatomic) unsigned int returnIndicesDataType;
@property (nonatomic) unsigned long long returnIndicesMode;
@property (nonatomic, copy) NSArray *strides;

+ (id)descriptorWithKernelSizes:(id)arg1 paddingStyle:(unsigned long long)arg2;
+ (id)descriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingValues:(id)arg4 paddingStyle:(unsigned long long)arg5;

- (void).cxx_destruct;
- (bool)ceilMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dilationRates;
- (bool)includeZeroPadToAverage;
- (id)kernelSizes;
- (unsigned long long)paddingStyle;
- (id)paddingValues;
- (unsigned int)returnIndicesDataType;
- (unsigned long long)returnIndicesMode;
- (void)setCeilMode:(bool)arg1;
- (void)setDilationRates:(id)arg1;
- (void)setIncludeZeroPadToAverage:(bool)arg1;
- (void)setKernelSizes:(id)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setPaddingValues:(id)arg1;
- (void)setReturnIndicesDataType:(unsigned int)arg1;
- (void)setReturnIndicesMode:(unsigned long long)arg1;
- (void)setStrides:(id)arg1;
- (id)strides;

@end
