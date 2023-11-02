
@interface MHSchemaMHApplicationPlaybackAttempted : SISchemaInstrumentationMessage {
    NSString * _appBundleName;
    NSString * _appBundleVersion;
    bool  _hasAppBundleName;
    bool  _hasAppBundleVersion;
}

@property (nonatomic, copy) NSString *appBundleName;
@property (nonatomic, copy) NSString *appBundleVersion;
@property (nonatomic) bool hasAppBundleName;
@property (nonatomic) bool hasAppBundleVersion;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)appBundleName;
- (id)appBundleVersion;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAppBundleName;
- (void)deleteAppBundleVersion;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleName;
- (bool)hasAppBundleVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleName:(id)arg1;
- (void)setAppBundleVersion:(id)arg1;
- (void)setHasAppBundleName:(bool)arg1;
- (void)setHasAppBundleVersion:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
