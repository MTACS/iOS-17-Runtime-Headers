
@interface MTSchemaMTAppInvocationMetadata : SISchemaInstrumentationMessage {
    int  _displayMode;
    struct { 
        unsigned int displayMode : 1; 
        unsigned int isGenderAlternativeEnabled : 1; 
        unsigned int tabName : 1; 
    }  _has;
    bool  _hasLocalePair;
    bool  _hasTabSessionId;
    bool  _isGenderAlternativeEnabled;
    MTSchemaMTLocalePair * _localePair;
    int  _tabName;
    SISchemaUUID * _tabSessionId;
}

@property (nonatomic) int displayMode;
@property (nonatomic) bool hasDisplayMode;
@property (nonatomic) bool hasIsGenderAlternativeEnabled;
@property (nonatomic) bool hasLocalePair;
@property (nonatomic) bool hasTabName;
@property (nonatomic) bool hasTabSessionId;
@property (nonatomic) bool isGenderAlternativeEnabled;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) MTSchemaMTLocalePair *localePair;
@property (nonatomic) int tabName;
@property (nonatomic, retain) SISchemaUUID *tabSessionId;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDisplayMode;
- (void)deleteIsGenderAlternativeEnabled;
- (void)deleteLocalePair;
- (void)deleteTabName;
- (void)deleteTabSessionId;
- (id)dictionaryRepresentation;
- (int)displayMode;
- (bool)hasDisplayMode;
- (bool)hasIsGenderAlternativeEnabled;
- (bool)hasLocalePair;
- (bool)hasTabName;
- (bool)hasTabSessionId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGenderAlternativeEnabled;
- (id)jsonData;
- (id)localePair;
- (bool)readFrom:(id)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setHasDisplayMode:(bool)arg1;
- (void)setHasIsGenderAlternativeEnabled:(bool)arg1;
- (void)setHasLocalePair:(bool)arg1;
- (void)setHasTabName:(bool)arg1;
- (void)setHasTabSessionId:(bool)arg1;
- (void)setIsGenderAlternativeEnabled:(bool)arg1;
- (void)setLocalePair:(id)arg1;
- (void)setTabName:(int)arg1;
- (void)setTabSessionId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)tabName;
- (id)tabSessionId;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithTranslateAppContext:(id)arg1;

@end
