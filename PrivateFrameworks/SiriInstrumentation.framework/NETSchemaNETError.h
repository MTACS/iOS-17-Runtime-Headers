
@interface NETSchemaNETError : SISchemaInstrumentationMessage {
    NSString * _description;
    NSString * _domain;
    long long  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasDescription;
    bool  _hasDomain;
}

@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) long long errorCode;
@property (nonatomic) bool hasDescription;
@property (nonatomic) bool hasDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteDescription;
- (void)deleteDomain;
- (void)deleteErrorCode;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (long long)errorCode;
- (bool)hasDescription;
- (bool)hasDomain;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setHasDescription:(bool)arg1;
- (void)setHasDomain:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
