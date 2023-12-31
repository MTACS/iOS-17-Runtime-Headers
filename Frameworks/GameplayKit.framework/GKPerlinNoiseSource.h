
@interface GKPerlinNoiseSource : GKCoherentNoiseSource {
    double  _persistence;
}

@property (nonatomic) double persistence;

+ (id)perlinNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;

- (id)cloneModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5;
- (double)persistence;
- (void)setPersistence:(double)arg1;
- (double)valueAt;

@end
