
@interface GKTerraceNoiseModifier : GKNoiseModifier {
    double * _controlPoints;
    int  _count;
    bool  _inverted;
}

- (id)cloneModule;
- (void)dealloc;
- (id)init;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)initWithPeakInputValues:(id)arg1 terracesInverted:(bool)arg2;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
