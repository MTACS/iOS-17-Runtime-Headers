
@interface CDASchemaCDAElectionTimerEnded : SISchemaInstrumentationMessage {
    struct { 
        unsigned int state : 1; 
    }  _has;
    int  _state;
}

@property (nonatomic) bool hasState;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int state;

- (void)deleteState;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
