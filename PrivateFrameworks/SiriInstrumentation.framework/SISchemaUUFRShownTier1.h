
@interface SISchemaUUFRShownTier1 : SISchemaInstrumentationMessage {
    NSString * _displayedSiriDialogOutput;
    bool  _hasDisplayedSiriDialogOutput;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSString *displayedSiriDialogOutput;
@property (nonatomic) bool hasDisplayedSiriDialogOutput;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDisplayedSiriDialogOutput;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (id)displayedSiriDialogOutput;
- (bool)hasDisplayedSiriDialogOutput;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedSiriDialogOutput:(id)arg1;
- (void)setHasDisplayedSiriDialogOutput:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
