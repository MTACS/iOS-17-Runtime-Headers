
@interface ODMSiriSchemaODMSiriCountsAll : SISchemaInstrumentationMessage {
    ODMSiriSchemaODMDynamicDimensionsAll * _dimensions;
    bool  _hasDimensions;
    bool  _hasRequestCounts;
    ODMSiriSchemaODMSiriRequestCounts * _requestCounts;
}

@property (nonatomic, retain) ODMSiriSchemaODMDynamicDimensionsAll *dimensions;
@property (nonatomic) bool hasDimensions;
@property (nonatomic) bool hasRequestCounts;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ODMSiriSchemaODMSiriRequestCounts *requestCounts;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDimensions;
- (void)deleteRequestCounts;
- (id)dictionaryRepresentation;
- (id)dimensions;
- (bool)hasDimensions;
- (bool)hasRequestCounts;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)requestCounts;
- (void)setDimensions:(id)arg1;
- (void)setHasDimensions:(bool)arg1;
- (void)setHasRequestCounts:(bool)arg1;
- (void)setRequestCounts:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
