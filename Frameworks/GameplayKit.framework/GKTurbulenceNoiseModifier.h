
@interface GKTurbulenceNoiseModifier : GKNoiseModifier {
    double  _frequency;
    GKPerlinNoiseSource * _perlin;
    double  _power;
    double  _roughness;
    int  _seed;
}

- (void).cxx_destruct;
- (id)cloneModule;
- (void)dealloc;
- (id)init;
- (id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
