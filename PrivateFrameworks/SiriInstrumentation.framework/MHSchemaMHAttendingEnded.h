
@interface MHSchemaMHAttendingEnded : SISchemaInstrumentationMessage {
    int  _endReason;
    struct { 
        unsigned int endReason : 1; 
    }  _has;
}

@property (nonatomic) int endReason;
@property (nonatomic) bool hasEndReason;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEndReason;
- (id)dictionaryRepresentation;
- (int)endReason;
- (bool)hasEndReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEndReason:(int)arg1;
- (void)setHasEndReason:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
