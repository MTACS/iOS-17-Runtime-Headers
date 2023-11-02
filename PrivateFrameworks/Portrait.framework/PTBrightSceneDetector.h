
@interface PTBrightSceneDetector : NSObject {
    float  _brightScene;
    bool  _brightSceneState;
    float  _emaFilterCoefficient;
    float  _filteredLuxLevel;
    void _luxLevelThreshold;
    float  _transitionTime;
}

- (float)brightScene;
- (void)debugState;
- (id)initWithLuxLevelThreshold:(void *)arg1 emaFilterCoefficient:(void *)arg2 transitionTime:(void *)arg3; // needs 3 arg types, found 2: float, float
- (void)reset;
- (void)updateWithLuxLevel:(float)arg1 deltaTime:(float)arg2;

@end
