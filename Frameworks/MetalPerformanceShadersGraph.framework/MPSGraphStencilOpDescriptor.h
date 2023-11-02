
@interface MPSGraphStencilOpDescriptor : MPSGraphObject <NSCopying> {
    long long  _boundaryMode;
    NSArray * _dilationRates;
    NSArray * _explicitPadding;
    NSArray * _offsets;
    float  _paddingConstant;
    unsigned long long  _paddingStyle;
    unsigned long long  _reductionMode;
    NSArray * _strides;
}

@property (nonatomic) long long boundaryMode;
@property (nonatomic, copy) NSArray *dilationRates;
@property (nonatomic, copy) NSArray *explicitPadding;
@property (nonatomic, copy) NSArray *offsets;
@property (nonatomic) float paddingConstant;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long reductionMode;
@property (nonatomic, copy) NSArray *strides;

+ (id)descriptorWithExplicitPadding:(id)arg1;
+ (id)descriptorWithOffsets:(id)arg1 explicitPadding:(id)arg2;
+ (id)descriptorWithPaddingStyle:(unsigned long long)arg1;
+ (id)descriptorWithReductionMode:(unsigned long long)arg1 offsets:(id)arg2 strides:(id)arg3 dilationRates:(id)arg4 explicitPadding:(id)arg5 boundaryMode:(long long)arg6 paddingStyle:(unsigned long long)arg7 paddingConstant:(float)arg8;

- (void).cxx_destruct;
- (long long)boundaryMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dilationRates;
- (id)explicitPadding;
- (id)offsets;
- (float)paddingConstant;
- (unsigned long long)paddingStyle;
- (unsigned long long)reductionMode;
- (void)setBoundaryMode:(long long)arg1;
- (void)setDilationRates:(id)arg1;
- (void)setExplicitPadding:(id)arg1;
- (void)setOffsets:(id)arg1;
- (void)setPaddingConstant:(float)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setReductionMode:(unsigned long long)arg1;
- (void)setStrides:(id)arg1;
- (id)strides;

@end
