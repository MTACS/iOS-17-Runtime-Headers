
@protocol NURAWImageProperties <NSObject>

@required

- (NSArray *)availableDecoderVersions;
- (NSString *)decoderVersion;
- (NSArray *)inputNeutralXYFromRGB:(const double*)arg1;
- (<NURAWNoiseReductionProperties> *)noiseReductionProperties;
- (double)temperature;
- (double)tint;

@end
