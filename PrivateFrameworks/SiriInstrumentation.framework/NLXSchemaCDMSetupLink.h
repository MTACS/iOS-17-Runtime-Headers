
@interface NLXSchemaCDMSetupLink : SISchemaInstrumentationMessage {
    bool  _hasSiriClientSetupLink;
    NLXSchemaCDMSiriClientSetupLink * _siriClientSetupLink;
    unsigned long long  _whichNlxclients;
}

@property (nonatomic) bool hasSiriClientSetupLink;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMSiriClientSetupLink *siriClientSetupLink;
@property (nonatomic, readonly) unsigned long long whichNlxclients;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSiriClientSetupLink;
- (id)dictionaryRepresentation;
- (bool)hasSiriClientSetupLink;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSiriClientSetupLink:(bool)arg1;
- (void)setSiriClientSetupLink:(id)arg1;
- (id)siriClientSetupLink;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichNlxclients;
- (void)writeTo:(id)arg1;

@end
