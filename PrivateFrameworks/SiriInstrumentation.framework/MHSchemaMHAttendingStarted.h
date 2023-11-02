
@interface MHSchemaMHAttendingStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int startReason : 1; 
    }  _has;
    int  _startReason;
}

@property (nonatomic) bool hasStartReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int startReason;

- (void)deleteStartReason;
- (id)dictionaryRepresentation;
- (bool)hasStartReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStartReason:(bool)arg1;
- (void)setStartReason:(int)arg1;
- (int)startReason;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
