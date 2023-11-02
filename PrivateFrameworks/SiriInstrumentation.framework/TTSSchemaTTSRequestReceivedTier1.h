
@interface TTSSchemaTTSRequestReceivedTier1 : SISchemaInstrumentationMessage {
    SISchemaUUID * _contextId;
    bool  _hasContextId;
    bool  _hasLinkId;
    bool  _hasTextToSynthesize;
    SISchemaUUID * _linkId;
    NSString * _textToSynthesize;
}

@property (nonatomic, retain) SISchemaUUID *contextId;
@property (nonatomic) bool hasContextId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasTextToSynthesize;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *textToSynthesize;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)contextId;
- (void)deleteContextId;
- (void)deleteLinkId;
- (void)deleteTextToSynthesize;
- (id)dictionaryRepresentation;
- (bool)hasContextId;
- (bool)hasLinkId;
- (bool)hasTextToSynthesize;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setContextId:(id)arg1;
- (void)setHasContextId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasTextToSynthesize:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setTextToSynthesize:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)textToSynthesize;
- (void)writeTo:(id)arg1;

@end
