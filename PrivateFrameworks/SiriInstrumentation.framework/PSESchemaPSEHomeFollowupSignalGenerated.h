
@interface PSESchemaPSEHomeFollowupSignalGenerated : SISchemaInstrumentationMessage {
    PSESchemaPSECommonSignal * _commonSignal;
    bool  _hasCommonSignal;
    bool  _hasHomeFollowUpSignal;
    PSESchemaPSEHomeFollowUp * _homeFollowUpSignal;
}

@property (nonatomic, retain) PSESchemaPSECommonSignal *commonSignal;
@property (nonatomic) bool hasCommonSignal;
@property (nonatomic) bool hasHomeFollowUpSignal;
@property (nonatomic, retain) PSESchemaPSEHomeFollowUp *homeFollowUpSignal;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)commonSignal;
- (void)deleteCommonSignal;
- (void)deleteHomeFollowUpSignal;
- (id)dictionaryRepresentation;
- (bool)hasCommonSignal;
- (bool)hasHomeFollowUpSignal;
- (unsigned long long)hash;
- (id)homeFollowUpSignal;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCommonSignal:(id)arg1;
- (void)setHasCommonSignal:(bool)arg1;
- (void)setHasHomeFollowUpSignal:(bool)arg1;
- (void)setHomeFollowUpSignal:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
