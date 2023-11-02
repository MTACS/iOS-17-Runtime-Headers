
@interface PSESchemaPSEMessageSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCommonSignal;
    bool  _hasMessageSignal;
    PSESchemaPSEMessage * _messageSignal;
}

@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic) bool hasMessageSignal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PSESchemaPSEMessage *messageSignal;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonSignal;
- (void)deleteCommonSignal;
- (void)deleteMessageSignal;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignal;
- (bool)hasMessageSignal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)messageSignal;
- (bool)readFrom:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (void)setHasMessageSignal:(bool)arg1;
- (void)setMessageSignal:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
