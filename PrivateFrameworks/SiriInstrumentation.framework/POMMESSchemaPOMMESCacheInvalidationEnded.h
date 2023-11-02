
@interface POMMESSchemaPOMMESCacheInvalidationEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numberOfCacheKeysInvalidated : 1; 
    }  _has;
    unsigned int  _numberOfCacheKeysInvalidated;
}

@property (nonatomic) bool hasNumberOfCacheKeysInvalidated;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numberOfCacheKeysInvalidated;

- (void)deleteNumberOfCacheKeysInvalidated;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfCacheKeysInvalidated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numberOfCacheKeysInvalidated;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfCacheKeysInvalidated:(bool)arg1;
- (void)setNumberOfCacheKeysInvalidated:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
