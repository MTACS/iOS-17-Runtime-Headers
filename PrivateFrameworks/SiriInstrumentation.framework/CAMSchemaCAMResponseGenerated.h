
@interface CAMSchemaCAMResponseGenerated : SISchemaInstrumentationMessage {
    bool  _hasResponse;
    CAMSchemaCAMResponse * _response;
}

@property (nonatomic) bool hasResponse;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) CAMSchemaCAMResponse *response;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteResponse;
- (id)dictionaryRepresentation;
- (bool)hasResponse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)response;
- (void)setHasResponse:(bool)arg1;
- (void)setResponse:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
