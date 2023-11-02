
@interface MHSchemaMHUserEngagementFalseTriggerMitigationStarted : SISchemaInstrumentationMessage {
    MHSchemaMHUserEngagementAccumulatedAggregationStats * _accumulatedAggregationStats;
    struct { 
        unsigned int uiWaitTimeInSeconds : 1; 
    }  _has;
    bool  _hasAccumulatedAggregationStats;
    bool  _hasModelVersion;
    NSString * _modelVersion;
    double  _uiWaitTimeInSeconds;
}

@property (nonatomic, retain) MHSchemaMHUserEngagementAccumulatedAggregationStats *accumulatedAggregationStats;
@property (nonatomic) bool hasAccumulatedAggregationStats;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasUiWaitTimeInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) double uiWaitTimeInSeconds;

- (void).cxx_destruct;
- (id)accumulatedAggregationStats;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAccumulatedAggregationStats;
- (void)deleteModelVersion;
- (void)deleteUiWaitTimeInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasAccumulatedAggregationStats;
- (bool)hasModelVersion;
- (bool)hasUiWaitTimeInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (bool)readFrom:(id)arg1;
- (void)setAccumulatedAggregationStats:(id)arg1;
- (void)setHasAccumulatedAggregationStats:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasUiWaitTimeInSeconds:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setUiWaitTimeInSeconds:(double)arg1;
- (id)suppressMessageUnderConditions;
- (double)uiWaitTimeInSeconds;
- (void)writeTo:(id)arg1;

@end
