
@interface CNVSchemaCNVLinkMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int systemProtocol : 1; 
    }  _has;
    bool  _hasLinkActionId;
    bool  _hasLinkId;
    NSString * _linkActionId;
    SISchemaUUID * _linkId;
    int  _systemProtocol;
}

@property (nonatomic) bool hasLinkActionId;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasSystemProtocol;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *linkActionId;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) int systemProtocol;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkActionId;
- (void)deleteLinkId;
- (void)deleteSystemProtocol;
- (id)dictionaryRepresentation;
- (bool)hasLinkActionId;
- (bool)hasLinkId;
- (bool)hasSystemProtocol;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkActionId;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkActionId:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasSystemProtocol:(bool)arg1;
- (void)setLinkActionId:(id)arg1;
- (void)setLinkId:(id)arg1;
- (void)setSystemProtocol:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)systemProtocol;
- (void)writeTo:(id)arg1;

@end
