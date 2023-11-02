
@interface PGLocationRepresentativeAssetQuestionFactory : PGSurveyQuestionFactory

- (id)_addQuestionsForAssetUUIDs:(id)arg1 photoLibrary:(id)arg2;
- (id)_fetchAssetsWithLibrary:(id)arg1 internalPredicate:(id)arg2;
- (id)_selectAssetsFromAssets:(id)arg1 limit:(unsigned long long)arg2;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
