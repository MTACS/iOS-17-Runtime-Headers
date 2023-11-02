
@interface ATXUIFeedbackMetricsResultSection : NSObject {
    ATXCategoricalAttributeBreakdown * _clientModelBreakdown;
    ATXCategoricalAttributeBreakdown * _confidenceBreakdown;
    ATXCategoricalAttributeBreakdown * _consumerSubTypeBreakdown;
    ATXCategoricalAttributeBreakdown * _predictionReasonCodeBreakdown;
    ATXScoreDistribution * _scoreDistribution;
}

@property (nonatomic, readonly) ATXCategoricalAttributeBreakdown *clientModelBreakdown;
@property (nonatomic, readonly) ATXCategoricalAttributeBreakdown *confidenceBreakdown;
@property (nonatomic, readonly) ATXCategoricalAttributeBreakdown *consumerSubTypeBreakdown;
@property (nonatomic, readonly) ATXCategoricalAttributeBreakdown *predictionReasonCodeBreakdown;
@property (nonatomic, readonly) ATXScoreDistribution *scoreDistribution;

- (void).cxx_destruct;
- (id)clientModelBreakdown;
- (id)confidenceBreakdown;
- (id)consumerSubTypeBreakdown;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackMetricsResultSection:(id)arg1;
- (id)predictionReasonCodeBreakdown;
- (id)scoreDistribution;

@end
