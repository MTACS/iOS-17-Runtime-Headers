
@interface NLXSchemaSSUBackgroundUpdateAppCategoryInfo : SISchemaInstrumentationMessage {
    int  _cacheAction;
    int  _categoryType;
    struct { 
        unsigned int categoryType : 1; 
        unsigned int numAppExamplesPositive : 1; 
        unsigned int numAppExamplesNegative : 1; 
        unsigned int cacheAction : 1; 
    }  _has;
    unsigned int  _numAppExamplesNegative;
    unsigned int  _numAppExamplesPositive;
}

@property (nonatomic) int cacheAction;
@property (nonatomic) int categoryType;
@property (nonatomic) bool hasCacheAction;
@property (nonatomic) bool hasCategoryType;
@property (nonatomic) bool hasNumAppExamplesNegative;
@property (nonatomic) bool hasNumAppExamplesPositive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numAppExamplesNegative;
@property (nonatomic) unsigned int numAppExamplesPositive;

- (int)cacheAction;
- (int)categoryType;
- (void)deleteCacheAction;
- (void)deleteCategoryType;
- (void)deleteNumAppExamplesNegative;
- (void)deleteNumAppExamplesPositive;
- (id)dictionaryRepresentation;
- (bool)hasCacheAction;
- (bool)hasCategoryType;
- (bool)hasNumAppExamplesNegative;
- (bool)hasNumAppExamplesPositive;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numAppExamplesNegative;
- (unsigned int)numAppExamplesPositive;
- (bool)readFrom:(id)arg1;
- (void)setCacheAction:(int)arg1;
- (void)setCategoryType:(int)arg1;
- (void)setHasCacheAction:(bool)arg1;
- (void)setHasCategoryType:(bool)arg1;
- (void)setHasNumAppExamplesNegative:(bool)arg1;
- (void)setHasNumAppExamplesPositive:(bool)arg1;
- (void)setNumAppExamplesNegative:(unsigned int)arg1;
- (void)setNumAppExamplesPositive:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
