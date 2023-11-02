
@interface PLCompositionHelper : NSObject

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)activeEffectAdjustmentForCompositionController:(id)arg1;
+ (id)adjustmentConstants;
+ (void)compositionController:(id)arg1 applyAssetVariation:(unsigned short)arg2 withRecipe:(id)arg3;
+ (bool)compositionController:(id)arg1 isCropConstraintEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isDepthIntensityEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isEffectFilterEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isEffectFilterIntensityEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isGeometryEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isPortraitEqualToCompositionController:(id)arg2;
+ (bool)compositionController:(id)arg1 isPortraitIntensityEqualToCompositionController:(id)arg2;
+ (void)compositionController:(id)arg1 setEffectFilterName:(id)arg2 version:(long long)arg3;
+ (void)compositionController:(id)arg1 setInputOrientation:(long long)arg2;
+ (void)compositionController:(id)arg1 updateSemanticEnhanceFromCameraMetadata:(id)arg2 exportProperties:(id)arg3;
+ (bool)compositionControllerHasAnyAutoEnhancement:(id)arg1;
+ (id)defaultValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)identityValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (bool)isIdentityCompositionController:(id)arg1;
+ (bool)isIdentityCompositionController:(id)arg1 forKeys:(id)arg2;
+ (bool)isKeyOnlyAdjustmentForCompositionController:(id)arg1 key:(id)arg2;
+ (id)maxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)minMaxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)minValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2;
+ (id)newIdentityCompositionController;
+ (id)photosSchema;
+ (struct CGSize { double x1; double x2; })synchronousInputSizeForCompositionController:(id)arg1;
+ (id)validatedCompositionCopyFor:(id)arg1;
+ (id)validatedCompositionCopyFor:(id)arg1 mediaType:(long long)arg2;
+ (id)valueForCompositionController:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3;
+ (id)valueForType:(long long)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3;
+ (bool)wantsSemanticEnhanceForCameraMetadata:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)_classificationForIntensityValue:(double)arg1 min:(double)arg2 default:(double)arg3 max:(double)arg4;
+ (id)compositionController:(id)arg1 aggregateKeysForPreviousComposition:(id)arg2;
+ (id)pl_aggregateDepthIntensityForCompositionController:(id)arg1;
+ (id)pl_aggregateFilterIntensityForCompositionController:(id)arg1;
+ (id)pl_aggregateNameForEffectFilterForCompositionController:(id)arg1;
+ (id)pl_aggregateNameForPortraitFilterWithCompositionController:(id)arg1;
+ (id)pl_aggregatePortraitIntensityForCompositionController:(id)arg1;

@end
