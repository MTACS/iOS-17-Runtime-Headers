
@protocol ATXAnchorModelCandidateClassifierProtocol <NSObject, NSSecureCoding>

@required

- (long long)classifierType;
- (ATXAnchorModelClassificationResult *)classifyCandidateForAnchorOccurrence:(ATXDuetEvent *)arg1 trainingResult:(ATXAnchorModelTrainingResult *)arg2;
- (bool)isTrained;
- (void)train;

@end
