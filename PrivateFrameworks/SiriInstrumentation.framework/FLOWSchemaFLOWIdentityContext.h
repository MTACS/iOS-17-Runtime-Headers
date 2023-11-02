
@interface FLOWSchemaFLOWIdentityContext : SISchemaInstrumentationMessage {
    bool  _hasProfileSwitchContext;
    FLOWSchemaFLOWProfileSwitchContext * _profileSwitchContext;
}

@property (nonatomic) bool hasProfileSwitchContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWProfileSwitchContext *profileSwitchContext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteProfileSwitchContext;
- (id)dictionaryRepresentation;
- (bool)hasProfileSwitchContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)profileSwitchContext;
- (bool)readFrom:(id)arg1;
- (void)setHasProfileSwitchContext:(bool)arg1;
- (void)setProfileSwitchContext:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
