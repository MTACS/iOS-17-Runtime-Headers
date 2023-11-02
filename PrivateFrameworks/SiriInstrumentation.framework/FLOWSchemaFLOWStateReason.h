
@interface FLOWSchemaFLOWStateReason : SISchemaInstrumentationMessage {
    struct { 
        unsigned int statusReason : 1; 
    }  _has;
    int  _statusReason;
}

@property (nonatomic) bool hasStatusReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int statusReason;

- (void)deleteStatusReason;
- (id)dictionaryRepresentation;
- (bool)hasStatusReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusReason:(bool)arg1;
- (void)setStatusReason:(int)arg1;
- (int)statusReason;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
