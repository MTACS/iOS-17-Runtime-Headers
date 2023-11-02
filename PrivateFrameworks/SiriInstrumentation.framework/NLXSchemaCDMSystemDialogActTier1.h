
@interface NLXSchemaCDMSystemDialogActTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    bool  _hasRenderedText;
    SISchemaUUID * _linkId;
    NSString * _renderedText;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasRenderedText;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *renderedText;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteRenderedText;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasRenderedText;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)renderedText;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasRenderedText:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRenderedText:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
