
@interface FLOWLINKSchemaFLOWLINKActionConversionStarted : SISchemaInstrumentationMessage {
    bool  _hasParseHypothesisId;
    SISchemaUUID * _parseHypothesisId;
}

@property (nonatomic) bool hasParseHypothesisId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *parseHypothesisId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteParseHypothesisId;
- (id)dictionaryRepresentation;
- (bool)hasParseHypothesisId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parseHypothesisId;
- (bool)readFrom:(id)arg1;
- (void)setHasParseHypothesisId:(bool)arg1;
- (void)setParseHypothesisId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
