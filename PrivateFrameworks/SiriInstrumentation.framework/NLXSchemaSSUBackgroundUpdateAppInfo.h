
@interface NLXSchemaSSUBackgroundUpdateAppInfo : SISchemaInstrumentationMessage {
    NSString * _appBundleIdSaltedHash;
    NSArray * _categoryInfos;
    struct { 
        unsigned int numCacheFilesRemoved : 1; 
    }  _has;
    bool  _hasAppBundleIdSaltedHash;
    unsigned int  _numCacheFilesRemoved;
}

@property (nonatomic, copy) NSString *appBundleIdSaltedHash;
@property (nonatomic, copy) NSArray *categoryInfos;
@property (nonatomic) bool hasAppBundleIdSaltedHash;
@property (nonatomic) bool hasNumCacheFilesRemoved;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numCacheFilesRemoved;

- (void).cxx_destruct;
- (void)addCategoryInfos:(id)arg1;
- (id)appBundleIdSaltedHash;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)categoryInfos;
- (id)categoryInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryInfosCount;
- (void)clearCategoryInfos;
- (void)deleteAppBundleIdSaltedHash;
- (void)deleteCategoryInfos;
- (void)deleteNumCacheFilesRemoved;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleIdSaltedHash;
- (bool)hasNumCacheFilesRemoved;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numCacheFilesRemoved;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleIdSaltedHash:(id)arg1;
- (void)setCategoryInfos:(id)arg1;
- (void)setHasAppBundleIdSaltedHash:(bool)arg1;
- (void)setHasNumCacheFilesRemoved:(bool)arg1;
- (void)setNumCacheFilesRemoved:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
