
@interface ARInternalFaceTrackingConfiguration : ARConfiguration {
    long long  _maximumNumberOfTrackedFaces;
    bool  _useAlternativeResources;
}

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) bool useAlternativeResources;

+ (bool)isSupported;
+ (id)new;
+ (id)supportedVideoFormats;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)createTechniques:(id)arg1;
- (id)imageSensorSettings;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)maximumNumberOfTrackedFaces;
- (void)setCameraPosition:(long long)arg1;
- (void)setLightEstimationEnabled:(bool)arg1;
- (void)setMaximumNumberOfTrackedFaces:(long long)arg1;
- (void)setUseAlternativeResources:(bool)arg1;
- (bool)useAlternativeResources;

@end
