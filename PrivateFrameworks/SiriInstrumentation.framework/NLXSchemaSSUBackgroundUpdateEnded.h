
@interface NLXSchemaSSUBackgroundUpdateEnded : SISchemaInstrumentationMessage {
    NSArray * _appInfos;
    bool  _hasModelEncoderLocale;
    NSString * _modelEncoderLocale;
}

@property (nonatomic, copy) NSArray *appInfos;
@property (nonatomic) bool hasModelEncoderLocale;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelEncoderLocale;

- (void).cxx_destruct;
- (void)addAppInfo:(id)arg1;
- (id)appInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)appInfoCount;
- (id)appInfos;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAppInfo;
- (void)deleteAppInfo;
- (void)deleteModelEncoderLocale;
- (id)dictionaryRepresentation;
- (bool)hasModelEncoderLocale;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelEncoderLocale;
- (bool)readFrom:(id)arg1;
- (void)setAppInfos:(id)arg1;
- (void)setHasModelEncoderLocale:(bool)arg1;
- (void)setModelEncoderLocale:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
