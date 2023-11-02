
@interface AXMPhotoVisionSupport : NSObject

+ (void)_addNode:(id)arg1 toDescription:(id)arg2 atLevel:(long long)arg3;
+ (id)_collectLabelsIncludingLeafNodes:(bool)arg1 nonLeafNodes:(bool)arg2;
+ (id)_deniedVoiceOverObjectClassificationLabels;
+ (id)_deniedVoiceOverSceneClassificationLabels;
+ (bool)_validatePhotosFormatSoftLinkSymbols;
+ (bool)axmIsSceneClassId:(unsigned int)arg1 childOfSceneClassId:(unsigned int)arg2;
+ (id)axmTaxonomyNodeForObjectObservation:(id)arg1;
+ (id)axmTaxonomyNodeForSceneTaxonomyNode:(id)arg1;
+ (id)buildGraphStatisticsDescription;
+ (id)buildParentChainDescriptionForAllNodes;
+ (id)buildTaxonomyDescription;
+ (id)findLeastCommonAncestorForSceneClassIds:(id)arg1 withKnownAncestorSceneClassId:(unsigned int)arg2;
+ (id)leafNodeLabels;
+ (id)localizedLabelForClassificationObservation:(id)arg1;
+ (id)nonLeafNodeLabels;
+ (id)processSceneClassifications:(id)arg1 withOptions:(unsigned int)arg2;

@end
