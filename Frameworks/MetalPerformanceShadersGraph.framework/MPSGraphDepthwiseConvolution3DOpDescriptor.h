
@interface MPSGraphDepthwiseConvolution3DOpDescriptor : MPSGraphObject <NSCopying> {
    long long  _channelDimensionIndex;
    NSArray * _dilationRates;
    unsigned long long  _paddingStyle;
    NSArray * _paddingValues;
    NSArray * _strides;
}

@property (nonatomic) long long channelDimensionIndex;
@property (nonatomic, copy) NSArray *dilationRates;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic, copy) NSArray *paddingValues;
@property (nonatomic, copy) NSArray *strides;

+ (id)descriptorWithPaddingStyle:(unsigned long long)arg1;
+ (id)descriptorWithStrides:(id)arg1 dilationRates:(id)arg2 paddingValues:(id)arg3 paddingStyle:(unsigned long long)arg4;

- (void).cxx_destruct;
- (long long)channelDimensionIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dilationRates;
- (unsigned long long)paddingStyle;
- (id)paddingValues;
- (void)setChannelDimensionIndex:(long long)arg1;
- (void)setDilationRates:(id)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setPaddingValues:(id)arg1;
- (void)setStrides:(id)arg1;
- (id)strides;

@end
