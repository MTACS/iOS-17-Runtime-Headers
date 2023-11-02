
@interface POMMESSchemaPOMMESCacheLookupEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int status : 1; 
    }  _has;
    bool  _hasResult;
    bool  _hasResultDomain;
    POMMESSchemaPOMMESCacheEntry * _result;
    NSString * _resultDomain;
    int  _status;
}

@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasResultDomain;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) POMMESSchemaPOMMESCacheEntry *result;
@property (nonatomic, copy) NSString *resultDomain;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteResult;
- (void)deleteResultDomain;
- (void)deleteStatus;
- (id)dictionaryRepresentation;
- (bool)hasResult;
- (bool)hasResultDomain;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)result;
- (id)resultDomain;
- (void)setHasResult:(bool)arg1;
- (void)setHasResultDomain:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setResultDomain:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
