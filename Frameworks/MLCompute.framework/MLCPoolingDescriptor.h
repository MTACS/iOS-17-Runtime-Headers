
@interface MLCPoolingDescriptor : NSObject <NSCopying> {
    bool  _countIncludesPadding;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    unsigned long long  _kernelHeight;
    unsigned long long  _kernelWidth;
    int  _paddingPolicy;
    unsigned long long  _paddingSizeInX;
    unsigned long long  _paddingSizeInY;
    int  _poolingType;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
}

@property (nonatomic, readonly) bool countIncludesPadding;
@property (nonatomic, readonly) unsigned long long dilationRateInX;
@property (nonatomic, readonly) unsigned long long dilationRateInY;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) int paddingPolicy;
@property (nonatomic, readonly) unsigned long long paddingSizeInX;
@property (nonatomic, readonly) unsigned long long paddingSizeInY;
@property (nonatomic, readonly) int poolingType;
@property (nonatomic, readonly) unsigned long long strideInX;
@property (nonatomic, readonly) unsigned long long strideInY;

+ (id)averagePoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5 countIncludesPadding:(bool)arg6;
+ (id)averagePoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4 countIncludesPadding:(bool)arg5;
+ (id)l2NormPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5;
+ (id)l2NormPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4;
+ (id)maxPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 dilationRates:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5;
+ (id)maxPoolingDescriptorWithKernelSizes:(id)arg1 strides:(id)arg2 paddingPolicy:(int)arg3 paddingSizes:(id)arg4;
+ (id)poolingDescriptorWithType:(int)arg1 kernelSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;
+ (id)poolingDescriptorWithType:(int)arg1 kernelSizes:(id)arg2 strides:(id)arg3 dilationRates:(id)arg4 paddingPolicy:(int)arg5 paddingSizes:(id)arg6;
+ (id)poolingDescriptorWithType:(int)arg1 kernelSizes:(id)arg2 strides:(id)arg3 paddingPolicy:(int)arg4 paddingSizes:(id)arg5;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)countIncludesPadding;
- (id)description;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (unsigned long long)hash;
- (id)initWithType:(int)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5 dilationRateInX:(unsigned long long)arg6 dilationRateInY:(unsigned long long)arg7 paddingPolicy:(int)arg8 paddingSizeInX:(unsigned long long)arg9 paddingSizeInY:(unsigned long long)arg10 countIncludesPadding:(bool)arg11;
- (bool)isEqual:(id)arg1;
- (unsigned long long)kernelHeight;
- (unsigned long long)kernelWidth;
- (int)paddingPolicy;
- (unsigned long long)paddingSizeInX;
- (unsigned long long)paddingSizeInY;
- (int)poolingType;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;

@end
