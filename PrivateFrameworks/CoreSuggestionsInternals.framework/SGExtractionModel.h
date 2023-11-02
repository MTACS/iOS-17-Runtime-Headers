
@interface SGExtractionModel : NSObject

+ (id)argMaxForLastOutput:(id)arg1;
+ (id)argMaxForOutputIndex:(id)arg1 index:(int)arg2 shape:(id)arg3;
+ (id)argMaxForSequence:(id)arg1;
+ (void)cleanLegacyModelsDirectoryOfModelsNamed:(id)arg1;
+ (void)cleanModelAssets;
+ (void)cleanModelsDirectoryOfModelsNamed:(id)arg1;
+ (id)enrichTaggedCharacterRangesWithModelOutput:(id)arg1 usingInputCharacterRanges:(id)arg2;
+ (unsigned long long)featureDimensionForInputSection:(id)arg1 forModel:(id)arg2;
+ (id)inputDictFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3;
+ (id)inputDictFromTaggedCharacterRanges:(id)arg1 usingTokenMapping:(id)arg2 forModel:(id)arg3 pflTraining:(bool)arg4 hasEvent:(bool)arg5;
+ (id)loadLazyPlistWithBasename:(id)arg1;
+ (id)modelOutputFromOutputMapping:(id)arg1 modelOutput:(id)arg2 modelInput:(id)arg3;
+ (id)modelsDirectoryName;
+ (void)writeDummyRecordInStore;
+ (void)writeToBiomeStreamWithInput:(id)arg1;

- (id)currentModelURLForModelName:(id)arg1;

@end
