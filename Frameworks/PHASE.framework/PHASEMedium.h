
@interface PHASEMedium : NSObject {
    NSArray * _attenuationCoefficients;
    PHASEEngine * _engine;
    struct Handle64 { 
        unsigned long long mData; 
    }  _geoMediumHandle;
    long long  _preset;
    long long  _privatePreset;
    float  _speedOfSound;
}

@property (nonatomic, readonly) NSArray *attenuationCoefficients;
@property (nonatomic) struct Handle64 { unsigned long long x1; } geoMediumHandle;
@property (nonatomic, readonly) long long preset;
@property (nonatomic, readonly) long long privatePreset;
@property (nonatomic, readonly) float speedOfSound;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)attenuationCoefficients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct Handle64 { unsigned long long x1; })geoMediumHandle;
- (id)init;
- (id)initAirWithEngine:(id)arg1 temperature:(float)arg2 pressure:(float)arg3 humidity:(float)arg4 bandcount:(int)arg5;
- (id)initAirWithEngine:(id)arg1 temperature:(float)arg2 pressure:(float)arg3 humidity:(float)arg4 frequencies:(id)arg5;
- (id)initWaterWithEngine:(id)arg1 temperature:(float)arg2 depth:(float)arg3 salinity:(float)arg4 pH:(float)arg5 frequencies:(id)arg6;
- (id)initWithEngine:(id)arg1 attenuationCoefficients:(id)arg2 speedOfSound:(float)arg3;
- (id)initWithEngine:(id)arg1 preset:(long long)arg2;
- (id)initWithEngine:(id)arg1 preset:(long long)arg2 privatePreset:(long long)arg3 attenuationCoefficients:(id)arg4 speedOfSound:(float)arg5;
- (id)initWithEngine:(id)arg1 privatePreset:(long long)arg2;
- (long long)preset;
- (long long)privatePreset;
- (void)setDefault;
- (void)setGeoMediumHandle:(struct Handle64 { unsigned long long x1; })arg1;
- (float)speedOfSound;

@end
