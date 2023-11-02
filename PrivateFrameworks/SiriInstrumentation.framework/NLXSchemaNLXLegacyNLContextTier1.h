
@interface NLXSchemaNLXLegacyNLContextTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _renderedTexts;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *renderedTexts;

- (void).cxx_destruct;
- (void)addRenderedTexts:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRenderedTexts;
- (void)deleteLinkId;
- (void)deleteRenderedTexts;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)renderedTexts;
- (id)renderedTextsAtIndex:(unsigned long long)arg1;
- (unsigned long long)renderedTextsCount;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setRenderedTexts:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
