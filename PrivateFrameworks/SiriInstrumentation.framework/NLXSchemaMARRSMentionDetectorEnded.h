
@interface NLXSchemaMARRSMentionDetectorEnded : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    NSArray * _mentionDetectorSpans;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSArray *mentionDetectorSpans;

- (void).cxx_destruct;
- (void)addMentionDetectorSpans:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearMentionDetectorSpans;
- (void)deleteLinkId;
- (void)deleteMentionDetectorSpans;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (id)mentionDetectorSpans;
- (id)mentionDetectorSpansAtIndex:(unsigned long long)arg1;
- (unsigned long long)mentionDetectorSpansCount;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMentionDetectorSpans:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
