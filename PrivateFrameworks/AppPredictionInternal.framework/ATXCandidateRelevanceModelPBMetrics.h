
@interface ATXCandidateRelevanceModelPBMetrics : PBCodable <NSCopying> {
    NSMutableArray * _candidateMetrics;
    ATXCandidateRelevanceModelPBEvaluationMetrics * _evaluationMetricsFourWeeksAgo;
    ATXCandidateRelevanceModelPBEvaluationMetrics * _evaluationMetricsLastFourWeeks;
    ATXCandidateRelevanceModelPBEvaluationMetrics * _evaluationMetricsOneWeekAgo;
    ATXCandidateRelevanceModelPBEvaluationMetrics * _evaluationMetricsThreeWeeksAgo;
    ATXCandidateRelevanceModelPBEvaluationMetrics * _evaluationMetricsTwoWeeksAgo;
    ATXCandidateRelevanceModelPBModelMetrics * _modelMetrics;
}

@property (nonatomic, retain) NSMutableArray *candidateMetrics;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsFourWeeksAgo;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsLastFourWeeks;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsOneWeekAgo;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsThreeWeeksAgo;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBEvaluationMetrics *evaluationMetricsTwoWeeksAgo;
@property (nonatomic, readonly) bool hasEvaluationMetricsFourWeeksAgo;
@property (nonatomic, readonly) bool hasEvaluationMetricsLastFourWeeks;
@property (nonatomic, readonly) bool hasEvaluationMetricsOneWeekAgo;
@property (nonatomic, readonly) bool hasEvaluationMetricsThreeWeeksAgo;
@property (nonatomic, readonly) bool hasEvaluationMetricsTwoWeeksAgo;
@property (nonatomic, readonly) bool hasModelMetrics;
@property (nonatomic, retain) ATXCandidateRelevanceModelPBModelMetrics *modelMetrics;

+ (Class)candidateMetricsType;

- (void).cxx_destruct;
- (void)addCandidateMetrics:(id)arg1;
- (id)candidateMetrics;
- (id)candidateMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)candidateMetricsCount;
- (void)clearCandidateMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationMetricsFourWeeksAgo;
- (id)evaluationMetricsLastFourWeeks;
- (id)evaluationMetricsOneWeekAgo;
- (id)evaluationMetricsThreeWeeksAgo;
- (id)evaluationMetricsTwoWeeksAgo;
- (bool)hasEvaluationMetricsFourWeeksAgo;
- (bool)hasEvaluationMetricsLastFourWeeks;
- (bool)hasEvaluationMetricsOneWeekAgo;
- (bool)hasEvaluationMetricsThreeWeeksAgo;
- (bool)hasEvaluationMetricsTwoWeeksAgo;
- (bool)hasModelMetrics;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modelMetrics;
- (bool)readFrom:(id)arg1;
- (void)setCandidateMetrics:(id)arg1;
- (void)setEvaluationMetricsFourWeeksAgo:(id)arg1;
- (void)setEvaluationMetricsLastFourWeeks:(id)arg1;
- (void)setEvaluationMetricsOneWeekAgo:(id)arg1;
- (void)setEvaluationMetricsThreeWeeksAgo:(id)arg1;
- (void)setEvaluationMetricsTwoWeeksAgo:(id)arg1;
- (void)setModelMetrics:(id)arg1;
- (void)writeTo:(id)arg1;

@end
