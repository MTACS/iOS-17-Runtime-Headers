
@interface FLOWSchemaFLOWSmsAttachmentMetadataTier1 : SISchemaInstrumentationMessage {
    NSString * _foregroundAppBundleId;
    bool  _hasForegroundAppBundleId;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSString *foregroundAppBundleId;
@property (nonatomic) bool hasForegroundAppBundleId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteForegroundAppBundleId;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (id)foregroundAppBundleId;
- (bool)hasForegroundAppBundleId;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setForegroundAppBundleId:(id)arg1;
- (void)setHasForegroundAppBundleId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
