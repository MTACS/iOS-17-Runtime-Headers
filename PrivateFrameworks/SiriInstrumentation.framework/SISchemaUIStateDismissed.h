
@interface SISchemaUIStateDismissed : SISchemaInstrumentationMessage {
    int  _dismissalReason;
    struct { 
        unsigned int dismissalReason : 1; 
    }  _has;
}

@property (nonatomic) int dismissalReason;
@property (nonatomic) bool hasDismissalReason;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDismissalReason;
- (id)dictionaryRepresentation;
- (int)dismissalReason;
- (bool)hasDismissalReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDismissalReason:(int)arg1;
- (void)setHasDismissalReason:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
