
@interface _UISEInitialEdgesFailGestureFeature : _UISEGestureFeature {
    <_UISEGestureFeatureSettings> * _settings;
    bool  _useEdgeRegionSize;
}

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)initWithSettings:(id)arg1 useEdgeRegionSize:(bool)arg2;

@end
