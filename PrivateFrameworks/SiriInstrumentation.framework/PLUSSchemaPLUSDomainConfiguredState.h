
@interface PLUSSchemaPLUSDomainConfiguredState : SISchemaInstrumentationMessage {
    bool  _hasMediaState;
    PLUSSchemaPLUSMediaConfiguredState * _mediaState;
    unsigned long long  _whichDomainstate;
}

@property (nonatomic) bool hasMediaState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSMediaConfiguredState *mediaState;
@property (nonatomic, readonly) unsigned long long whichDomainstate;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMediaState;
- (id)dictionaryRepresentation;
- (bool)hasMediaState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaState;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaState:(bool)arg1;
- (void)setMediaState:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichDomainstate;
- (void)writeTo:(id)arg1;

@end
