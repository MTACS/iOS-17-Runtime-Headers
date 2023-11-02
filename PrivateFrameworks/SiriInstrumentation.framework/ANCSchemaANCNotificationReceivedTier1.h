
@interface ANCSchemaANCNotificationReceivedTier1 : SISchemaInstrumentationMessage {
    NSString * _appBundleId;
    struct { 
        unsigned int isRedactedDueToOptOut : 1; 
    }  _has;
    bool  _hasAppBundleId;
    bool  _hasLinkId;
    bool  _isRedactedDueToOptOut;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic) bool hasIsRedactedDueToOptOut;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool isRedactedDueToOptOut;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppBundleId;
- (void)deleteIsRedactedDueToOptOut;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasIsRedactedDueToOptOut;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRedactedDueToOptOut;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (void)setHasIsRedactedDueToOptOut:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setIsRedactedDueToOptOut:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
