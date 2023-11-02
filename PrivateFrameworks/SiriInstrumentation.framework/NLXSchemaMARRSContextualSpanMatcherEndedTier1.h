
@interface NLXSchemaMARRSContextualSpanMatcherEndedTier1 : SISchemaInstrumentationMessage {
    NSArray * _contextualSpansTier1s;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *contextualSpansTier1s;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addContextualSpansTier1:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearContextualSpansTier1;
- (id)contextualSpansTier1AtIndex:(unsigned long long)arg1;
- (unsigned long long)contextualSpansTier1Count;
- (id)contextualSpansTier1s;
- (void)deleteContextualSpansTier1;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setContextualSpansTier1s:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
