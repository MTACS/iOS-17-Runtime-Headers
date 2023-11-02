
@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {
    unsigned long long  _fails;
    NSArray * _subfeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long touchedEdges;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { }*)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSubfeatures:(id)arg1;
- (id)subfeatures;
- (unsigned long long)touchedEdges;

@end
