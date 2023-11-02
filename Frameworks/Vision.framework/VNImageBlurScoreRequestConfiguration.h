
@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration {
    unsigned long long  _blurDeterminationMethod;
    unsigned long long  _maximumIntermediateSideLength;
}

@property (nonatomic) unsigned long long blurDeterminationMethod;
@property (nonatomic) unsigned long long maximumIntermediateSideLength;

- (unsigned long long)blurDeterminationMethod;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (unsigned long long)maximumIntermediateSideLength;
- (void)setBlurDeterminationMethod:(unsigned long long)arg1;
- (void)setMaximumIntermediateSideLength:(unsigned long long)arg1;

@end
