
@interface MPSGraphConvolution2DOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    unsigned long long  _groups;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingStyle;
    unsigned long long  _paddingTop;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
    unsigned long long  _weightsLayout;
}

@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long weightsLayout;

+ (id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 dilationRateInX:(unsigned long long)arg3 dilationRateInY:(unsigned long long)arg4 groups:(unsigned long long)arg5 paddingLeft:(unsigned long long)arg6 paddingRight:(unsigned long long)arg7 paddingTop:(unsigned long long)arg8 paddingBottom:(unsigned long long)arg9 paddingStyle:(unsigned long long)arg10 dataLayout:(unsigned long long)arg11 weightsLayout:(unsigned long long)arg12;
+ (id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 dilationRateInX:(unsigned long long)arg3 dilationRateInY:(unsigned long long)arg4 groups:(unsigned long long)arg5 paddingStyle:(unsigned long long)arg6 dataLayout:(unsigned long long)arg7 weightsLayout:(unsigned long long)arg8;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataLayout;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (unsigned long long)groups;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingStyle;
- (unsigned long long)paddingTop;
- (void)setDataLayout:(unsigned long long)arg1;
- (void)setDilationRateInX:(unsigned long long)arg1;
- (void)setDilationRateInY:(unsigned long long)arg1;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4;
- (void)setGroups:(unsigned long long)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setStrideInX:(unsigned long long)arg1;
- (void)setStrideInY:(unsigned long long)arg1;
- (void)setWeightsLayout:(unsigned long long)arg1;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;
- (unsigned long long)weightsLayout;

@end
