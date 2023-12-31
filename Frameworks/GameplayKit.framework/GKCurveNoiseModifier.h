
@interface GKCurveNoiseModifier : GKNoiseModifier {
    double * _controlPoints;
    int  _count;
    double * _parameters;
}

- (id)cloneModule;
- (void)dealloc;
- (id)init;
- (id)initWithControlPoints:(id)arg1;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
