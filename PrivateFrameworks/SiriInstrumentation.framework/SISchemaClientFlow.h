
@interface SISchemaClientFlow : SISchemaInstrumentationMessage {
    NSString * _clientFlowPayload;
    bool  _hasClientFlowPayload;
}

@property (nonatomic, copy) NSString *clientFlowPayload;
@property (nonatomic) bool hasClientFlowPayload;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)clientFlowPayload;
- (void)deleteClientFlowPayload;
- (id)dictionaryRepresentation;
- (bool)hasClientFlowPayload;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setClientFlowPayload:(id)arg1;
- (void)setHasClientFlowPayload:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
