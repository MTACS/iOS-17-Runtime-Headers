
@interface PGPetQuestionFactory : PGSurveyQuestionFactory

+ (id)petSceneLabels;

- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)initialPetQuestion;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)updateInitialQuestion:(id)arg1;

@end
