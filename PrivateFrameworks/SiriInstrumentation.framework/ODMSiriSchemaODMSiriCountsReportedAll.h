
@interface ODMSiriSchemaODMSiriCountsReportedAll : SISchemaInstrumentationMessage {
    ODMSiriSchemaODMSiriAggregationInterval * _aggregationInterval;
    bool  _hasAggregationInterval;
    NSArray * _segments;
    NSArray * _siriCountsAlls;
}

@property (nonatomic, retain) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) bool hasAggregationInterval;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic, copy) NSArray *siriCountsAlls;

- (void).cxx_destruct;
- (void)addSegments:(int)arg1;
- (void)addSiriCountsAll:(id)arg1;
- (id)aggregationInterval;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSegments;
- (void)clearSiriCountsAll;
- (void)deleteAggregationInterval;
- (void)deleteSegments;
- (void)deleteSiriCountsAll;
- (id)dictionaryRepresentation;
- (bool)hasAggregationInterval;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)segments;
- (int)segmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentsCount;
- (void)setAggregationInterval:(id)arg1;
- (void)setHasAggregationInterval:(bool)arg1;
- (void)setSegments:(id)arg1;
- (void)setSiriCountsAlls:(id)arg1;
- (id)siriCountsAllAtIndex:(unsigned long long)arg1;
- (unsigned long long)siriCountsAllCount;
- (id)siriCountsAlls;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
