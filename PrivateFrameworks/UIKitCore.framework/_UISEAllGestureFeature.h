
@interface _UISEAllGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {
    NSArray * _subfeatures;
    NSMutableIndexSet * _unrecognizedIndexes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x1; unsigned long long x2; bool x3; long long x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; double x7; }*)arg1;
- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithSubfeatures:(id)arg1;
- (id)subfeatures;

@end
