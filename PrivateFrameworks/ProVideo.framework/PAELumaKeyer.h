
@interface PAELumaKeyer : PAEKeyer {
    NSDictionary * properties;
}

- (bool)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg3;
- (void)createLutForNode:(void*)arg1 input:(int)arg2 rect:(const struct HGRect { int x1; int x2; int x3; int x4; }*)arg3 omKeyer:(void*)arg4;
- (void)dealloc;
- (bool)finishInitialSetup:(id*)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })getKeyerNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg1 omKeyer:(void*)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (id)initWithAPIManager:(id)arg1;
- (bool)isLumaKey;
- (bool)oscIsPublishable:(bool)arg1;

@end
