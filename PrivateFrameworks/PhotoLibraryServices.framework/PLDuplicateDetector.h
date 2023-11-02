
@interface PLDuplicateDetector : NSObject

+ (short)currentSceneAnalysisUmbrellaVersion;
+ (bool)duplicateDetectorCompletedDateBackgroundMigrationAction:(id)arg1;
+ (bool)duplicateDetectorCompletedPerceptualHashProcessingWithManagedObjectContext:(id)arg1 pathManager:(id)arg2;
+ (id)duplicateDetectorExcludeZeroByteFingerprintPredicateWithProperty:(id)arg1;
+ (id)duplicateDetectorFilterProcessingStateWithPrefix:(id)arg1 processingType:(unsigned long long)arg2;
+ (id)duplicateDetectorProcessingFilterAssetsPredicateWithPrefix:(id)arg1 processingType:(unsigned long long)arg2 pathManager:(id)arg3;
+ (id)predicateFormatToPrependAssetAttributeSubstitutionWithPrefix:(id)arg1;

@end
