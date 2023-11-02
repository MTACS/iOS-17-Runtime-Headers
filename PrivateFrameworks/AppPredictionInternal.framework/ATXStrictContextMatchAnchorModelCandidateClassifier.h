
@interface ATXStrictContextMatchAnchorModelCandidateClassifier : ATXNaivePositiveAnchorModelCandidateClassifier

- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)arg1 trainingResult:(id)arg2;
- (id)description;
- (bool)isEqual:(id)arg1;

@end
