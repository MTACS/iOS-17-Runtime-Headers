
@interface _UISEMuxGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {
    id /* block */  _createFeatureBlock;
    unsigned long long  _fails;
    unsigned long long  _recognizes;
    <_UISEGestureFeatureSettings> * _settings;
    NSMutableDictionary * _subfeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *subfeatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSettings:(id)arg1 createFeatureBlock:(id /* block */)arg2;
- (id)subfeatures;

@end
