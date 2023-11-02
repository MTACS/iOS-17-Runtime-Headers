
@interface PGSyndicatedAssetsQuestionFactory : PGSurveyQuestionFactory

- (id)_allAssetsFetchResultWithOptions:(id)arg1;
- (bool)_isHubbleFeatureFlagEnabled;
- (id)_syndicatedPhotoLibraryWithError:(id*)arg1;
- (id)_validRandomAssetsFromFetchResult:(id)arg1 limit:(unsigned long long)arg2;
- (id)_validRandomAssetsWithLimit:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
