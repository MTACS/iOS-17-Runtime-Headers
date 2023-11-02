
@interface NLXSchemaCDMMatchingSpanTier1 : SISchemaInstrumentationMessage {
    bool  _hasInput;
    bool  _hasInternalSpanData;
    bool  _hasLinkId;
    bool  _hasSemanticValue;
    NSString * _input;
    NLXSchemaCDMInternalSpanDataTier1 * _internalSpanData;
    SISchemaUUID * _linkId;
    NSString * _semanticValue;
}

@property (nonatomic) bool hasInput;
@property (nonatomic) bool hasInternalSpanData;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasSemanticValue;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, retain) NLXSchemaCDMInternalSpanDataTier1 *internalSpanData;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *semanticValue;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteInput;
- (void)deleteInternalSpanData;
- (void)deleteLinkId;
- (void)deleteSemanticValue;
- (id)dictionaryRepresentation;
- (bool)hasInput;
- (bool)hasInternalSpanData;
- (bool)hasLinkId;
- (bool)hasSemanticValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)input;
- (id)internalSpanData;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (id)semanticValue;
- (void)setHasInput:(bool)arg1;
- (void)setHasInternalSpanData:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasSemanticValue:(bool)arg1;
- (void)setInput:(id)arg1;
- (void)setInternalSpanData:(id)arg1;
- (void)setLinkId:(id)arg1;
- (void)setSemanticValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
