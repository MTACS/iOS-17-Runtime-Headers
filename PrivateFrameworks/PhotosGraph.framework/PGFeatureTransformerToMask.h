
@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer {
    float  _maskingValue;
}

@property (nonatomic, readonly) float maskingValue;

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)name;

- (id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2;
- (id)initWithMaskingFloatValue:(float)arg1;
- (id)initWithMaskingFloatValue:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (float)maskingValue;

@end
