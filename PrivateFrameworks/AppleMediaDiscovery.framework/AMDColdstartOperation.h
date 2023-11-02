
@interface AMDColdstartOperation : NSObject

+ (id)computeUpdatedScoresV2:(id)arg1 withModel:(id)arg2 andMappingDictionary:(id)arg3;
+ (id)ensureNewDirectoryForBinaryWithModelId:(id)arg1 andVersion:(id)arg2;
+ (id)saveColdStartBinaryforModel:(id)arg1 atLocation:(id)arg2 withVersion:(id)arg3 error:(id*)arg4;

@end
