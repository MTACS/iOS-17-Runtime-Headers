
@interface PGMemoryGeneratorUtils : NSObject

+ (id)_outdoorROITypes;
+ (id)babyAndChildPersonNodesAtHomeOrFrequentLocationInGraph:(id)arg1;
+ (id)filterImportedAssets:(id)arg1 byOverlapWithRelevantAssets:(id)arg2 withGraph:(id)arg3;
+ (id)filterImportedAssetsWithoutLocationAndWithoutSceneOrPersonOverlapFromAllAssets:(id)arg1 withGraph:(id)arg2;
+ (bool)isImportedAsset:(id)arg1;
+ (id)momentNodesAtHomeOrWorkOrFrequentLocationInGraph:(id)arg1;
+ (id)outdoorROIMomentNodesNotAtHomeOrFrequentLocationInGraph:(id)arg1 useMomentFeatureEdges:(bool)arg2;
+ (id)outdoorROINodesInGraph:(id)arg1;
+ (id)personAndPetLocalIdentifiersInAssets:(id)arg1;

@end
