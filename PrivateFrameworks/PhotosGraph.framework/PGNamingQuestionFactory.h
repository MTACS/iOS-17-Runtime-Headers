
@interface PGNamingQuestionFactory : PGSurveyQuestionFactory {
    PHFetchResult * _persons;
}

@property (nonatomic, retain) PHFetchResult *persons;

- (void).cxx_destruct;
- (bool)_persistQuestions:(id)arg1 questionsToRemove:(id)arg2;
- (bool)_shouldAddNewNamingQuestionForPersonUUID:(id)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)persons;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)setPersons:(id)arg1;

@end
