
@interface SNValidateModel : NSObject

+ (bool)ensureFeatureWithDescription:(id)arg1 isOptional:(bool)arg2 error:(id*)arg3;
+ (bool)ensureFeatureWithDescription:(id)arg1 isOptional:(bool)arg2 isFreelyShapedMultiArrayWithDataType:(long long)arg3 error:(id*)arg4;
+ (bool)ensureFeatureWithDescription:(id)arg1 isOptional:(bool)arg2 isMultiArrayWithDataType:(long long)arg3 dimensionSizeRanges:(id)arg4 error:(id*)arg5;
+ (bool)ensureFeatureWithDescription:(id)arg1 isOptional:(bool)arg2 isMultiArrayWithDataType:(long long)arg3 shapeOptions:(id)arg4 error:(id*)arg5;
+ (bool)ensureModelDescription:(id)arg1 hasInputFeatureNames:(id)arg2 hasOutputFeatureNames:(id)arg3 error:(id*)arg4;
+ (bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 andDimensionSizeRanges:(id)arg3 error:(id*)arg4;
+ (bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 andShapeOptions:(id)arg3 error:(id*)arg4;
+ (bool)ensureMultiArrayConstraint:(id)arg1 hasDataType:(long long)arg2 error:(id*)arg3;
+ (bool)ensureMultiArrayIsFreelyShapedByShapeConstraint:(id)arg1 error:(id*)arg2;
+ (bool)ensureMultiArrayIsFreelyShapedWithConstraint:(id)arg1 hasDataType:(long long)arg2 error:(id*)arg3;
+ (bool)ensureMultiArrayIsRequiredByFeatureDescription:(id)arg1 error:(id*)arg2;
+ (bool)ensureMultiArrayShapeConstraint:(id)arg1 hasDimensionSizeRanges:(id)arg2 error:(id*)arg3;
+ (bool)ensureMultiArrayShapeConstraint:(id)arg1 hasShapeOptions:(id)arg2 error:(id*)arg3;

- (id)init;

@end
