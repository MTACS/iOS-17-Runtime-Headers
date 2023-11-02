
@interface _UISEAnyGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {
    NSArray * _subfeatures;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { }*)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSubfeatures:(id)arg1;
- (id)subfeatures;

@end
