
@interface FLOWSchemaFLOWSmsTextContext : SISchemaInstrumentationMessage {
    bool  _hasSmsAttachmentMetadata;
    bool  _hasSmsTextContentMetadata;
    FLOWSchemaFLOWSmsAttachmentMetadata * _smsAttachmentMetadata;
    FLOWSchemaFLOWSmsTextContentMetadata * _smsTextContentMetadata;
}

@property (nonatomic) bool hasSmsAttachmentMetadata;
@property (nonatomic) bool hasSmsTextContentMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) FLOWSchemaFLOWSmsAttachmentMetadata *smsAttachmentMetadata;
@property (nonatomic, retain) FLOWSchemaFLOWSmsTextContentMetadata *smsTextContentMetadata;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteSmsAttachmentMetadata;
- (void)deleteSmsTextContentMetadata;
- (id)dictionaryRepresentation;
- (bool)hasSmsAttachmentMetadata;
- (bool)hasSmsTextContentMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSmsAttachmentMetadata:(bool)arg1;
- (void)setHasSmsTextContentMetadata:(bool)arg1;
- (void)setSmsAttachmentMetadata:(id)arg1;
- (void)setSmsTextContentMetadata:(id)arg1;
- (id)smsAttachmentMetadata;
- (id)smsTextContentMetadata;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
