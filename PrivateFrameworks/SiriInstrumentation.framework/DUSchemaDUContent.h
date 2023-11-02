
@interface DUSchemaDUContent : SISchemaInstrumentationMessage {
    NSData * _dataPayload;
    bool  _hasDataPayload;
}

@property (nonatomic, copy) NSData *dataPayload;
@property (nonatomic) bool hasDataPayload;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)dataPayload;
- (void)deleteDataPayload;
- (id)dictionaryRepresentation;
- (bool)hasDataPayload;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDataPayload:(id)arg1;
- (void)setHasDataPayload:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
