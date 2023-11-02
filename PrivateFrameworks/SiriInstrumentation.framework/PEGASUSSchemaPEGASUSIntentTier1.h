
@interface PEGASUSSchemaPEGASUSIntentTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    NSArray * _intentArgs;
    SISchemaUUID * _linkId;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, copy) NSArray *intentArgs;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addIntentArgs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearIntentArgs;
- (void)deleteIntentArgs;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentArgs;
- (id)intentArgsAtIndex:(unsigned long long)arg1;
- (unsigned long long)intentArgsCount;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setIntentArgs:(id)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
