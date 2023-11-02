
@interface MPSGraphConvolution3DOpDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _dataLayout;
    unsigned long long  _dilationRateInX;
    unsigned long long  _dilationRateInY;
    unsigned long long  _dilationRateInZ;
    unsigned long long  _groups;
    unsigned long long  _paddingBack;
    unsigned long long  _paddingBottom;
    unsigned long long  _paddingFront;
    unsigned long long  _paddingLeft;
    unsigned long long  _paddingRight;
    unsigned long long  _paddingStyle;
    unsigned long long  _paddingTop;
    unsigned long long  _strideInX;
    unsigned long long  _strideInY;
    unsigned long long  _strideInZ;
    unsigned long long  _weightsLayout;
}

@property (nonatomic) unsigned long long dataLayout;
@property (nonatomic) unsigned long long dilationRateInX;
@property (nonatomic) unsigned long long dilationRateInY;
@property (nonatomic) unsigned long long dilationRateInZ;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long paddingBack;
@property (nonatomic) unsigned long long paddingBottom;
@property (nonatomic) unsigned long long paddingFront;
@property (nonatomic) unsigned long long paddingLeft;
@property (nonatomic) unsigned long long paddingRight;
@property (nonatomic) unsigned long long paddingStyle;
@property (nonatomic) unsigned long long paddingTop;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;
@property (nonatomic) unsigned long long strideInZ;
@property (nonatomic) unsigned long long weightsLayout;

+ (id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 strideInZ:(unsigned long long)arg3 dilationRateInX:(unsigned long long)arg4 dilationRateInY:(unsigned long long)arg5 dilationRateInZ:(unsigned long long)arg6 groups:(unsigned long long)arg7 paddingLeft:(unsigned long long)arg8 paddingRight:(unsigned long long)arg9 paddingTop:(unsigned long long)arg10 paddingBottom:(unsigned long long)arg11 paddingFront:(unsigned long long)arg12 paddingBack:(unsigned long long)arg13 paddingStyle:(unsigned long long)arg14 dataLayout:(unsigned long long)arg15 weightsLayout:(unsigned long long)arg16;
+ (id)descriptorWithStrideInX:(unsigned long long)arg1 strideInY:(unsigned long long)arg2 strideInZ:(unsigned long long)arg3 dilationRateInX:(unsigned long long)arg4 dilationRateInY:(unsigned long long)arg5 dilationRateInZ:(unsigned long long)arg6 groups:(unsigned long long)arg7 paddingStyle:(unsigned long long)arg8 dataLayout:(unsigned long long)arg9 weightsLayout:(unsigned long long)arg10;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataLayout;
- (unsigned long long)dilationRateInX;
- (unsigned long long)dilationRateInY;
- (unsigned long long)dilationRateInZ;
- (unsigned long long)groups;
- (unsigned long long)paddingBack;
- (unsigned long long)paddingBottom;
- (unsigned long long)paddingFront;
- (unsigned long long)paddingLeft;
- (unsigned long long)paddingRight;
- (unsigned long long)paddingStyle;
- (unsigned long long)paddingTop;
- (void)setDataLayout:(unsigned long long)arg1;
- (void)setDilationRateInX:(unsigned long long)arg1;
- (void)setDilationRateInY:(unsigned long long)arg1;
- (void)setDilationRateInZ:(unsigned long long)arg1;
- (void)setExplicitPaddingWithPaddingLeft:(unsigned long long)arg1 paddingRight:(unsigned long long)arg2 paddingTop:(unsigned long long)arg3 paddingBottom:(unsigned long long)arg4 paddingFront:(unsigned long long)arg5 paddingBack:(unsigned long long)arg6;
- (void)setGroups:(unsigned long long)arg1;
- (void)setPaddingBack:(unsigned long long)arg1;
- (void)setPaddingBottom:(unsigned long long)arg1;
- (void)setPaddingFront:(unsigned long long)arg1;
- (void)setPaddingLeft:(unsigned long long)arg1;
- (void)setPaddingRight:(unsigned long long)arg1;
- (void)setPaddingStyle:(unsigned long long)arg1;
- (void)setPaddingTop:(unsigned long long)arg1;
- (void)setStrideInX:(unsigned long long)arg1;
- (void)setStrideInY:(unsigned long long)arg1;
- (void)setStrideInZ:(unsigned long long)arg1;
- (void)setWeightsLayout:(unsigned long long)arg1;
- (unsigned long long)strideInX;
- (unsigned long long)strideInY;
- (unsigned long long)strideInZ;
- (unsigned long long)weightsLayout;

@end
