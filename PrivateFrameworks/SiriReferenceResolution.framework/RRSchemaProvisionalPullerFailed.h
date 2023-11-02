
@interface RRSchemaProvisionalPullerFailed : SISchemaInstrumentationMessage {
    struct { 
        unsigned int timeout : 1; 
    }  _has;
    bool  _hasName;
    NSString * _name;
    bool  _timeout;
}

@property (nonatomic) bool hasName;
@property (nonatomic) bool hasTimeout;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool timeout;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasTimeout;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setHasName:(bool)arg1;
- (void)setHasTimeout:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setTimeout:(bool)arg1;
- (bool)timeout;
- (void)writeTo:(id)arg1;

@end
