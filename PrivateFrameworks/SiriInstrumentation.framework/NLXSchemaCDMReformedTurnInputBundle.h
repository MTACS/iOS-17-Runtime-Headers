
@interface NLXSchemaCDMReformedTurnInputBundle : SISchemaInstrumentationMessage {
    NLXSchemaCDMTurnInput * _currentTurn;
    struct { 
        unsigned int type : 1; 
        unsigned int previousTurnsSkip : 1; 
    }  _has;
    bool  _hasCurrentTurn;
    unsigned int  _previousTurnsSkip;
    int  _type;
}

@property (nonatomic, retain) NLXSchemaCDMTurnInput *currentTurn;
@property (nonatomic) bool hasCurrentTurn;
@property (nonatomic) bool hasPreviousTurnsSkip;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int previousTurnsSkip;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)currentTurn;
- (void)deleteCurrentTurn;
- (void)deletePreviousTurnsSkip;
- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasCurrentTurn;
- (bool)hasPreviousTurnsSkip;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)previousTurnsSkip;
- (bool)readFrom:(id)arg1;
- (void)setCurrentTurn:(id)arg1;
- (void)setHasCurrentTurn:(bool)arg1;
- (void)setHasPreviousTurnsSkip:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPreviousTurnsSkip:(unsigned int)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end
