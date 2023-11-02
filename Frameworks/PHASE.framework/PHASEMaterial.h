
@interface PHASEMaterial : NSObject {
    PHASEAbsorptionData * _absorptionData;
    float  _attenuationScale;
    float  _attenuationShift;
    float  _attenuationTilt;
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoMaterialHandle;
    long long  _preset;
    PHASEScatteringData * _scatteringData;
    PHASESoundReductionIndex * _soundReductionIndex;
}

@property (nonatomic, readonly) PHASEAbsorptionData *absorptionData;
@property (nonatomic) float attenuationScale;
@property (nonatomic) float attenuationShift;
@property (nonatomic) float attenuationTilt;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoMaterialHandle;
@property (nonatomic, readonly) long long preset;
@property (nonatomic, readonly) PHASEScatteringData *scatteringData;
@property (nonatomic, readonly) PHASESoundReductionIndex *soundReductionIndex;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)absorptionData;
- (float)attenuationScale;
- (float)attenuationShift;
- (float)attenuationTilt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct Handle64 { unsigned long long x1; })geoMaterialHandle;
- (id)init;
- (id)initWithEngine:(id)arg1 parameterTypes:(unsigned long long)arg2 semantics:(id)arg3;
- (id)initWithEngine:(id)arg1 preset:(long long)arg2;
- (id)initWithEngine:(id)arg1 preset:(long long)arg2 soundReductionIndex:(id)arg3 absorptionData:(id)arg4 scatteringData:(id)arg5;
- (id)initWithEngine:(id)arg1 semantics:(id)arg2;
- (id)initWithEngine:(id)arg1 soundReductionIndex:(id)arg2 absorptionData:(id)arg3 scatteringData:(id)arg4;
- (long long)preset;
- (id)scatteringData;
- (void)setAttenuationScale:(float)arg1;
- (void)setAttenuationShift:(float)arg1;
- (void)setAttenuationTilt:(float)arg1;
- (void)setGeoMaterialHandle:(struct Handle64 { unsigned long long x1; })arg1;
- (id)soundReductionIndex;
- (void)writeMaterialCoefs:(bool)arg1;

@end
