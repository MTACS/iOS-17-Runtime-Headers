
@interface DODMLASRSchemaDODMLASREntityCategoryCount : SISchemaInstrumentationMessage {
    unsigned int  _count;
    NSString * _entityCategory;
    struct { 
        unsigned int count : 1; 
    }  _has;
    bool  _hasEntityCategory;
}

@property (nonatomic) unsigned int count;
@property (nonatomic, copy) NSString *entityCategory;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasEntityCategory;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (unsigned int)count;
- (void)deleteCount;
- (void)deleteEntityCategory;
- (id)dictionaryRepresentation;
- (id)entityCategory;
- (bool)hasCount;
- (bool)hasEntityCategory;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setEntityCategory:(id)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasEntityCategory:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
