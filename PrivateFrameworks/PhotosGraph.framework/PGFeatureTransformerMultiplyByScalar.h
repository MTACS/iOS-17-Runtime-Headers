
@interface PGFeatureTransformerMultiplyByScalar : PGFeatureSliceTransformer {
    float  _scalarToMultiply;
}

@property (nonatomic, readonly) float scalarToMultiply;

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)name;

- (id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2;
- (id)initWithScalarToMultiply:(float)arg1;
- (id)initWithScalarToMultiply:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (float)scalarToMultiply;

@end
