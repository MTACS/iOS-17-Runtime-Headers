
@interface ODMSiriSchemaODMSiriAggregationInterval : SISchemaInstrumentationMessage {
    unsigned int  _aggregationIntervalInDays;
    double  _aggregationIntervalStartTimestampInSecondsSince2001;
    struct { 
        unsigned int aggregationIntervalInDays : 1; 
        unsigned int aggregationIntervalStartTimestampInSecondsSince2001 : 1; 
    }  _has;
}

@property (nonatomic) unsigned int aggregationIntervalInDays;
@property (nonatomic) double aggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic) bool hasAggregationIntervalInDays;
@property (nonatomic) bool hasAggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)aggregationIntervalInDays;
- (double)aggregationIntervalStartTimestampInSecondsSince2001;
- (void)deleteAggregationIntervalInDays;
- (void)deleteAggregationIntervalStartTimestampInSecondsSince2001;
- (id)dictionaryRepresentation;
- (bool)hasAggregationIntervalInDays;
- (bool)hasAggregationIntervalStartTimestampInSecondsSince2001;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAggregationIntervalInDays:(unsigned int)arg1;
- (void)setAggregationIntervalStartTimestampInSecondsSince2001:(double)arg1;
- (void)setHasAggregationIntervalInDays:(bool)arg1;
- (void)setHasAggregationIntervalStartTimestampInSecondsSince2001:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
