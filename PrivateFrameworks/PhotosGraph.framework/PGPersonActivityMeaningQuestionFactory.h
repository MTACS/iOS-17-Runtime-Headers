
@interface PGPersonActivityMeaningQuestionFactory : PGSurveyQuestionFactory {
    NSSet * _personActivityMeaningLabelsForWhichToGenerateQuestions;
}

@property (nonatomic, retain) NSSet *personActivityMeaningLabelsForWhichToGenerateQuestions;

- (void).cxx_destruct;
- (id)_questionsToAddFromMomentNodes:(id)arg1 localFactoryScore:(double)arg2 alreadyGeneratedQuestions:(id)arg3 limit:(unsigned long long)arg4 graph:(id)arg5 progressBlock:(id /* block */)arg6;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)personActivityMeaningLabelsForWhichToGenerateQuestions;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)setPersonActivityMeaningLabelsForWhichToGenerateQuestions:(id)arg1;

@end
