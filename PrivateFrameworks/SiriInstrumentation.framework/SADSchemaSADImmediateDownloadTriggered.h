
@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    bool  _existingAssets;
    struct { 
        unsigned int locale : 1; 
        unsigned int existingAssets : 1; 
        unsigned int retryCount : 1; 
    }  _has;
    int  _locale;
    unsigned int  _retryCount;
}

@property (nonatomic) bool existingAssets;
@property (nonatomic) bool hasExistingAssets;
@property (nonatomic) bool hasLocale;
@property (nonatomic) bool hasRetryCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int locale;
@property (nonatomic) unsigned int retryCount;

- (void)deleteExistingAssets;
- (void)deleteLocale;
- (void)deleteRetryCount;
- (id)dictionaryRepresentation;
- (bool)existingAssets;
- (bool)hasExistingAssets;
- (bool)hasLocale;
- (bool)hasRetryCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)locale;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryCount;
- (void)setExistingAssets:(bool)arg1;
- (void)setHasExistingAssets:(bool)arg1;
- (void)setHasLocale:(bool)arg1;
- (void)setHasRetryCount:(bool)arg1;
- (void)setLocale:(int)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
