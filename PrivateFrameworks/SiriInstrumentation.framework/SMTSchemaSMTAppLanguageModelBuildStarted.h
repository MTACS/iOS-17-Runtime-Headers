
@interface SMTSchemaSMTAppLanguageModelBuildStarted : SISchemaInstrumentationMessage {
    NSString * _appBundleId;
    unsigned long long  _artifactSizeInBytes;
    struct { 
        unsigned int artifactSizeInBytes : 1; 
        unsigned int locale : 1; 
    }  _has;
    bool  _hasAppBundleId;
    int  _locale;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic) unsigned long long artifactSizeInBytes;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic) bool hasArtifactSizeInBytes;
@property (nonatomic) bool hasLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (unsigned long long)artifactSizeInBytes;
- (void)deleteAppBundleId;
- (void)deleteArtifactSizeInBytes;
- (void)deleteLocale;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasArtifactSizeInBytes;
- (bool)hasLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setArtifactSizeInBytes:(unsigned long long)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (void)setHasArtifactSizeInBytes:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setLocale:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
