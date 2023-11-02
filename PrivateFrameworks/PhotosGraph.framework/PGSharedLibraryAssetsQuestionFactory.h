
@interface PGSharedLibraryAssetsQuestionFactory : PGSurveyQuestionFactory

+ (id)_libraryScopeFromPhotoLibrary:(id)arg1;
+ (bool)isSharedLibraryQuestionsEnabledForPhotoLibrary:(id)arg1;

- (id)_assetsFetchResultFromMoment:(id)arg1;
- (id)_eligibleMomentsFetchResult;
- (id)collidingQuestionTypes;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
