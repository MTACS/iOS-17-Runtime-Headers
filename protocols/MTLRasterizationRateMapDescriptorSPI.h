
@protocol MTLRasterizationRateMapDescriptorSPI

@required

- (NSString *)formattedDescription:(unsigned long long)arg1;
- (id)initWithScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (const id*)layerPointer:(unsigned long long*)arg1;
- (float)minFactor;
- (unsigned long long)mutability;
- (void)setMinFactor:(float)arg1;
- (void)setMutability:(unsigned long long)arg1;
- (void)setSkipSampleValidationAndApplySampleAtTileGranularity:(bool)arg1;
- (void)setSkipSampleValidationAndInterpolation:(bool)arg1;
- (bool)skipSampleValidationAndApplySampleAtTileGranularity;
- (bool)skipSampleValidationAndInterpolation;

@end
