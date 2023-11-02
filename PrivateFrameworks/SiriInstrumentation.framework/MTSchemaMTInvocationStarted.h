
@interface MTSchemaMTInvocationStarted : SISchemaInstrumentationMessage {
    MTSchemaMTAppInvocationMetadata * _appInvocationMetadata;
    int  _displayMode;
    struct { 
        unsigned int isOnDeviceTranslation : 1; 
        unsigned int mobileAssetConfigVersion : 1; 
        unsigned int task : 1; 
        unsigned int inputSource : 1; 
        unsigned int isExplicitLanguageFilterEnabled : 1; 
        unsigned int isLanguageIdentificationEnabled : 1; 
        unsigned int displayMode : 1; 
        unsigned int invocationType : 1; 
    }  _has;
    bool  _hasAppInvocationMetadata;
    bool  _hasLinkId;
    bool  _hasQssSessionId;
    int  _inputSource;
    int  _invocationType;
    bool  _isExplicitLanguageFilterEnabled;
    bool  _isLanguageIdentificationEnabled;
    bool  _isOnDeviceTranslation;
    SISchemaUUID * _linkId;
    unsigned int  _mobileAssetConfigVersion;
    SISchemaUUID * _qssSessionId;
    int  _task;
    unsigned long long  _whichInvocationmetadata;
}

@property (nonatomic, retain) MTSchemaMTAppInvocationMetadata *appInvocationMetadata;
@property (nonatomic) int displayMode;
@property (nonatomic) bool hasAppInvocationMetadata;
@property (nonatomic) bool hasDisplayMode;
@property (nonatomic) bool hasInputSource;
@property (nonatomic) bool hasInvocationType;
@property (nonatomic) bool hasIsExplicitLanguageFilterEnabled;
@property (nonatomic) bool hasIsLanguageIdentificationEnabled;
@property (nonatomic) bool hasIsOnDeviceTranslation;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasMobileAssetConfigVersion;
@property (nonatomic) bool hasQssSessionId;
@property (nonatomic) bool hasTask;
@property (nonatomic) int inputSource;
@property (nonatomic) int invocationType;
@property (nonatomic) bool isExplicitLanguageFilterEnabled;
@property (nonatomic) bool isLanguageIdentificationEnabled;
@property (nonatomic) bool isOnDeviceTranslation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) unsigned int mobileAssetConfigVersion;
@property (nonatomic, retain) SISchemaUUID *qssSessionId;
@property (nonatomic) int task;
@property (nonatomic, readonly) unsigned long long whichInvocationmetadata;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)appInvocationMetadata;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppInvocationMetadata;
- (void)deleteDisplayMode;
- (void)deleteInputSource;
- (void)deleteInvocationType;
- (void)deleteIsExplicitLanguageFilterEnabled;
- (void)deleteIsLanguageIdentificationEnabled;
- (void)deleteIsOnDeviceTranslation;
- (void)deleteLinkId;
- (void)deleteMobileAssetConfigVersion;
- (void)deleteQssSessionId;
- (void)deleteTask;
- (id)dictionaryRepresentation;
- (int)displayMode;
- (bool)hasAppInvocationMetadata;
- (bool)hasDisplayMode;
- (bool)hasInputSource;
- (bool)hasInvocationType;
- (bool)hasIsExplicitLanguageFilterEnabled;
- (bool)hasIsLanguageIdentificationEnabled;
- (bool)hasIsOnDeviceTranslation;
- (bool)hasLinkId;
- (bool)hasMobileAssetConfigVersion;
- (bool)hasQssSessionId;
- (bool)hasTask;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (int)inputSource;
- (int)invocationType;
- (bool)isEqual:(id)arg1;
- (bool)isExplicitLanguageFilterEnabled;
- (bool)isLanguageIdentificationEnabled;
- (bool)isOnDeviceTranslation;
- (id)jsonData;
- (id)linkId;
- (unsigned int)mobileAssetConfigVersion;
- (id)qssSessionId;
- (bool)readFrom:(id)arg1;
- (void)setAppInvocationMetadata:(id)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setHasAppInvocationMetadata:(bool)arg1;
- (void)setHasDisplayMode:(bool)arg1;
- (void)setHasInputSource:(bool)arg1;
- (void)setHasInvocationType:(bool)arg1;
- (void)setHasIsExplicitLanguageFilterEnabled:(bool)arg1;
- (void)setHasIsLanguageIdentificationEnabled:(bool)arg1;
- (void)setHasIsOnDeviceTranslation:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasMobileAssetConfigVersion:(bool)arg1;
- (void)setHasQssSessionId:(bool)arg1;
- (void)setHasTask:(bool)arg1;
- (void)setInputSource:(int)arg1;
- (void)setInvocationType:(int)arg1;
- (void)setIsExplicitLanguageFilterEnabled:(bool)arg1;
- (void)setIsLanguageIdentificationEnabled:(bool)arg1;
- (void)setIsOnDeviceTranslation:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setMobileAssetConfigVersion:(unsigned int)arg1;
- (void)setQssSessionId:(id)arg1;
- (void)setTask:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)task;
- (unsigned long long)whichInvocationmetadata;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)lt_initWithTask:(long long)arg1 inputMode:(long long)arg2 invocationType:(long long)arg3 explicitLanguageFilterEnabled:(bool)arg4 languageIdentificationEnabled:(bool)arg5 onDevice:(bool)arg6 translateAppContext:(id)arg7;

@end
