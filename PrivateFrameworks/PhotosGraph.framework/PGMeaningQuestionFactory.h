
@interface PGMeaningQuestionFactory : PGSurveyQuestionFactory {
    NSSet * _meaningLabelsForWhichToGenerateQuestions;
}

@property (nonatomic, retain) NSSet *meaningLabelsForWhichToGenerateQuestions;

- (void).cxx_destruct;
- (id)_dateNodesFromStartDate:(id)arg1 toEndDate:(id)arg2 inGraph:(id)arg3;
- (id)_expandedDateNodesFromDateNode:(id)arg1;
- (id)_expandedDateNodesFromDateNodes:(id)arg1;
- (id)_inferMeaningLabelsForMomentNode:(id)arg1 meaningLabels:(id)arg2 graph:(id)arg3 sceneTaxonomy:(id)arg4 cache:(id)arg5;
- (id)_looseCriteriasForCriteria:(id)arg1 graph:(id)arg2;
- (id)_meaningLabelsByParentMeaningLabels;
- (id)_questionsToAddFromMomentNodes:(id)arg1 useRepresentativeAssets:(bool)arg2 localFactoryScore:(double)arg3 alreadyGeneratedQuestions:(id)arg4 limit:(unsigned long long)arg5 graph:(id)arg6 sceneTaxonomy:(id)arg7 progressBlock:(id /* block */)arg8;
- (void)_updateMeaningQuestionsIfNeededWithProgressBlock:(id /* block */)arg1;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (id)meaningLabelsForWhichToGenerateQuestions;
- (long long)questionOptions;
- (unsigned short)questionType;
- (void)setMeaningLabelsForWhichToGenerateQuestions:(id)arg1;

@end
