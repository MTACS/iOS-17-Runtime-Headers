
@interface VNGenerateSkySegmentationRequestConfiguration : VNGenerateSegmentationRequestConfiguration {
    long long  _qualityLevel;
}

@property (nonatomic) long long qualityLevel;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (long long)qualityLevel;
- (void)setQualityLevel:(long long)arg1;

@end
