
@interface GKRidgedNoiseSource : GKCoherentNoiseSource {
    double  m_weights;
}

+ (id)ridgedNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;

- (id)cloneModule;
- (id)init;
- (id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 lacunarity:(double)arg3 seed:(int)arg4;
- (double)valueAt;

@end
