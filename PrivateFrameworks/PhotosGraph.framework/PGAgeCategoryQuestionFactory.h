
@interface PGAgeCategoryQuestionFactory : PGSurveyQuestionFactory

- (bool)_shouldAddNewAgeCategoryQuestionForPersonUUID:(id)arg1;
- (id)_sortedAgeCategories;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
