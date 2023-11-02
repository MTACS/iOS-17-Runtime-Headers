
@interface SRSTSchemaSRSTStateTransitionEvent : SISchemaInstrumentationMessage {
    int  _currentState;
    struct { 
        unsigned int currentState : 1; 
        unsigned int previousState : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _previousState;
    int  _reason;
}

@property (nonatomic) int currentState;
@property (nonatomic) bool hasCurrentState;
@property (nonatomic) bool hasPreviousState;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int previousState;
@property (nonatomic) int reason;

- (int)currentState;
- (void)deleteCurrentState;
- (void)deletePreviousState;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasCurrentState;
- (bool)hasPreviousState;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)previousState;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setCurrentState:(int)arg1;
- (void)setHasCurrentState:(bool)arg1;
- (void)setHasPreviousState:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setPreviousState:(int)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
