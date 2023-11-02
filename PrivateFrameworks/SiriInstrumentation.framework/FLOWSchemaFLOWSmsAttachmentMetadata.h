
@interface FLOWSchemaFLOWSmsAttachmentMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int smsAttachmentType : 1; 
    }  _has;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    int  _smsAttachmentType;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasSmsAttachmentType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) int smsAttachmentType;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteSmsAttachmentType;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasSmsAttachmentType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasSmsAttachmentType:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setSmsAttachmentType:(int)arg1;
- (int)smsAttachmentType;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
