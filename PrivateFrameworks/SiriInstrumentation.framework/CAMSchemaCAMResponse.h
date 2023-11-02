
@interface CAMSchemaCAMResponse : SISchemaInstrumentationMessage {
    int  _action;
    NSString * _enforcer;
    struct { 
        unsigned int action : 1; 
        unsigned int responseStatusCode : 1; 
    }  _has;
    bool  _hasEnforcer;
    unsigned int  _responseStatusCode;
}

@property (nonatomic) int action;
@property (nonatomic, copy) NSString *enforcer;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasEnforcer;
@property (nonatomic) bool hasResponseStatusCode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int responseStatusCode;

- (void).cxx_destruct;
- (int)action;
- (void)deleteAction;
- (void)deleteEnforcer;
- (void)deleteResponseStatusCode;
- (id)dictionaryRepresentation;
- (id)enforcer;
- (bool)hasAction;
- (bool)hasEnforcer;
- (bool)hasResponseStatusCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)responseStatusCode;
- (void)setAction:(int)arg1;
- (void)setEnforcer:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasEnforcer:(bool)arg1;
- (void)setHasResponseStatusCode:(bool)arg1;
- (void)setResponseStatusCode:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
