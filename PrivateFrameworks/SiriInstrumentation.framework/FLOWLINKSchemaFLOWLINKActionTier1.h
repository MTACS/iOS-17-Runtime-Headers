
@interface FLOWLINKSchemaFLOWLINKActionTier1 : SISchemaInstrumentationMessage {
    NSString * _appBundleId;
    bool  _hasAppBundleId;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppBundleId;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
