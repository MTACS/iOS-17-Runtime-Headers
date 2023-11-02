
@interface GKRotateNoiseModifier : GKNoiseModifier {
    void _radians;
}

- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)initWithRadians;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
