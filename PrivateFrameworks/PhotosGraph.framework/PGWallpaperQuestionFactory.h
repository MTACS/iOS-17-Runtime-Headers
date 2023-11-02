
@interface PGWallpaperQuestionFactory : PGSurveyQuestionFactory

+ (bool)isHighRecallCityscapeAsset:(id)arg1;
+ (bool)isHighRecallLandscapeAsset:(id)arg1;

- (id)_generateQuestionsWithLimit:(unsigned long long)arg1 progressReporter:(id)arg2;
- (id)_generateTruePositiveCityscapeQuestionWithLimit:(unsigned long long)arg1 suggestionSession:(id)arg2 alreadyGeneratedQuestions:(id)arg3 progressReporter:(id)arg4;
- (id)_generateTruePositiveLandscapeQuestionWithLimit:(unsigned long long)arg1 suggestionSession:(id)arg2 alreadyGeneratedQuestions:(id)arg3 progressReporter:(id)arg4;
- (id)_generateTruePositivePeopleQuestionWithLimit:(unsigned long long)arg1 suggestionSession:(id)arg2 alreadyGeneratedQuestions:(id)arg3 progressReporter:(id)arg4;
- (id)_generateTruePositivePetQuestionWithLimit:(unsigned long long)arg1 suggestionSession:(id)arg2 alreadyGeneratedQuestions:(id)arg3 progressReporter:(id)arg4;
- (id)_generateTruePositiveQuestionsWithLimit:(unsigned long long)arg1 progressReporter:(id)arg2;
- (id)evenlySelectQuestionsByType:(id)arg1 limit:(unsigned long long)arg2;
- (id)fetchAssetsWithPredicate:(id)arg1 assetFilter:(id /* block */)arg2;
- (id)fetchCityscapeAssets;
- (id)fetchLandscapeAssets;
- (id)fetchPeopleAssets;
- (id)fetchPetAssets;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
