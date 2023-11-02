
@interface PGBusinessItemQuestionFactory : PGSurveyQuestionFactory

- (double)_localBusinessItemFactoryScoreForMomentNode:(id)arg1;
- (bool)_shouldAddNewBusinessItemQuestionForAssetUUID:(id)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
