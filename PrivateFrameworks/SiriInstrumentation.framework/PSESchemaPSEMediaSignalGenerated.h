
@interface PSESchemaPSEMediaSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCommonSignal;
    bool  _hasMediaSignal;
    PSESchemaPSEMedia * _mediaSignal;
}

@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic) bool hasMediaSignal;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PSESchemaPSEMedia *mediaSignal;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonSignal;
- (void)deleteCommonSignal;
- (void)deleteMediaSignal;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignal;
- (bool)hasMediaSignal;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaSignal;
- (bool)readFrom:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (void)setHasMediaSignal:(bool)arg1;
- (void)setMediaSignal:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
