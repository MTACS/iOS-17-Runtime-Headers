
@interface PGExhaustiveMomentLabellingQuestionFactory : PGSurveyQuestionFactory

- (id)_inferMeaningLabelsForMomentNode:(id)arg1 graph:(id)arg2 cache:(id)arg3 meaningLabels:(id)arg4 sceneTaxonomy:(id)arg5;
- (id)_meaningLabelsForWhichToGenerateQuestions;
- (id)_questionsToAddWithMomentNodes:(id)arg1 graph:(id)arg2 localFactoryScore:(double)arg3 limit:(unsigned long long)arg4 sceneTaxonomy:(id)arg5 alreadyGeneratedQuestions:(id)arg6 progressBlock:(id /* block */)arg7;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
