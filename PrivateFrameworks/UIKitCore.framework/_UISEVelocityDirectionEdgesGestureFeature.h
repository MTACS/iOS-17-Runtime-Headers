
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {
    bool  _exactMatchEdges;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    <_UISETouchedEdgesProvider> * _provider;
    <_UISEGestureFeatureSettings> * _settings;
    unsigned long long  _touchedEdges;
}

@property (nonatomic, readonly) unsigned long long touchedEdges;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)debugDictionary;
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(bool)arg3;
- (unsigned long long)touchedEdges;

@end
