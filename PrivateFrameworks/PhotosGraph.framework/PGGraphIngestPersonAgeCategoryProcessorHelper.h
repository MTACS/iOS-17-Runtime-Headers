
@interface PGGraphIngestPersonAgeCategoryProcessorHelper : NSObject {
    CLSSceneConfidenceThresholdHelper * _adultScenesHelper;
    CLSSceneConfidenceThresholdHelper * _babyScenesHelper;
    CLSSceneConfidenceThresholdHelper * _childScenesHelper;
    CLSSceneConfidenceThresholdHelper * _teenScenesHelper;
}

- (void).cxx_destruct;
- (unsigned long long)ageCategoryForPersonNode:(id)arg1 ageCategoryCountedSet:(id)arg2;
- (unsigned long long)ageCategoryFromAssetSamplingScenesForPersonNode:(id)arg1 photoLibrary:(id)arg2 curationSession:(id)arg3;
- (unsigned long long)ageCategoryFromBirthdayDateComponents:(id)arg1 currentDate:(id)arg2;
- (unsigned long long)ageCategoryFromBirthdayDateForPersonNode:(id)arg1;
- (unsigned long long)ageCategoryFromPHFaceAgeType:(unsigned short)arg1;
- (unsigned long long)ageCategoryFromScenesByAssetLocalIdentifier:(id)arg1 curationModelByAssetLocalIdentifier:(id)arg2 personNode:(id)arg3;
- (unsigned long long)ageCategoryUsingFaceAttributesForPersonNode:(id)arg1 photoLibrary:(id)arg2;
- (id)ageDescriptionFromAge:(unsigned long long)arg1;
- (unsigned short)ageTypeFromAgeCategory:(unsigned long long)arg1;
- (id)confidenceThresholdByAdultSceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdByBabySceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdByChildSceneIdentifierWithCurationModel:(id)arg1;
- (id)confidenceThresholdByTeenSceneIdentifierWithCurationModel:(id)arg1;
- (id)init;

@end
