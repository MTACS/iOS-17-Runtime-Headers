
@interface RRSchemaRREntityPoolResolveStarted : SISchemaInstrumentationMessage {
    bool  _hasUsoQuery;
    USOSchemaUSOGraph * _usoQuery;
}

@property (nonatomic) bool hasUsoQuery;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) USOSchemaUSOGraph *usoQuery;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteUsoQuery;
- (id)dictionaryRepresentation;
- (bool)hasUsoQuery;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUsoQuery:(bool)arg1;
- (void)setUsoQuery:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)usoQuery;
- (void)writeTo:(id)arg1;

@end
