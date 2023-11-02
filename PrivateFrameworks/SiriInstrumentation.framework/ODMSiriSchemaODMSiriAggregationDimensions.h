
@interface ODMSiriSchemaODMSiriAggregationDimensions : SISchemaInstrumentationMessage {
    unsigned int  _aggregationIntervalInDays;
    double  _aggregationIntervalStartTimestampInSecondsSince2001;
    struct { 
        unsigned int aggregationIntervalInDays : 1; 
        unsigned int aggregationIntervalStartTimestampInSecondsSince2001 : 1; 
    }  _has;
    bool  _hasSiriInputLocale;
    SISchemaISOLocale * _siriInputLocale;
}

@property (nonatomic) unsigned int aggregationIntervalInDays;
@property (nonatomic) double aggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic) bool hasAggregationIntervalInDays;
@property (nonatomic) bool hasAggregationIntervalStartTimestampInSecondsSince2001;
@property (nonatomic) bool hasSiriInputLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaISOLocale *siriInputLocale;

- (void).cxx_destruct;
- (unsigned int)aggregationIntervalInDays;
- (double)aggregationIntervalStartTimestampInSecondsSince2001;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAggregationIntervalInDays;
- (void)deleteAggregationIntervalStartTimestampInSecondsSince2001;
- (void)deleteSiriInputLocale;
- (id)dictionaryRepresentation;
- (bool)hasAggregationIntervalInDays;
- (bool)hasAggregationIntervalStartTimestampInSecondsSince2001;
- (bool)hasSiriInputLocale;
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
- (void)setHasSiriInputLocale:(bool)arg1;
- (void)setSiriInputLocale:(id)arg1;
- (id)siriInputLocale;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
