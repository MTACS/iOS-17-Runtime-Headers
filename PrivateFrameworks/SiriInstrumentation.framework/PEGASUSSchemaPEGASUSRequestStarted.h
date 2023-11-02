
@interface PEGASUSSchemaPEGASUSRequestStarted : SISchemaInstrumentationMessage {
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
        unsigned int requestType : 1; 
    }  _has;
    int  _requestType;
}

@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int requestType;

- (void)deleteExists;
- (void)deleteRequestType;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setRequestType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
