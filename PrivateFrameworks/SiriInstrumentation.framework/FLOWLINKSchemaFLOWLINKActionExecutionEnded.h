
@interface FLOWLINKSchemaFLOWLINKActionExecutionEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasOutputToPresent : 1; 
    }  _has;
    bool  _hasOutputToPresent;
}

@property (nonatomic) bool hasHasOutputToPresent;
@property (nonatomic) bool hasOutputToPresent;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteHasOutputToPresent;
- (id)dictionaryRepresentation;
- (bool)hasHasOutputToPresent;
- (bool)hasOutputToPresent;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHasOutputToPresent:(bool)arg1;
- (void)setHasOutputToPresent:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
