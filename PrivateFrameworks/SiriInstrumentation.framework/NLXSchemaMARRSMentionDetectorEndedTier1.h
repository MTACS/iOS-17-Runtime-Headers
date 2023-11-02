
@interface NLXSchemaMARRSMentionDetectorEndedTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _mentionDetectorSpansTier1s;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *mentionDetectorSpansTier1s;

- (void).cxx_destruct;
- (void)addMentionDetectorSpansTier1:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMentionDetectorSpansTier1;
- (void)deleteLinkId;
- (void)deleteMentionDetectorSpansTier1;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)mentionDetectorSpansTier1AtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionDetectorSpansTier1Count;
- (id)mentionDetectorSpansTier1s;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMentionDetectorSpansTier1s:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
