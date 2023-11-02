
@interface ODMSiriSchemaODMSiriCountsReported : SISchemaInstrumentationMessage {
    ODMSiriSchemaODMSiriAggregationInterval * _aggregationInterval;
    bool  _hasAggregationInterval;
    NSArray * _siriCounts;
}

@property (nonatomic, retain) ODMSiriSchemaODMSiriAggregationInterval *aggregationInterval;
@property (nonatomic) bool hasAggregationInterval;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *siriCounts;

- (void).cxx_destruct;
- (void)addSiriCounts:(id)arg1;
- (id)aggregationInterval;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSiriCounts;
- (void)deleteAggregationInterval;
- (void)deleteSiriCounts;
- (id)dictionaryRepresentation;
- (bool)hasAggregationInterval;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAggregationInterval:(id)arg1;
- (void)setHasAggregationInterval:(bool)arg1;
- (void)setSiriCounts:(id)arg1;
- (id)siriCounts;
- (id)siriCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)siriCountsCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
