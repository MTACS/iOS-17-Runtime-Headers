
@interface _PSBehaviorRuleRankingUtilities : NSObject

+ (id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featureDictArray:(id)arg3;
+ (id)batchPredictWithAdaptedMLModel:(id)arg1 psConfigForAdaptableModel:(id)arg2 featurizedRules:(id)arg3;
+ (id)batchPredictWithMLModel:(id)arg1 featureArrayDict:(id)arg2;
+ (id)compileMLModelAtPath:(id)arg1;
+ (bool)copyFileFromURL:(id)arg1 toURL:(id)arg2;
+ (bool)copyZippedAdaptableModel:(id)arg1;
+ (id)getAdaptedCompiledMLModelPath;
+ (id)getAdaptedModelRecipeVersionFilePath;
+ (id)getArchivedDefaultAdaptableModelPath;
+ (id)getDeployedAdaptableCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPath;
+ (id)getDeployedCompiledMLModelPathForContactRanker;
+ (id)getIntermediateAdaptableCompiledMLModel;
+ (id)getTrialCompiledAdaptableMLModelPath;
+ (id)getTrialCompiledMLModelPath;
+ (id)getTrialCompiledMLModelPathForContactRanker;
+ (id)getZippedDefaultAdaptableModelPath;
+ (id)loadAdaptableModelConfig:(id)arg1;
+ (bool)loadDeployedAdaptableModelUnderDirectory:(id)arg1;
+ (id)loadMLModel:(id)arg1 modelConfig:(id)arg2;
+ (id)loadMLModelConfigurationWithConfigDict:(id)arg1;
+ (id)predictWithMLModel:(id)arg1 featureDictArray:(id)arg2;
+ (id)reformatFeaturesInFeatureDictArray:(id)arg1;
+ (id)reformatFeaturesInFeaturizedBehaviorRuleArray:(id)arg1;
+ (bool)removeFolderAtPath:(id)arg1;
+ (id)unzipFileWithPath:(id)arg1 toFileName:(id)arg2 toFolderPath:(id)arg3;

@end
