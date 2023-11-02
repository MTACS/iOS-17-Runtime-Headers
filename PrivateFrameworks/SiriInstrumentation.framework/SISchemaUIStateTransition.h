
@interface SISchemaUIStateTransition : SISchemaInstrumentationMessage {
    int  _currentState;
    int  _dismissalReason;
    SISchemaUIStateDismissed * _dismissed;
    struct { 
        unsigned int currentState : 1; 
        unsigned int previousState : 1; 
        unsigned int siriPresentationType : 1; 
        unsigned int dismissalReason : 1; 
    }  _has;
    bool  _hasDismissed;
    bool  _hasPresenting;
    SISchemaUIStatePresenting * _presenting;
    int  _previousState;
    int  _siriPresentationType;
    unsigned long long  _whichPresentationstate;
}

@property (nonatomic) int currentState;
@property (nonatomic) int dismissalReason;
@property (nonatomic, retain) SISchemaUIStateDismissed *dismissed;
@property (nonatomic) bool hasCurrentState;
@property (nonatomic) bool hasDismissalReason;
@property (nonatomic) bool hasDismissed;
@property (nonatomic) bool hasPresenting;
@property (nonatomic) bool hasPreviousState;
@property (nonatomic) bool hasSiriPresentationType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUIStatePresenting *presenting;
@property (nonatomic) int previousState;
@property (nonatomic) int siriPresentationType;
@property (nonatomic, readonly) unsigned long long whichPresentationstate;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)currentState;
- (void)deleteCurrentState;
- (void)deleteDismissalReason;
- (void)deleteDismissed;
- (void)deletePresenting;
- (void)deletePreviousState;
- (void)deleteSiriPresentationType;
- (id)dictionaryRepresentation;
- (int)dismissalReason;
- (id)dismissed;
- (bool)hasCurrentState;
- (bool)hasDismissalReason;
- (bool)hasDismissed;
- (bool)hasPresenting;
- (bool)hasPreviousState;
- (bool)hasSiriPresentationType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)presenting;
- (int)previousState;
- (bool)readFrom:(id)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setDismissalReason:(int)arg1;
- (void)setDismissed:(id)arg1;
- (void)setHasCurrentState:(bool)arg1;
- (void)setHasDismissalReason:(bool)arg1;
- (void)setHasDismissed:(bool)arg1;
- (void)setHasPresenting:(bool)arg1;
- (void)setHasPreviousState:(bool)arg1;
- (void)setHasSiriPresentationType:(bool)arg1;
- (void)setPresenting:(id)arg1;
- (void)setPreviousState:(int)arg1;
- (void)setSiriPresentationType:(int)arg1;
- (int)siriPresentationType;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichPresentationstate;
- (void)writeTo:(id)arg1;

@end
