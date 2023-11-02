
@interface ORCHSchemaORCHPommesRequestEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int status : 1; 
    }  _has;
    int  _status;
}

@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int status;

- (void)deleteStatus;
- (id)dictionaryRepresentation;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
