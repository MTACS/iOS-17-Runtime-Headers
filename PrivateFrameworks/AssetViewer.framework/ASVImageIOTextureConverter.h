
@interface ASVImageIOTextureConverter : ASVTextureConverter

- (bool)canConvertTextureWithDescription:(id)arg1;
- (long long)converterType;
- (struct { unsigned long long x1; unsigned long long x2; })estimatedMemoryDeltaForTextureWithDescription:(id)arg1;
- (long long)maxNativeDownsamplingFactorForDownsamplingFactor:(long long)arg1 fileType:(long long)arg2;

@end
