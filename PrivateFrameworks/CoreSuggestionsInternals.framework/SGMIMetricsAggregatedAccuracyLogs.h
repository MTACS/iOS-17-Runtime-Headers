
@interface SGMIMetricsAggregatedAccuracyLogs : PBCodable <NSCopying> {
    SGMIMetricsAggregatedAccuracyLog * _activeAggregatedAccuracyLogForThePastFourWeeks;
    SGMIMetricsAggregatedAccuracyLog * _activeAggregatedAccuracyLogSinceModelInitialization;
    SGMIMetricsTrialMetadata * _activeTrialMetadata;
    SGMIMetricsAggregatedAccuracyLog * _backgroundAggregatedAccuracyLogForThePastFourWeeks;
    SGMIMetricsAggregatedAccuracyLog * _backgroundAggregatedAccuracyLogSinceModelInitialization;
    SGMIMetricsTrialMetadata * _backgroundTrialMetadata;
    struct { 
        unsigned int hoursSinceReference : 1; 
    }  _has;
    unsigned int  _hoursSinceReference;
}

@property (nonatomic, retain) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogForThePastFourWeeks;
@property (nonatomic, retain) SGMIMetricsAggregatedAccuracyLog *activeAggregatedAccuracyLogSinceModelInitialization;
@property (nonatomic, retain) SGMIMetricsTrialMetadata *activeTrialMetadata;
@property (nonatomic, retain) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (nonatomic, retain) SGMIMetricsAggregatedAccuracyLog *backgroundAggregatedAccuracyLogSinceModelInitialization;
@property (nonatomic, retain) SGMIMetricsTrialMetadata *backgroundTrialMetadata;
@property (nonatomic, readonly) bool hasActiveAggregatedAccuracyLogForThePastFourWeeks;
@property (nonatomic, readonly) bool hasActiveAggregatedAccuracyLogSinceModelInitialization;
@property (nonatomic, readonly) bool hasActiveTrialMetadata;
@property (nonatomic, readonly) bool hasBackgroundAggregatedAccuracyLogForThePastFourWeeks;
@property (nonatomic, readonly) bool hasBackgroundAggregatedAccuracyLogSinceModelInitialization;
@property (nonatomic, readonly) bool hasBackgroundTrialMetadata;
@property (nonatomic) bool hasHoursSinceReference;
@property (nonatomic) unsigned int hoursSinceReference;

- (void).cxx_destruct;
- (id)activeAggregatedAccuracyLogForThePastFourWeeks;
- (id)activeAggregatedAccuracyLogSinceModelInitialization;
- (id)activeTrialMetadata;
- (id)backgroundAggregatedAccuracyLogForThePastFourWeeks;
- (id)backgroundAggregatedAccuracyLogSinceModelInitialization;
- (id)backgroundTrialMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveAggregatedAccuracyLogForThePastFourWeeks;
- (bool)hasActiveAggregatedAccuracyLogSinceModelInitialization;
- (bool)hasActiveTrialMetadata;
- (bool)hasBackgroundAggregatedAccuracyLogForThePastFourWeeks;
- (bool)hasBackgroundAggregatedAccuracyLogSinceModelInitialization;
- (bool)hasBackgroundTrialMetadata;
- (bool)hasHoursSinceReference;
- (unsigned long long)hash;
- (unsigned int)hoursSinceReference;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveAggregatedAccuracyLogForThePastFourWeeks:(id)arg1;
- (void)setActiveAggregatedAccuracyLogSinceModelInitialization:(id)arg1;
- (void)setActiveTrialMetadata:(id)arg1;
- (void)setBackgroundAggregatedAccuracyLogForThePastFourWeeks:(id)arg1;
- (void)setBackgroundAggregatedAccuracyLogSinceModelInitialization:(id)arg1;
- (void)setBackgroundTrialMetadata:(id)arg1;
- (void)setHasHoursSinceReference:(bool)arg1;
- (void)setHoursSinceReference:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
