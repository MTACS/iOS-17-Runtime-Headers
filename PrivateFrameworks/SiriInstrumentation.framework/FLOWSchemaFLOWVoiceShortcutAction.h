
@interface FLOWSchemaFLOWVoiceShortcutAction : SISchemaInstrumentationMessage {
    NSString * _appId;
    bool  _hasAppId;
    bool  _hasIntentCategory;
    bool  _hasIntentNLDomain;
    bool  _hasIntentName;
    NSString * _intentCategory;
    NSString * _intentNLDomain;
    NSString * _intentName;
}

@property (nonatomic, copy) NSString *appId;
@property (nonatomic) bool hasAppId;
@property (nonatomic) bool hasIntentCategory;
@property (nonatomic) bool hasIntentNLDomain;
@property (nonatomic) bool hasIntentName;
@property (nonatomic, copy) NSString *intentCategory;
@property (nonatomic, copy) NSString *intentNLDomain;
@property (nonatomic, copy) NSString *intentName;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)appId;
- (void)deleteAppId;
- (void)deleteIntentCategory;
- (void)deleteIntentNLDomain;
- (void)deleteIntentName;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasIntentCategory;
- (bool)hasIntentNLDomain;
- (bool)hasIntentName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)intentCategory;
- (id)intentNLDomain;
- (id)intentName;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setHasAppId:(bool)arg1;
- (void)setHasIntentCategory:(bool)arg1;
- (void)setHasIntentNLDomain:(bool)arg1;
- (void)setHasIntentName:(bool)arg1;
- (void)setIntentCategory:(id)arg1;
- (void)setIntentNLDomain:(id)arg1;
- (void)setIntentName:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
