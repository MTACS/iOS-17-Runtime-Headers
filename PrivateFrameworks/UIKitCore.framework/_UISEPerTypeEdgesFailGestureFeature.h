
@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {
    NSDictionary * _edgeTypeSubfeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *edgeTypeSubfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long touchedEdges;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)debugDictionary;
- (id)edgeTypeSubfeatures;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithEdgeTypeSubfeatures:(id)arg1;
- (unsigned long long)touchedEdges;

@end
