
@interface PGSocialGroupsQuestionFactory : PGSurveyQuestionFactory

+ (void)enumeratePeopleClustersWithGraph:(id)arg1 withLinkage:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
+ (void)enumerateSocialGroupsWithGraph:(id)arg1 withLinkage:(unsigned long long)arg2 validGroupsBlock:(id /* block */)arg3 invalidGroupsBlock:(id /* block */)arg4 averageWeight:(out float*)arg5;

- (id)_createSocialGroupWithPersonLocalIdentifiers:(id)arg1;
- (id)_identifierForPersonNodesAsString:(id)arg1;
- (id)_socialGroupsForSurvey:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)_socialGroupsForSurveyFromCurrentAlgorithm:(id)arg1;
- (id)_socialGroupsForSurveyFromCustomAlgorithm:(id)arg1;
- (id)_socialGroupsForSurveyFromNewAlgorithm:(id)arg1 withLinkage:(unsigned long long)arg2;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(id /* block */)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end
