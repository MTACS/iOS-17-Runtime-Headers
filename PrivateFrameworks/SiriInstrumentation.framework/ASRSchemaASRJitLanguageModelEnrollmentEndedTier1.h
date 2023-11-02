
@interface ASRSchemaASRJitLanguageModelEnrollmentEndedTier1 : SISchemaInstrumentationMessage {
    NSArray * _dialogContexts;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *dialogContexts;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addDialogContext:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearDialogContext;
- (void)deleteDialogContext;
- (void)deleteLinkId;
- (id)dialogContextAtIndex:(unsigned long long)arg1;
- (unsigned long long)dialogContextCount;
- (id)dialogContexts;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setDialogContexts:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
