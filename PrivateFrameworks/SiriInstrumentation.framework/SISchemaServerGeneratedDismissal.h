
@interface SISchemaServerGeneratedDismissal : SISchemaInstrumentationMessage {
    struct { 
        unsigned int serverGeneratedDismissalReason : 1; 
    }  _has;
    int  _serverGeneratedDismissalReason;
}

@property (nonatomic) bool hasServerGeneratedDismissalReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int serverGeneratedDismissalReason;

- (void)deleteServerGeneratedDismissalReason;
- (id)dictionaryRepresentation;
- (bool)hasServerGeneratedDismissalReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)serverGeneratedDismissalReason;
- (void)setHasServerGeneratedDismissalReason:(bool)arg1;
- (void)setServerGeneratedDismissalReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
