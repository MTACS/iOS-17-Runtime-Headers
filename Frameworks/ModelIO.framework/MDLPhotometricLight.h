
@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    void * _iesLight;
    MDLTexture * _lightCubeMap;
    NSMutableData * _sphericalHarmonicsCoefficients;
    unsigned long long  _sphericalHarmonicsLevel;
}

@property (nonatomic, readonly, retain) MDLTexture *lightCubeMap;
@property (nonatomic, readonly, copy) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) unsigned long long sphericalHarmonicsLevel;

- (void).cxx_destruct;
- (float)computeInnerAngle;
- (void)computeLumens;
- (id)computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (struct CGColor { }*)evaluatedColorFromSHVector;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (id)generateTexture:(unsigned long long)arg1;
- (id)initWithIESProfile:(id)arg1;
- (id)lightCubeMap;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (id)sphericalHarmonicsCoefficients;
- (unsigned long long)sphericalHarmonicsLevel;

@end
