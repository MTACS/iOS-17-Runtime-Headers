
@interface PSESchemaPSECallSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECall * _callSignal;
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCallSignal;
    bool  _hasCommonSignal;
}

@property (nonatomic, retain) PSESchemaPSECall *callSignal;
@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCallSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)callSignal;
- (id)commonSignal;
- (void)deleteCallSignal;
- (void)deleteCommonSignal;
- (id)dictionaryRepresentation;
- (bool)hasCallSignal;
- (bool)hasCommonSignal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCallSignal:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCallSignal:(bool)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
