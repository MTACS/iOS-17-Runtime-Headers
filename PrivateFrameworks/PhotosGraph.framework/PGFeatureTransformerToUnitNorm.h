
@interface PGFeatureTransformerToUnitNorm : PGFeatureSliceTransformer

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)name;

- (bool)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3;
- (id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2;

@end
