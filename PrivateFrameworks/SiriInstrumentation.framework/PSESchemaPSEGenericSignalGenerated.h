
@interface PSESchemaPSEGenericSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCommonSignal;
}

@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonSignal;
- (void)deleteCommonSignal;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
