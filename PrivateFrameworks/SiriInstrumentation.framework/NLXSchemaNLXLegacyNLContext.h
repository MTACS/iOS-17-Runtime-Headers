
@interface NLXSchemaNLXLegacyNLContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isDictationPrompt : 1; 
        unsigned int isStrictPrompt : 1; 
        unsigned int isListenAfterSpeaking : 1; 
        unsigned int legacyContextSource : 1; 
    }  _has;
    bool  _hasLinkId;
    bool  _hasPreviousDomainName;
    bool  _isDictationPrompt;
    bool  _isListenAfterSpeaking;
    bool  _isStrictPrompt;
    int  _legacyContextSource;
    SISchemaUUID * _linkId;
    NSString * _previousDomainName;
}

@property (nonatomic) bool hasIsDictationPrompt;
@property (nonatomic) bool hasIsListenAfterSpeaking;
@property (nonatomic) bool hasIsStrictPrompt;
@property (nonatomic) bool hasLegacyContextSource;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasPreviousDomainName;
@property (nonatomic) bool isDictationPrompt;
@property (nonatomic) bool isListenAfterSpeaking;
@property (nonatomic) bool isStrictPrompt;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int legacyContextSource;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *previousDomainName;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsDictationPrompt;
- (void)deleteIsListenAfterSpeaking;
- (void)deleteIsStrictPrompt;
- (void)deleteLegacyContextSource;
- (void)deleteLinkId;
- (void)deletePreviousDomainName;
- (id)dictionaryRepresentation;
- (bool)hasIsDictationPrompt;
- (bool)hasIsListenAfterSpeaking;
- (bool)hasIsStrictPrompt;
- (bool)hasLegacyContextSource;
- (bool)hasLinkId;
- (bool)hasPreviousDomainName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDictationPrompt;
- (bool)isEqual:(id)arg1;
- (bool)isListenAfterSpeaking;
- (bool)isStrictPrompt;
- (id)jsonData;
- (int)legacyContextSource;
- (id)linkId;
- (id)previousDomainName;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDictationPrompt:(bool)arg1;
- (void)setHasIsListenAfterSpeaking:(bool)arg1;
- (void)setHasIsStrictPrompt:(bool)arg1;
- (void)setHasLegacyContextSource:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasPreviousDomainName:(bool)arg1;
- (void)setIsDictationPrompt:(bool)arg1;
- (void)setIsListenAfterSpeaking:(bool)arg1;
- (void)setIsStrictPrompt:(bool)arg1;
- (void)setLegacyContextSource:(int)arg1;
- (void)setLinkId:(id)arg1;
- (void)setPreviousDomainName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
