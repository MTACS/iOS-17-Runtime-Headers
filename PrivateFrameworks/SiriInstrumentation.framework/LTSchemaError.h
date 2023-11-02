
@interface LTSchemaError : SISchemaInstrumentationMessage {
    unsigned int  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    bool  _hasDomain;
}

@property (nonatomic) unsigned int code;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool hasCode;
@property (nonatomic) bool hasDomain;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (unsigned int)code;
- (void)deleteCode;
- (void)deleteDomain;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCode:(unsigned int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
