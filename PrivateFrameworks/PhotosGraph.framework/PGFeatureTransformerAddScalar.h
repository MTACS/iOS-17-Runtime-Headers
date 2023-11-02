
@interface PGFeatureTransformerAddScalar : PGFeatureSliceTransformer {
    float  _scalarToAdd;
}

@property (nonatomic, readonly) float scalarToAdd;

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)name;

- (id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2;
- (id)initWithScalarToAdd:(float)arg1;
- (id)initWithScalarToAdd:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (float)scalarToAdd;

@end
