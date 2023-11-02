
@interface MHSchemaMHUserEngagementAccumulatedAggregationStats : SISchemaInstrumentationMessage {
    double  _aggregationStartTimestamp;
    NSArray * _aggregationStats;
    NSString * _cohortType;
    struct { 
        unsigned int aggregationStartTimestamp : 1; 
        unsigned int numberOfDaysAggregation : 1; 
        unsigned int intendedRequestRatio : 1; 
    }  _has;
    bool  _hasCohortType;
    double  _intendedRequestRatio;
    int  _numberOfDaysAggregation;
}

@property (nonatomic) double aggregationStartTimestamp;
@property (nonatomic, copy) NSArray *aggregationStats;
@property (nonatomic, copy) NSString *cohortType;
@property (nonatomic) bool hasAggregationStartTimestamp;
@property (nonatomic) bool hasCohortType;
@property (nonatomic) bool hasIntendedRequestRatio;
@property (nonatomic) bool hasNumberOfDaysAggregation;
@property (nonatomic) double intendedRequestRatio;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int numberOfDaysAggregation;

- (void).cxx_destruct;
- (void)addAggregationStats:(id)arg1;
- (double)aggregationStartTimestamp;
- (id)aggregationStats;
- (id)aggregationStatsAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregationStatsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAggregationStats;
- (id)cohortType;
- (void)deleteAggregationStartTimestamp;
- (void)deleteAggregationStats;
- (void)deleteCohortType;
- (void)deleteIntendedRequestRatio;
- (void)deleteNumberOfDaysAggregation;
- (id)dictionaryRepresentation;
- (bool)hasAggregationStartTimestamp;
- (bool)hasCohortType;
- (bool)hasIntendedRequestRatio;
- (bool)hasNumberOfDaysAggregation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (double)intendedRequestRatio;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)numberOfDaysAggregation;
- (bool)readFrom:(id)arg1;
- (void)setAggregationStartTimestamp:(double)arg1;
- (void)setAggregationStats:(id)arg1;
- (void)setCohortType:(id)arg1;
- (void)setHasAggregationStartTimestamp:(bool)arg1;
- (void)setHasCohortType:(bool)arg1;
- (void)setHasIntendedRequestRatio:(bool)arg1;
- (void)setHasNumberOfDaysAggregation:(bool)arg1;
- (void)setIntendedRequestRatio:(double)arg1;
- (void)setNumberOfDaysAggregation:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
